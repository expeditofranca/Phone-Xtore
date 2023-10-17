int tela_menu_funcionarios(void);
void tela_cadastrar_funcionarios(void);
void tela_pesquisar_funcionarios(void);
void tela_atualizar_funcionarios(void);
void tela_deletar_funcionarios(void);

typedef struct funcionario Funcionario;

struct funcionario {
  char nome[61];  
  char cpf[12];  
  char tel[12];  
  char email[51]; 
};