#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<stdlib.h> // importa funções que podem ser úteis ao projeto
#include<string.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"
#include"clientes.h"

// Módulo clientes
// Tela menu clientes
int tela_menu_clientes(void){
  int op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                        - - - - Menu Cliente - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Cadastrar Cliente                                         ///\n");
  printf("///           2 - Pesquisar Cliente                                         ///\n");
  printf("///           3 - Atualizar Cliente                                         ///\n");
  printf("///           4 - Deletar Cliente                                           ///\n");
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
// Fim tela menu clientes

// Tela cadastrar cliente
void tela_cadastrar_clientes(void){
  FILE* fp;
  Cliente* cliente;
  fp = fopen("clientes.dat", "ab");
  cliente = (Cliente*) malloc(sizeof(Cliente));

  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  char nome[61];
  char cpf[12];
  char tel[12];
  char email[51];

  printf("Nome: \n");
  scanf("%s", nome);
  while(!validaNome(nome)){
    printf("Nome inválido! Digite novamente:\n");
    scanf("%s", nome);
  }
  strcpy(cliente->nome, nome);

  printf("CPF:(Só números) \n");
  scanf("%s", cpf);
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente:\n");
    scanf("%s", cpf);
  }
  strcpy(cliente->cpf, cpf);

  printf("Telefone:(Só números) \n");
  scanf("%s", tel);
  while(!validaTel(tel)){  
    printf("Telefone inválido! Digite novamente:\n");
    scanf("%s", tel);
  }
  strcpy(cliente->tel, tel);

  printf("E-mail: \n");
  scanf("%s", email);
  while(!validaEmail(email)){
    printf("Email inválido! Digite novamente:\n");
    scanf("%s", email);
  }
  strcpy(cliente->email, email);

  strcpy(cliente->status, "1\n");

  fwrite(cliente, sizeof(Cliente), 1, fp);
  fclose(fp);
  free(cliente);

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar cliente

// Tela pesquisar cliente
void tela_pesquisar_clientes(void){
  char cpf[12];
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("CPF:(só números)\n");
  scanf("%s", cpf);
  while(!validaCPF(cpf)){
    printf("CPF inválido! Digite novamente:\n");
    scanf("%s", cpf);
  }

  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar cliente

// Tela atualizar cliente
void tela_atualizar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Atualizar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela atualizar cliente

// Tela deletar cliente
void tela_deletar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Cliente - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela deletar cliente
// Fim módulo clientes