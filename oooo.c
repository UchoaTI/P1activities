#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 
#include <math.h>
#include <conio.h> 

int main (){
	
	int a=1, num, in, c, x, y, k, pot, fat, n, resultado = 0; 
	float cd1, cd2, cd3, cr, media, b, n1 = 1, n2 = 2, mp;
	long decimal, q, r;
	int i, j = 0;
	char hexadecimal[100];
	char nome[45];
	double w = 10;
	double h = 10;
	double logaritmo_natural = 0;
	double logaritmo_xbase10 = 0;
	int a1, b1,auxiliar,i1,n3; 
	
	a1 = 0;
	b1 = 1;
	
	while (a!=0){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite de 1 a 10 pra escolher um menu: ");
	scanf("%d", &a);
	

	
	switch (a){
		
		case 1: {
			system("cls");
			printf("Bem-vindo ao menu 1\n");
		
		    printf("digite um numero inteiro: ");     //Indentifica se o numero é par ou impar
			scanf("%d",&num);
			if(num%2==0)//operador %
			{
			printf("Par");
			}
			else{
			printf("Ímpar");
			}
			break;
				}
		
		case 2: {
			system("cls");
			printf("Bem-vindo ao menu 2\n");
			
			printf ("Digite o primeiro numero: ");
     		scanf ("%d",&x);
     		printf ("Digite o segundo numero: ");
     		scanf ("%d",&y);
 
     		for (k>0;k<y;k++)
     		{
     		pot = x*(x*k);
     		}
    	 
        	printf ("\n O resuldo é : %d", pot);
			break; 
				}
		
		case 3: {
			system("cls");
			printf("Bem-vindo ao menu \n");
			
			printf("Digite suas 2 numeros para operação logaritmo: \n");
	   		scanf("%f %f", &w, &h);  
	   		logaritmo_natural = log(w);
	   
	   		printf("Logaritmo natural de x %.2f = %.2f\n",w, logaritmo_natural);
	
	   		logaritmo_xbase10 = log10(w);
	   		printf("Logaritmo de x na base10 %.2f = %.2f\n",w, logaritmo_xbase10);
	   
	   		logaritmo_natural = log(h);
	   
	   		printf("Logaritmo natural de y %.2f = %.2f\n",h, logaritmo_natural);
	   
	   		logaritmo_xbase10 = log10(h);
	   		printf("Logaritmo de y na base10 %.2f = %.2f\n",h, logaritmo_xbase10);
			break; 
				}
		
		case 4: {
			system("cls");
			printf("Bem-vindo ao menu 4\n");
			
			printf("digite um ano: ");
			scanf("%d",&num);
			if(num%4==0)   //operador %
			{
			printf("Ano Bissexto");
			}
			else{
			printf("Ano nao Bissexto");
			}
			
			break;
				}
	
		case 5: {
			system("cls");
			printf("Bem-vindo ao menu 5\n");
			
			printf("Digite suas 3 notas, para o calculo da media\n");
	   		scanf("%f %f %f", &cd1, &cd2, &cd3);
	   
	         cr=(cd1*n1)+(cd2*n1)+(cd3*n2)/cd1+cd2+cd3; //Calculo do CRE
	         media = (cd1 + cd2 + cd3)/3;               //Calculo da media
	         mp=(cd1*n1)+(cd2*n1)+(cd3*n2)/1+2+3;             //Calculo da media ponderada
	   
	   		printf("Sua media é %f\n", media);
	   		printf("Media pondera é %f\n", mp);
	   		printf("Seu CRE é %f\n", cr);
	   		if(media>=6.0){
	   		printf("Parabens, voce foi aprovado!");
	   		}
	   		else{
	   		printf("Infelizmente, voce foi reprovado!");
       		}
			break;
				}
		
		case 6: {
			system("cls");
			printf("Bem-vindo ao menu 6\n");
			
			printf("Digite suas 2 notas, para o calculo da media\n"); //Calculo da media
	   		scanf("%f %f", &cd1, &cd2);  
	   		media = (cd1 + cd2)/2;
	   
	   		if(cd1>0 && cd1<=10 && cd2>0 && cd2<=10){         //Notas apenas entre 0 e 10
	   		printf("Sua media é %f", media);
      		}
       		else{
       		printf("ERROR404\n");
	   		}
			break;
				}
			
		case 7:{
			system("cls");
			printf("Bem-vindo ao menu 7\n");
			
			printf("Insira um valor para o qual deseja calcular seu fatorial: ");
       		scanf("%d", &n);
 
       		for(fat = 1; n > 1; n = n - 1);
       		fat = fat * n;
 
       		printf("\nFatorial calculado: %d", fat);
			break;
				}
		
		case 8: {
			system("cls");
			printf("Bem-vindo ao menu 8\n");
			
			printf("Digite um número: ");
 	   		scanf("%d", &num);
 
 			for (i = 2; i <= num / 2; i++) {
    		if (num % i == 0) {
       		resultado++;
       		break;
    		}
			break;
				}
			
		case 9:{
			system("cls");
			printf("Bem-vindo ao menu 9\n");
			printf("\nDigite um número: ");
    	    scanf("%d", &n3);
            printf("\nSérie de Fibonacci:\n\n");
            printf("%d\n", b1);

            for(i = 0; i < n3; i++) {

        	auxiliar = a1 + b1;
        	a1 = b1;
        	b1 = auxiliar;

        	printf("%d\n", auxiliar);
    }
}
			break;
				}
		
		case 10: {
	   system("cls");
	   printf("Bem-vindo ao menu 10\n");
	   printf("sua matricula, por favor: \n");
	   scanf("%ld", &decimal);
	   printf("seu nome, por favor: ");
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
	   printf("olá %s ",nome);
	   printf("sua matricula em hexadecimal :",decimal);
	   
	 
	 
	  for (i = j; i >= 0; i--)
	  printf("%c", hexadecimal[i]);
	  printf("\n");
			break; 
				}
		
		default: 
		{
			system("cls");
			
			if(a==0){
				
				continue;
			}
			printf("\n\n Essa opção não existe");
			break;
		}
			}
	
			
	}
		if (a == 0)
		printf("\n\n O programa foi finalizado");
		getch();
}
