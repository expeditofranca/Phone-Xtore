#include<stdio.h> // importa funções que podem ser úteis ao projeto
#include<locale.h>// configuração dos caracteres especiais

/* CRÉDITOS */
// Modelos de menu e cabeçalhos baseados nos modelos do repositório: https://github.com/FlaviusGorgonio/LinguaSolta/blob/main/ls.c

// Assinatura das funções
void cabecalho_principal(void);
void cabecalho_secundario(void);

void tela_menu_principal(void);

void tela_menu_clientes(void);
void tela_cadastrar_clientes(void);
void tela_pesquisar_clientes(void);
void tela_atualizar_clientes(void);
void tela_deletar_clientes(void);


void tela_menu_produtos(void);
void tela_cadastrar_produtos(void);
void tela_pesquisar_produtos(void);
void tela_atualizar_produtos(void);
void tela_deletar_produtos(void);

void tela_menu_relatorios(void);

void tela_relatorios_clientes(void);
void tela_relatorio_geral_clientes(void);

void tela_relatorios_produtos(void);
void tela_relatorio_geral_produtos(void);

void tela_relatorios_vendas(void);
void tela_relatorio_geral_vendas(void);

void tela_menu_vendas(void);
void tela_menu_cadastrar_vendas(void);
void tela_adicionar_produto_venda(void);
void tela_remover_produto_venda(void);

void tela_pesquisar_vendas(void);
void tela_deletar_vendas(void);

void tela_sobre(void);
void tela_equipe(void);
// Fim assinatura das funções

// Programa principal
int main(void){
  setlocale(LC_ALL, ""); // configuração dos caracteres especiais
  tela_menu_principal();

  tela_menu_clientes();
  tela_cadastrar_clientes();
  tela_pesquisar_clientes();
  tela_atualizar_clientes();
  tela_deletar_clientes();
  
  tela_menu_produtos();
  tela_cadastrar_produtos();
  tela_pesquisar_produtos();
  tela_atualizar_produtos();
  tela_deletar_produtos();
  
  tela_menu_relatorios();
  
  tela_relatorios_clientes();
  tela_relatorio_geral_clientes();
  
  tela_relatorios_produtos();
  tela_relatorio_geral_produtos();
  
  tela_relatorios_vendas();
  tela_relatorio_geral_vendas();
  
  tela_menu_vendas();
  tela_menu_cadastrar_vendas();
  tela_pesquisar_vendas();
  tela_deletar_vendas();
  
  tela_sobre();
  tela_equipe();
  return 0;
}
// Fim programa principal

