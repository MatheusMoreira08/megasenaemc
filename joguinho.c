/*Aluno...: Matheus Moreira
Data......: 21/08/2024
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main () {
    int num;
    int segredo;
    
    //comando que coloca numero aleatorio

    srand(time(NULL));
    segredo = rand () % 10;

    printf("Qual e o numero: ");
    scanf("%d" ,& num);

    if (segredo == num)
    {
        printf("Acertou!!");
        printf("\nO numero e %d\n", segredo);
    } else if (segredo < num)
    { 
        printf("Errado, muito alto! O numero secreto e %d\n" , segredo);
    } else {
        printf("Errado, muito baixo! O numero secreto e %d\n" , segredo);
    }
    
    return 0;
}
 
