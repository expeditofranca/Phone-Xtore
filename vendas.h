int tela_menu_vendas(void);

void tela_cadastrar_vendas(void);
void tela_pesquisar_vendas(void);
void tela_deletar_vendas(void);

typedef struct venda Venda;

struct venda {
  char cpfC[12];
  char cpfF[12];
  char codProd[7];
  char data[11];
  char valor[7];
  char status;
  char id[7];
};