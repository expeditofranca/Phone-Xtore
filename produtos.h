int tela_menu_produtos(void);
void tela_cadastrar_produtos(void);
void tela_pesquisar_produtos(void);
void tela_atualizar_produtos(void);
void tela_deletar_produtos(void);

typedef struct produto Produto;

struct produto {
  // char codigo[7];
  char marca[21];  
  char modelo[21];  
  char preco[11];  
  char estoque[7];  
};