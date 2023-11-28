int tela_menu_vendas(void);

int tela_menu_cadastrar_vendas(void);
void tela_adicionar_produto_venda(void);
void tela_remover_produto_venda(void);

void tela_pesquisar_vendas(void);
void tela_deletar_vendas(void);

typedef struct venda Venda;

struct venda {
  // char codigo[7];
  Cliente cliente;
  Produto produtos[101];
  Funcionario funcionario;
  char status[2];
  char id;
  Venda* prox;
};