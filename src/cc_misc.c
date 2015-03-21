#include "cc_misc.h"
#include "cc_dict.h"

extern int lineNumber = 1;

int getLineNumber (void)
{
  //++lineNumber;
  return lineNumber;
}

void yyerror (char const *mensagem)
{
  fprintf (stderr, "%s\n", mensagem); //altere para que apareça a linha
}

void main_init (int argc, char **argv)
{
  //implemente esta função com rotinas de inicialização, se necessário
	hashtable = dict_create(100);
}

void main_finalize (void)
{
  explode_tudo();
  //implemente esta função com rotinas de inicialização, se necessário
}
