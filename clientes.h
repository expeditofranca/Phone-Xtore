typedef struct cliente Cliente;

struct cliente {
  char nome[41];  
  char cpf[12];  
  char tel[12];  
  char email[41];  
  char status;
  char id[7];
};

int tela_menu_clientes(void);
void tela_cadastrar_clientes(void);
void tela_pesquisar_clientes(void);
void tela_atualizar_clientes(void);
void tela_deletar_clientes(void);
