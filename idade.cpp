#include <stdio.h> 
/*insere o conte�do do arquivo stdio.h */
int main()
{

/*declara��o das vari�veis */

int idade, ano;
char nome [30] ;
float altura;
/*entrada de dados */
/*mensagem ao usu�rio */
printf ("Digite o seu nome: ");
scanf ("%s", nome); /* leitura do nome */
/*mensagem ao usu�rio */
printf ("Digite a idade: ");
scanf ("%d", &idade); /* leitura da idade */
/*mensagem ao usu�rio */
printf ("Digite a altura: ");
scanf ("%f", &altura); /* leitura da altura */
/* processamento */
/*c�lculo do ano de nascimento */
ano = 2024 - idade;
/*saida de dados */
printf ("\nO nome e: %s", nome); 
printf ("\nA altura e: %.2f", altura);
printf ("\nA idade e: %d", idade);
printf ("\nO ano de nascimento e: %d ", ano);
return (0);
}
