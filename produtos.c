#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"produtos.h"

#define True 1
#define False 0

typedef struct produto Produtos;

// Módulo produtos
// Tela menu produtos
int tela_menu_produtos(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                        - - - - Menu Produtos - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Produto                                         ///\n");
  printf("///           2 - Pesquisar Produto                                         ///\n");
  printf("///           3 - Atualizar Produto                                         ///\n");
  printf("///           4 - Deletar Produto                                           ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela menu produtos

// Tela cadastrar produto
void tela_cadastrar_produtos(void){
  Produto *produto;
  produto = (Produto*) malloc(sizeof(Produto));
  FILE* fp;
  fp = fopen("produtos.dat", "ab");

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Produto - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  printf("Marca: ");
  scanf("%s", produto->marca);
  getchar();
  while(!validaNome(produto->marca)){
    printf("Marca inválida! Digite novamente:");
    scanf("%s", produto->marca);
    getchar();
  }

  printf("Modelo: ");
  scanf("%s", produto->modelo);
  getchar();
    
  printf("Preço: ");
  scanf("%s", produto->preco);
  getchar();
  while(!validaPreco(produto->preco)){
    printf("Preço inválido! Digite novamente: ");
    scanf("%s", produto->preco);
    getchar();
  }

  printf("Estoque: ");
  scanf("%s", produto->estoque);
  getchar();
  while(!ehNum(produto->estoque)){
    printf("Estoque inválido! Digite novamente:");
    scanf("%s", produto->estoque);
    getchar();
  }
  produto->status = '1';

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  // if(fread(produto, sizeof(Produto), 1, fp) == False){
  //   strcpy(produto->codigo, "1");
  // }

  fwrite(produto, sizeof(Produto), 1, fp);
  fclose(fp);
  free(produto);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar produto

// Tela pesquisar produto
void tela_pesquisar_produtos(void){
  char* codigo;
  codigo = (char*) malloc(7*sizeof(char));
  FILE* fp;
  fp = fopen("produtos.dat", "rb");
  Produto* produto;
  produto = (Produto*) malloc(sizeof(Produto));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Produtos - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Código:(Só números) ");
  scanf("%s", codigo);
  getchar();
  while(!ehNum(codigo)){
    printf("Código inválido. Digite novamente: ");
    scanf("%s", codigo);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(produto, sizeof(Produto), 1, fp)){
    if((strcmp(produto->codigo, codigo) == False) && (produto->status == '1')){
      fclose(fp);
      printf("Marca: %s\n", produto->marca);
      printf("Modelo: %s\n", produto->modelo);
      printf("Preço: %s\n", produto->preco);
      printf("Estoque: %s\n", produto->estoque);
      printf("Código: %s\n", produto->codigo);
      printf("Status: %c\n", produto->status);
    }
  }
  free(produto);
  free(codigo);
  
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar produto

// Tela atualizar produto
void tela_atualizar_produtos(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Atualizar Produtos - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código/ a marca/ o modelo:                            ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar produto

// Tela deletar produto
void tela_deletar_produtos(void){
  char* codigo;
  char op;
  codigo = (char*) malloc(7*sizeof(char));
  FILE* fp;
  fp = fopen("produtos.dat", "rb");
  FILE* f;
  f = fopen("temp.dat", "wb");
  Produto* produto;
  produto = (Produto*) malloc(sizeof(Produto));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Produtos - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Código:(só números) ");
  scanf("%s", codigo);
  getchar();
  while(!ehNum(codigo)){
    printf("Código inválido! Digite novamente: ");
    scanf("%s", codigo);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  printf("1 - Excluir permanentemente\n2 - Desativar o status ON do registro:\n");
  scanf("%s", &op);
  getchar();
  while(!ehNum(&op) || op < '1' || op > '2'){
    printf("Escolha inválida! Digite novamente: ");
    scanf("%s", &op);
    getchar();
  }

  if(op == '1'){
    while(fread(produto, sizeof(Produto), 1, fp)){
      if(strcmp(produto->codigo, codigo) != 0){
        fwrite(produto, sizeof(Produto), 1, f);
      }
    }
  } else {
    while(fread(produto, sizeof(Produto), 1, fp)){
      if(strcmp(produto->codigo, codigo) == 0){
        produto->status = '0';
      }
      fwrite(produto, sizeof(Produto), 1, f);
    }
  }

  free(produto);
  free(codigo);
  fclose(fp);
  fclose(f);

  remove("funcionarios.dat");
  rename("temp.dat", "funcionarios.dat");

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar produto
// Fim módulo produtos