// Cabeçalho principal
void cabecalho_principal(void){
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
  printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
  printf("///                 Departamento de Computação e Tecnologia                 ///\n");
  printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
  printf("///             Projeto Sistema de Gestão de Lojas de Celulares             ///\n");
  printf("///             Developed by @expeditofranca -- since Sept, 2023            ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
}
// Fim cabeçalho principal

// Cabeçalho secundário
void cabecalho_secundario(void){
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                      - - - - Xtore Phone - - - -                        ///\n");
  printf("///                                                                         ///\n");
  printf("///             Developed by @expeditofranca -- since Sept, 2023            ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
}
// Fim cabeçalho secundario

// Tela menu principal
void tela_menu_principal(void){
  char op;
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///           - - - - Sitema de Gestão de Lojas de Celulares - - - -        ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Módulo Cliente                                            ///\n");
  printf("///           2 - Módulo Produto                                            ///\n");
  printf("///           3 - Módulo Relatórios                                         ///\n");
  printf("///           4 - Módulo Vendas                                             ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela menu principal

// Módulo clientes
// Tela menu clientes
void tela_menu_clientes(void){
  char op;
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
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela menu clientes

// Tela cadastrar cliente
void tela_cadastrar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Nome:                                                          ///\n");
  printf("///          CPF:                                                           ///\n");
  printf("///          Telefone:                                                      ///\n");
  printf("///          E-mail:                                                        ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela cadastrar cliente

// Tela pesquisar cliente
void tela_pesquisar_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Cliente - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o CPF (só números):                                     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
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

// Módulo produtos
// Tela menu produtos
void tela_menu_produtos(void){
  char op;
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
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela menu produtos

// Tela cadastrar produto
void tela_cadastrar_produtos(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Cadastrar Produto - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Marca:                                                         ///\n");
  printf("///          Modelo:                                                        ///\n");
  printf("///          Preço:                                                         ///\n");
  printf("///          Estoque:                                                       ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
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

// Módulo relatórios
// Tela menu relatorios
void tela_menu_relatorios(void){
  char op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                       - - - - Menu Relatórios - - - -                   ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatórios de Clientes                                    ///\n");
  printf("///           2 - Relatórios de Produtos                                    ///\n");
  printf("///           3 - Relatórios de Vendas                                      ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela menu relatorios

// Tela relatórios clientes
void tela_relatorios_clientes(void){
  char op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Clientes - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Clientes                               ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatórios clientes

// Tela relatório geral de clientes
void tela_relatorio_geral_clientes(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Clientes - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de clientes

// Tela relatórios produtos
void tela_relatorios_produtos(void){
  char op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Produtos - - - -                ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Produtos                               ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatórios produtos

// Tela relatório geral de produtos
void tela_relatorio_geral_produtos(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Produtos - - - -               ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de produtos

// Tela relatórios vendas
void tela_relatorios_vendas(void){
  char op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                   - - - - Relatórios de Vendas - - - -                  ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Relatório Geral de Vendas                                 ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatórios vendas

// Tela relatório geral de vendas
void tela_relatorio_geral_vendas(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///               - - - - Relatório Geral de Vendas - - - -                 ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela relatório geral de vendas
// Fim módulo relatórios

// Módulo vendas
// Tela vendas
void tela_menu_vendas(void){
  char op;
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
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela vendas

// Tela cadastrar vendas
void tela_menu_cadastrar_vendas(void){
  char op;
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                         - - - - Menu Vendas - - - -                     ///\n");
  printf("///                                                                         ///\n");
  printf("///           Digite o CPF do cliente:                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           1 - Adicionar Produto                                         ///\n");
  printf("///           2 - Remover Produto                                           ///\n");
  printf("///           3 - Finalizar Venda                                           ///\n");
  printf("///           4 - Cancelar Venda                                            ///\n");
  printf("///           0 - Sair                                                      ///\n");
  printf("///                                                                         ///\n");
  printf("///           Escolha a opção que deseja:                                   ///\n");
  //scanf("%c", &op);
  getchar();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela vendas

// Tela adicionar produto venda
void tela_adicionar_produto_venda(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Adicionar Produto - - - -                    ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código/ a marca/ o modelo:                            ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela adicionar produto venda

// Tela remover produto venda
void tela_remover_produto_venda(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Remover Produto - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código/ a marca/ o modelo:                            ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela remover produto venda

// Tela pesquisar venda
void tela_pesquisar_vendas(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Pesquisar Venda - - - -                      ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código:                                               ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela pesquisar venda

// Tela deletar venda
void tela_deletar_vendas(void){
  cabecalho_secundario();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///                    - - - - Deletar Venda - - - -                        ///\n");
  printf("///                                                                         ///\n");
  printf("///          Digite o código:                                               ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim módulo vendas

// Tela sobre o projeto
void tela_sobre(void){
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///         - - - - Sitema de Gestão de Lojas de Celulares - - - -          ///\n");
  printf("///                                                                         ///\n");
  printf("///      Projeto  desenvolvido  para disciplina DCT1106 - Programação do    ///\n");
  printf("///     Bacharelado em Sistemas de Informação da UFRN - CERES Caicó.        ///\n");
  printf("///      O projeto de cunho acadêmico avaliativo  desenvolvido em C  tem    ///\n");
  printf("///     como objetivo auxiliar nos processos administrativos de uma loja    ///\n");
  printf("///     de aparelhos celulares tornando tarefas como registros de vendas,   ///\n");
  printf("///     cadastros, e controle de estoque mais fáceis para o usuário.        ///\n");
  printf("///      Ademais, o  projeto serve como um meio de consolidar o que  foi    ///\n");
  printf("///     aprendido sobre a linguegem C, bem como a capacidade de resolver    ///\n");
  printf("///     problemas e  utilização de lógica de programação em um  contexto    ///\n");
  printf("///     real, assim  servindo também como uma preparação para o  mercado    ///\n");
  printf("///     de trabalho.                                                        ///\n");
  printf("///                                                                         ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela sobre o projeto

// Tela sobre a equipe
void tela_equipe(void){
  cabecalho_principal();
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///          - - - - Sitema de Gestão de Lojas de Celulares - - - -         ///\n");
  printf("///                                                                         ///\n");
  printf("///                           Desenvolvido por:                             ///\n");
  printf("///                                                                         ///\n");
  printf("///          Expedito Luiz de França Neto                                   ///\n");
  printf("///          E-mail: francaexpedito11@gmail.com                             ///\n");
  printf("///          Redes Sociais: @expeditofranca (Git)                           ///\n");
  printf("///          Repositório: https://github.com/expeditofranca/Phone-Xtore     ///\n");
  printf("///                                                                         ///\n");               
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}
// Fim tela sobre a equipe