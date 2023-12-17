#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include<time.h> // funções relacionadas a data e hora
#include"cabecalhos.h"
#include"util.h"
#include"funcionarios.h"
#include"produtos.h"
#include"clientes.h"
#include"vendas.h"

#define True 1
#define False 0

// Módulo vendas
// Tela vendas
int tela_menu_vendas(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                         - - - - Menu Vendas - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Venda                                           ///\n");
  printf("///           2 - Pesquisar Venda                                           ///\n");
  printf("///           3 - Atualizar Venda                                           ///\n");
  printf("///           4 - Deletar Venda                                             ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  scanf("%d", &op);
  getchar();
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
  return op;
}
// Fim tela vendas

// Tela cadastrar vendas
void tela_cadastrar_vendas(void){
  char *id;
  id = (char*) malloc(7*sizeof(char));
  int i = 0;
  Venda *venda;
  venda = (Venda*) malloc(sizeof(Venda));
  Produto *produto;
  produto = (Produto*) malloc(sizeof(Produto));
  FILE* fv;
  fv = fopen("vendas.dat", "rb");
  FILE* fp;
  fp = fopen("produtos.dat", "rb");
  FILE* fc;
  fc = fopen("clientes.dat", "rb");
  FILE* ff;
  ff = fopen("funcionarios.dat", "rb");

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                      - - - - Cadastrar Vendas - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  while(fread(venda, sizeof(Venda), 1, fv)){
    printf("0");
    i++;
  }
  fclose(fv);

  fv = fopen("vendas.dat", "ab");

  printf("CPF do funcionário vendedor: (Só números) ");
  scanf("%s", venda->cpfF);
  getchar();
  while(!validaCPF(venda->cpfF)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", venda->cpfF);
    getchar();
  }

  printf("CPF do cliente: (Só números) ");
  scanf("%s", venda->cpfC);
  getchar();
  while(!validaCPF(venda->cpfC)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", venda->cpfC);
    getchar();
  }

  printf("Código do produto: (Só números) ");
  scanf("%s", venda->codProd);
  getchar();
  while(!ehNum(venda->codProd)){
    printf("Código inválido! Digite novamente: ");
    scanf("%s", venda->codProd);
    getchar();
  }

  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  char data[11];
  sprintf(data, "%02d/%02d/%04d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  strcpy(venda->data, data);

  while(fread(produto, sizeof(Produto), 1, fp)){
    if(strcmp(produto->codigo, venda->codProd) == 0){
      strcpy(venda->valor, produto->preco);
    }
  }

  venda->status = '1';

  if(fp == NULL){
    printf("Arquivo não encontrado");
  }

  sprintf(id, "%d", i + 1);
  strcpy(venda->id, id);

  fwrite(venda, sizeof(Venda), 1, fv);

  char novoProd;
  printf("Deseja comprar outro produto?\n1 - Sim\n2 - Não\n");
  scanf("%s", &novoProd);
  getchar();
  while(novoProd != '2'){
    if(novoProd == '1'){
      printf("Código do produto: (Só números) ");
      scanf("%s", venda->codProd);
      getchar();
      while(!ehNum(venda->codProd)){
        printf("Código inválido! Digite novamente: ");
        scanf("%s", venda->codProd);
        getchar();
      }
      fwrite(venda, sizeof(Venda), 1, fv);
      printf("Deseja comprar outro produto?\n1 - Sim\n2 - Não\n");
      scanf("%s", &novoProd);
      getchar();
    } else if(novoProd < '1' && novoProd > '2'){
      printf("Escolha inválida! Digite novamente: ");
      scanf("%s", &novoProd);
      getchar();
    }
  }

  fclose(fv);
  fclose(fp);
  fclose(fc);
  fclose(ff);
  free(venda);
  free(id);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar vendas

// Tela pesquisar venda
void tela_pesquisar_vendas(void){
  char* id;
  id = (char*) malloc(7*sizeof(char));
  FILE* fp;
  fp = fopen("vendas.dat", "rb");
  Venda* venda;
  venda = (Venda*) malloc(sizeof(Venda));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Venda - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o id: ");
  scanf("%s", id);
  getchar();
  while(!ehNum(id)){
    printf("Código inválido! Digite novamente");
    scanf("%s", id);
  }

  if(fp == NULL){
    printf("Arquivo não encontrado!");
  }

  while(fread(venda, sizeof(Venda), 1, fp)){
    if ((strcmp(venda->id, id) == False) && (venda->status == '1')){
      fclose(fp);
      printf("CPF funcionário: %s\n", venda->cpfF);
      printf("CPF cliente: %s\n", venda->cpfC);
      printf("Código do produto: %s\n", venda->codProd);
      printf("Data: %s\n", venda->data);
      printf("Valor: %s\n", venda->valor);
      printf("Id: %s\n", venda->id);
      printf("Status: %c\n", venda->status);
    }
  }
  free(venda);
  free(id);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar venda

// Tela deletar venda
void tela_deletar_vendas(void){
  char* id;
  char op;
  id = (char*) malloc(7*sizeof(char));
  FILE* fp;
  fp = fopen("vendas.dat", "rb");
  FILE* f;
  f = fopen("temp.dat", "ab");
  Venda* venda;
  venda = (Venda*) malloc(sizeof(Venda));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Venda - - - -                        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("Digite o id: (Só números) ");
  scanf("%s", id);
  while(!ehNum(id)){
    printf("Id inválido! Digite novamente: ");
    scanf("%s", id);
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
    while(fread(venda, sizeof(Venda), 1, fp)){
      if(strcmp(venda->id, id) != 0){
        fwrite(venda, sizeof(Venda), 1, f);
      }
    }
  } else {
    while(fread(venda, sizeof(Venda), 1, fp)){
      if(strcmp(venda->id, id) == 0){
        venda->status = '0';
      }
      fwrite(venda, sizeof(Venda), 1, f);
    }
  }

  free(venda);
  free(id);
  fclose(fp);
  fclose(f);           
  
  remove("vendas.dat");
  rename("temp.dat", "vendas.dat");

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim módulo vendas