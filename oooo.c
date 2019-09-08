#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>

 
 int main(void){
 	
 	
	 setlocale(LC_ALL, "Portuguese");
 	
	 //Definição de variavel
 	
	 int a , num, in, c; 
	 float cd1, cd2, cd3, cr, media, b, n1 = 1, n2 = 2;
	 long decimal, q, r;
	 int i, j = 0;
	 char hexadecimal[100];
	 char nome[45];
	 int x, y, pot=0,k=0, count=0;
 	 double w = 9.75;
	 double h = 9.75;
	 double logaritmo_natural = 0;
	 double logaritmo_xbase10 = 0;
	 //Informações sobre selecionaveis + leitor de variavel
 	
	 printf("\nDigite 0 para finalizar o programa\n"
	       "1 Para o menu um\n"
		   "2 Para o menu dois\n"
		   "3 Para o menu três\n"
		   "4 Para o menu quatro\n"
		   "5 Para o menu cinco\n"
		   "6 Para o menu seis\n"
		   "7 Para o menu sete\n"
		   "8 Para o menu oito\n"
		   "9 Para o menu nove\n");
	scanf("%d", &a);
	
	   //Estrutura a ser repitida
	
	while(a)
	{
	   //Condicionais
	   
	   if(a == 1){
	   	//questão 2 - informa se é par ou impar
	   printf("Bem-vindo ao menu 1\n");
	   printf("Digite um numero inteiro: ");
		scanf("%d",&num);
		if(num%2==0)//operador %
		{
		printf("Par");
		}
		else{
		printf("Ímpar");
		}
       }
	   else if(a == 2){
	   	//questão 3 - primeiro numero potenciado ao segundo
	   printf("Bem-vindo ao menu 2\n");
	   printf ("Primeiro numero: ");
     	scanf ("%d",&x);
     	printf ("Segundo numero: ");
     	scanf ("%d",&y);
 
     	for (k>0;k<y;k++)
     	{
     	pot = x*(x*k); 
     	}
    	 
        printf ("\n O resuldo é : %d", pot);
       }
	   
	   else if(a == 3){
	   	//questão 4 - logaritimos
	   printf("Bem-vindo ao menu 3\n");
	   printf("Digite o A e B para a operação logaritmo: \n");
	   scanf("%f %f", &w, &h);  
	   logaritmo_natural = log(w);
	   w = 2.718282;
	   printf("Logaritmo natural de A %.2f = %.2f\n",w, logaritmo_natural);
	   w = 10;
	   logaritmo_xbase10 = log10(w);
	   printf("Logaritmo de B na base10 %.2f = %.2f\n",w, logaritmo_xbase10);
	   
	   logaritmo_natural = log(h);
	   h = 2.718282;
	   printf("Logaritmo natural de A %.2f = %.2f\n",w, logaritmo_natural);
	   h = 10;
	   logaritmo_xbase10 = log10(h);
	   printf("Logaritmo de B na base10 %.2f = %.2f\n",w, logaritmo_xbase10);
       }
	   else if(a == 4){
	   	//questão 5 - informa se o ano é ou não bissexto
	   printf("Bem-vindo ao menu 4\n");
	  printf("Digite um ano: ");
		scanf("%d",&num);
		if(num%4==0)//operador %
		{
		printf("Ano Bissexto");
		}
		else{
		printf("Ano nao Bissexto");
		}
       }
	   else if(a == 5){
	   	//questão 6 - media e cr
	   printf("Bem-vindo ao menu 5\n");
	  printf("Digite suas 3 notas, para o calculo da media\n");
	   scanf("%f %f %f", &cd1, &cd2, &cd3);
	   cr=(cd1*n1)+(cd2+n1)+(cd3+n2)/cd1+cd2+cd3;
	   media = (cd1 + cd2 + cd3)/3;
	   printf("Sua media é %f\n", media);
	   printf("Seu CRE é %f\n", cr);
	   if(media>=6.0){
	   	printf("Parabens, voce foi aprovado!");
	   }
	   else
	   printf("Infelizmente, voce foi reprovado!");
       }
	   else if(a == 6){
	   	//questão 7 - media de notas , ou nota invalida
	   printf("Bem-vindo ao menu 6\n");
	    printf("Digite suas 2 notas, para o calculo da media\n");
	   scanf("%f %f", &cd1, &cd2);
	   media = (cd1 + cd2)/2;
	   
	   if(cd1>0 && cd1<=10 && cd2>0 && cd2<=10){
	   	printf("Sua media é %f", media);
       }
       else{
       	printf("ERROR404");
	   } 
        
       }
	
	   else if(a == 7){
	   printf("Bem-vindo ao menu 7\n");
  	   }
	   else if(a == 8){
	   printf("Bem-vindo ao menu 8\n");
	   }
	   else if(a == 9){
	   	//questão 8 - matricula em hexadecimal
	   printf("Bem-vindo ao menu 9\n");
       printf("Disponha sua matricula: \n");
	   scanf("%ld", &decimal);
	   printf("Disponha seu nome: ");
	   scanf("%s",nome);
	 
	   q = decimal;
	 
	   while (q != 0)
	   {
	   r = q % 16;          
	   if (r < 10)
	   hexadecimal[j++] = 48 + r;   
	   else
	   hexadecimal[j++] = 55 + r;   
	   q = q / 16;            
	   }
	   printf("Olá %s ",nome);
	   printf("Sua matricula em hexadecimal :",decimal);
	   
	 
	 
	  for (i = j; i >= 0; i--)
	  printf("%c", hexadecimal[i]);
	  printf("\n");
	 }
	   else{ 
	   printf("\nComando inválido, por favor digite outro número: ");
       } 
    //Opções a serem repetidas + Leitor de variavel

	printf("\nDigite 0 para finalizar o programa\n"
	       "1 para o menu um\n"
		   "2 para o menu dois\n"
		   "3 para o menu três\n"
		   "4 para o menu quatro\n"
		   "5 para o menu cinco\n"
		   "6 para o menu seis\n"
		   "7 para o menu sete\n"
		   "8 para o menu oito\n"
		   "9 para o menu nove\n");
	scanf("%d", &a);
	   
    } 
	  if (a==0)  //Finaliza o programa
	printf("Programa finalizado!");

 	return 0;
 }
