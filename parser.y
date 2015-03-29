/*
  Coloque aqui o identificador do grupo e dos seus membros
*/
%{
#include <stdio.h>


%}

%union
{
	struct comp_dict_item_t *valor_simbolo_lexico;
}



/* Declaração dos tokens da linguagem */
%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_STATIC
%token TK_PR_CONST
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%%
/* Regras (e ações) da gramática */


programa
	: declaracao programa
	| declarar_funcao programa
	| /* NADA */
	;

literal
	: TK_LIT_INT
	| TK_LIT_FLOAT
	| TK_LIT_FALSE
	| TK_LIT_TRUE
	| TK_LIT_CHAR
	| TK_LIT_STRING
	;

especificador_tipo
	: TK_PR_INT
	| TK_PR_FLOAT
	| TK_PR_BOOL
	| TK_PR_CHAR
	| TK_PR_STRING
	;

declaracao
	: especificador_tipo TK_IDENTIFICADOR ';'
	| especificador_classe_armazenamento especificador_tipo  TK_IDENTIFICADOR';'
	| especificador_tipo TK_IDENTIFICADOR '[' valor ']'';'
	| especificador_classe_armazenamento especificador_tipo TK_IDENTIFICADOR '[' valor ']' ';'
	| especificador_tipo TK_IDENTIFICADOR "<=" valor';'
	| especificador_classe_armazenamento especificador_tipo  TK_IDENTIFICADOR "<=" valor
	| especificador_classe_armazenamento qualificador_tipo especificador_tipo  TK_IDENTIFICADOR "<=" valor ';'
	| qualificador_tipo especificador_tipo  TK_IDENTIFICADOR "<=" valor ';'
	;


valor
	: literal
	| TK_IDENTIFICADOR
	| TK_IDENTIFICADOR '[' expressao ']'
	;

lista_declaracao_local
	: declaracao
	| declaracao lista_declaracao_local
	;



atribuicao
	: TK_IDENTIFICADOR '=' expressao';'
	| TK_IDENTIFICADOR '[' expressao ']' '=' expressao';'
	| TK_IDENTIFICADOR '[' expressao ']' '=' TK_IDENTIFICADOR '[' expressao ']' ';'
	;


retorno
	: TK_PR_RETURN ';'
	| TK_PR_RETURN TK_IDENTIFICADOR ';'
	| TK_PR_RETURN TK_IDENTIFICADOR '[' expressao ']' ';'
	| TK_PR_RETURN expressao ';'
	;

especificador_classe_armazenamento
	:TK_PR_STATIC
	;

qualificador_tipo
	: TK_PR_CONST
	;


lista_comando
	: comando
	| lista_comando comando
	;

bloco_comando
	: '{' lista_comando '}'
	;

comando
	: retorno comando
    | controle_fluxo comando
	| execucao_iteracao comando
	| lista_declaracao_local comando
	| bloco_comando comando
	| entrada comando
	| atribuicao comando
	| chamada_funcao comando
	| saida comando
	| 
	;



parametros
	: '(' lista_parametros ')'
	| '(' ')'
	;
	
lista_parametros
	: parametro
	| lista_parametros ',' parametro
	;

parametro
	: especificador_tipo TK_IDENTIFICADOR
	| qualificador_tipo especificador_tipo TK_IDENTIFICADOR
	| valor
	;

entrada
	: TK_PR_INPUT expressao "=>" expressao ';'
	;

saida
	: TK_PR_OUTPUT lista_expressoes	';'
	;

lista_vazia
	: lista_expressoes
	|

lista_expressoes
	: expressao ',' lista_expressoes
	| expressao
	;


controle_fluxo
	: TK_PR_IF '(' expressao ')' TK_PR_THEN comando
	| TK_PR_IF '(' expressao ')' TK_PR_THEN comando TK_PR_ELSE comando
	;

execucao_iteracao
	: TK_PR_WHILE '(' expressao ')' TK_PR_DO comando
	| TK_PR_DO comando TK_PR_WHILE '(' expressao ')'
	;

declarar_funcao	
	: especificador_tipo TK_IDENTIFICADOR parametros  bloco_comando
	| especificador_classe_armazenamento especificador_tipo TK_IDENTIFICADOR parametros bloco_comando
	;

entrada_funcao
	: '(' lista_valores ')'
	| '(' ')'
	;

lista_valores
	: valor
	| lista_valores valor
	;

chamada_funcao
	: TK_IDENTIFICADOR entrada_funcao ';'
	;

operador_aritmetico
	: '+'
	| '-'
	| '*'
	| '/'
	| '%'
	;

operador_logico
	: TK_OC_LE
	| TK_OC_GE
	| TK_OC_EQ
	| TK_OC_NE
	| TK_OC_AND
	| TK_OC_OR
	| '<'
	| '>'
	;
	
expressao
	: operador_logico expressao 
	| valor expressao
	| operador_aritmetico expressao
	| '(' expressao ')'
	| expressao_de_funcao
	| valor
	;

expressao_de_funcao
	: TK_IDENTIFICADOR '(' lista_vazia ')' lista_vazia
	;



%%
