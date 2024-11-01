/*Aluno...: Matheus Moreira
Data......: 21/08/2024
Objetivo..: Sortear numeros da mega sena
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//stdlib e time são usadas para o "srand"
#include <windows.h>
//windows é usado no cls que serve pra limpar a tela 

int main () {
    int palpite[6];
    int sorteio[6];
    int flag;
    //flag é bandeira, uso quando quero saber como começa algo e como terminou ex: bandeira levantada ou baixa, 
    //pode ser qualquer coisa, não precisa ser flag.
    int i;
    int o;
    int num;

    //sorteia os numeros da mega sena
    for ( i = 0; i < 6; i++)
    {
        system("cls");
        printf("Digite o um numero para o %d. palpite: " ,i);
        scanf("%d" ,&num);

        //verifica se o valor foi digitado
        flag = 1;
         for ( o = 0; o < 6; o++)
         {
            if (palpite[o] == num)
            {
                printf("Este numero ja foi, nao os repita\n");
                getch();
                flag = 0;
            } 
         }
        if (num < 1 || num > 60)
        {
            printf("Digite um numero entre 1 e 60\n");
            getch();
            flag = 0;
        }
        
        //armazena o palpite
        if (flag == 1)
        {
            palpite[i] = num;
        } else {
            i--;
        }
    }    

 				//comando que coloca numero aleatorio
    		srand (time(NULL));

				//sorteia os numeros da mega sena
				for ( i = 0; i < 6; i++)
				{
					num = rand() % 60 + 1;

				//verifica se o palpite ja foi digitado
				flag = 1;
				for ( o = 0; o < 6; o++)
				{
					if (sorteio[o] == num) {
						flag = 0;
					}
				}
					
				//armazena o palpite
				if (flag == 1)
				{
					sorteio[i] = num;
				} else {
					i --;
				}
				}
				//mostra os numeros sorteados
				for ( o = 0; o < 6; o++)
				{
					printf("Os numeros sorteados foram: %d O seu palpite foi %d\n", sorteio[o], palpite[o]);
				}

  return 0;
 }