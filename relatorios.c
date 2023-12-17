#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"clientes.h"
#include"funcionarios.h"
#include"produtos.h"
#include"vendas.h"

// Módulo relatórios
// Tela menu relatorios
int tela_menu_relatorios(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                       - - - - Menu Relatórios - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatórios de Clientes                                    ///\n");
  printf("///           2 - Relatórios de Produtos                                    ///\n");
  printf("///           3 - Relatórios de Funcionários                                ///\n");
  printf("///           4 - Relatórios de Vendas                                      ///\n");
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
// Fim tela menu relatorios

// Tela relatórios clientes
int tela_relatorios_clientes(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Clientes - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Clientes                               ///\n");
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
// Fim tela relatórios clientes

// Tela relatório geral de clientes
void tela_relatorio_geral_clientes(void){
  FILE *fp;
  fp = fopen("clientes.dat", "rb");
  Cliente* cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Clientes - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  while(fread(cliente, sizeof(Cliente), 1, fp)){
    printf("Nome: %s\n", cliente->nome);
    printf("CPF: %s\n", cliente->cpf);
    printf("Telefone: %s\n", cliente->tel);
    printf("E-mail: %s\n", cliente->email);
    printf("Id: %s\n", cliente->id);
    printf("Status: %c\n", cliente->status);
  }
  free(cliente);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de clientes

// Tela relatórios produtos
int tela_relatorios_produtos(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Produtos - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Produtos                               ///\n");
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
// Fim tela relatórios produtos

// Tela relatório geral de produtos
void tela_relatorio_geral_produtos(void){
  FILE *fp;
  Produto* produto;
  fp = fopen("produtos.dat", "rb");
  produto = (Produto*) malloc(sizeof(Produto));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Produtos - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  
  while(fread(produto, sizeof(Produto), 1, fp)){
    printf("Marca: %s\n", produto->marca);
    printf("Modelo: %s\n", produto->modelo);
    printf("Preço: %s\n", produto->preco);
    printf("Estoque: %s\n", produto->estoque);
    printf("Id: %s\n", produto->codigo);
    printf("Status: %c\n", produto->status);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de produtos

// Tela relatórios funcionários
int tela_relatorios_funcionarios(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Funcionários - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Funcionários                               ///\n");
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
// Fim tela relatórios funcionários

// Tela relatório geral de funcionários
void tela_relatorio_geral_funcionarios(void){
  FILE *fp;
  Funcionario* funcionario;
  fp = fopen("funcionarios.dat", "rb");
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Funcionarios - - - -           ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  
  while(fread(funcionario, sizeof(Funcionario), 1, fp)){
    printf("Nome: %s\n", funcionario->nome);
    printf("CPF: %s\n", funcionario->cpf);
    printf("Telefone: %s\n", funcionario->tel);
    printf("E-mail: %s\n", funcionario->email);
    printf("Id: %s\n", funcionario->id);
    printf("Status: %c\n", funcionario->status);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de produtos

// Tela relatórios vendas
int tela_relatorios_vendas(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Vendas - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Vendas                                 ///\n");
  printf("///           2 - Vendas por Funcionário                                 ///\n");
  printf("///           3 - Vendas por Cliente                                 ///\n");
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
// Fim tela relatórios vendas

// Tela relatório geral de vendas
void tela_relatorio_geral_vendas(void){
  FILE *fp;
  fp = fopen("vendas.dat", "rb");
  Venda* venda;
  venda = (Venda*) malloc(sizeof(Venda));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Vendas - - - -                 ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  
  while(fread(venda, sizeof(Venda), 1, fp)){
    printf("CPF Funcionário: %s\n", venda->cpfF);
    printf("CPF Cliente: %s\n", venda->cpfC);
    printf("Código do Produto: %s\n", venda->codProd);
    printf("Data da Venda: %s\n", venda->data);
    printf("Valor da Venda: %s\n", venda->valor);
    printf("Status: %c\n", venda->status);
    printf("Id: %s\n", venda->id);
  }  

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de vendas

// Tela relatório vendas por funcionário
void tela_relatorio_vendas_funcionario(void){
  int vendas = 0;
  char *cpfF;
  cpfF = (char*) malloc(12*sizeof(char));
  FILE *fv;
  fv = fopen("vendas.dat", "rb");
  FILE *ff;
  ff = fopen("funcionarios.dat", "rb");
  Venda* venda;
  venda = (Venda*) malloc(sizeof(Venda));
  Funcionario* funcionario;
  funcionario = (Funcionario*) malloc(sizeof(Funcionario));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///            - - - - Relatório Vendas Por Funcionario - - - -             ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF do funcionário:(só números) ");
  scanf("%s", cpfF);
  getchar();
  while(!validaCPF(cpfF)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpfF);
  }

  int f = 0;
  while(fread(funcionario, sizeof(Funcionario), 1, ff)){
    if(strcmp(funcionario->cpf, cpfF) == 0){
      f++;
    }
  }

  if(f == 0){
    printf("Funcionário não encontrado!");
  } else {
    while(fread(venda, sizeof(Venda), 1, fv)){
      if(strcmp(venda->cpfF, cpfF) == 0){
        printf("CPF Cliente: %s\n", venda->cpfC);
        printf("Código do Produto: %s\n", venda->codProd);
        printf("Data da Venda: %s\n", venda->data);
        printf("Valor da Venda: %s\n", venda->valor);
        printf("Status: %c\n", venda->status);
        printf("Id: %s\n", venda->id);
        vendas++;
      }
    } 
    printf("O funcionário %s realizou %d vendas: ", (cpfF, vendas));
  }

  fclose(fv); 
  fclose(ff);
  free(funcionario); 
  free(venda); 
  free(cpfF); 

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório vendas por funcionário

// Tela relatório vendas por cliente
void tela_relatorio_vendas_cliente(void){
  int vendas = 0;
  char *cpfC;
  cpfC = (char*) malloc(12*sizeof(char));
  FILE *fv;
  fv = fopen("vendas.dat", "rb");
  FILE *fc;
  fc = fopen("clientes.dat", "rb");
  Venda* venda;
  venda = (Venda*) malloc(sizeof(Venda));
  Cliente* cliente;
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///            - - - - Relatório Vendas Por Cliente - - - -             ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF do cliente:(só números) ");
  scanf("%s", cpfC);
  getchar();
  while(!validaCPF(cpfC)){
    printf("CPF inválido! Digite novamente: ");
    scanf("%s", cpfC);
  }

  int f = 0;
  while(fread(cliente, sizeof(Cliente), 1, fc)){
    if(strcmp(cliente->cpf, cpfC) == 0){
      f++;
    }
  }

  if(f == 0){
    printf("Cliente não encontrado!");
  } else {
    while(fread(venda, sizeof(Venda), 1, fv)){
      printf("1");
      if(strcmp(venda->cpfC, cpfC) == 0){
        printf("CPF funcionário: %s\n", venda->cpfF);
        printf("CPF cliente: %s\n", venda->cpfC);
        printf("Código do produto: %s\n", venda->codProd);
        printf("Data: %s\n", venda->data);
        printf("Valor: %s\n", venda->valor);
        printf("Id: %s\n", venda->id);
        printf("Status: %c\n", venda->status);
        vendas++;
      }
    }
    printf("O cliente %s ", venda->cpfC);
    printf("realizou %d vendas", vendas);
  }

  fclose(fv); 
  fclose(fc);
  free(cliente); 
  free(venda); 
  free(cpfC); 

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório vendas por cliente
// Fim módulo relatórios