int tela_menu_clientes(void);
void tela_cadastrar_clientes(void);
void tela_pesquisar_clientes(void);
void tela_atualizar_clientes(void);
void tela_deletar_clientes(void);

typedef struct cliente Cliente;

struct cliente {
  char nome[61];  
  char cpf[12];  
  char tel[12];  
  char email[51];  
};