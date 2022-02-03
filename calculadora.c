#include <stdio.h>
int main(void)
{
    float a,b,c;
    char repeat;
    int op;
        printf("\t*CALCULADORA*\n");
        do{
            printf("\nDigite a opcao desejada (1-2-3-4)\n");
            printf("\n\t1 - soma\n\t2 - subtracao\n\t3 - multiplicacao\n\t4 - divisao\n:");
            scanf("%d", &op);
            printf("\nDigite o primeiro numero:");
            scanf("%f", &a);
            printf("\nDigite o segundo numero:");
            scanf("%f", &b);
            switch(op){
                case 1:
                    c = a+b;
                    break;
                case 2:
                    c = a-b;
                    break;
                case 3:
                    c = a*b;
                    break;
                case 4:
                    c = a/b;
                    break;
                default:
                    printf("\nDigite uma opcao valida\n"); 
            }                   
            

    printf("\n\tResultado = %0.2f", c);
    printf("\nDeseja realizar novo calculo? (s/n)");
    scanf(" %c", &repeat);
        }while(repeat == 's');

    
}