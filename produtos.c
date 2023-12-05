#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"produtos.h"

#define True 1
#define False 0

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
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕa-záéíóúâêôçàãõ ]", produto->marca);
  getchar();
  while(!validaNome(produto->marca)){
    printf("Marca inválida! Digite novamente:");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕa-záéíóúâêôçàãõ ]", produto->marca);
    getchar();
  }

  printf("Modelo: ");
  scanf("%[0-9A-Za-z-]", produto->modelo);
  getchar();
    
  printf("Preço: ");
  scanf("%[0-9,.]", produto->preco);
  getchar();
  while(validaPreco(produto->preco)){
    printf("Preço inválido! Digite novamente:");
    scanf("%[0-9,.]", produto->preco);
    getchar();
  }

  printf("Estoque: ");
  scanf("%[^\n]", produto->estoque);
  getchar();
  while(!ehNum(produto->estoque)){
    printf("Estoque inválido! Digite novamente:");
    scanf("%[^\n]", produto->estoque);
    getchar();
  }
  produto->status = True;

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  if(fread(produto, sizeof(Produto), 1, fp) == False){
    produto->codigo = 1;
  }

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
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Produtos - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código/ a marca/ o modelo:                            ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
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
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Produtos - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código/ a marca/ o modelo:                            ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar produto
// Fim módulo produtos