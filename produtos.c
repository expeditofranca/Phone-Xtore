#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include"cabecalhos.h"
#include"util.h"

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
  int saida = 1;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Produto - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");

  char marca[20];
  char modelo[20];
  float preco;
  int estoque;
  while(saida){
    while(saida){
      printf("Marca: \n");
      scanf("%s", marca);
      if(!validaNome(marca)){
        printf("Marca inválida! Digite novamente");
      } else {
        saida = 0;
      }
    }
    printf("Modelo: \n");
    scanf("%s", modelo);
    
    printf("Preço: \n");
    scanf("%f", preco);

    printf("Estoque: \n");
    scanf("%d", estoque);

    printf("\n");
  }
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