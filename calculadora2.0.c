#include <stdio.h>
int main()
{
    float a,b,c;
    char repeat;
    int op;
        printf("\t*CALCULADORA*\n");
        do{
            printf("\nDigite a opcao desejada\n");
            printf("\n\t1 - adicao\n\t2 - subtracao\n\t3 - multiplicacao\n\t4 - divisao\n:");
            scanf("%d", &op);           
            switch(op){
                case 1:
                printf("\nVoce selecionou Adicao");
                printf("\nDigite o primeiro numero\n:");
                scanf("%f", &a);
                printf("\n Digite o segundo numero\n:");
                scanf("%f", &b);
                    c = a+b;
                    printf("\n\tResultado = %0.2f", c);
                    break;
                case 2:
                    printf("\nVoce selecionou Subtracao");
                printf("\nDigite o primeiro numero\n:");
                scanf("%f", &a);
                printf("\n Digite o segundo numero\n:");
                scanf("%f", &b);
                    c = a-b;
                    printf("\n\tResultado = %0.2f", c);
                    break;
                case 3:
                    printf("\nVoce selecionou Multiplicacao");
                printf("\nDigite o primeiro numero\n:");
                scanf("%f", &a);
                printf("\n Digite o segundo numero\n:");
                scanf("%f", &b);
                    c = a*b;
                    printf("\n\tResultado = %0.2f", c);
                    break;
                case 4:
                    printf("\nVoce selecionou Divisao");
                printf("\nDigite o primeiro numero\n:");
                scanf("%f", &a);
                printf("\n Digite o segundo numero\n:");
                scanf("%f", &b);
                    c = a/b;
                    printf("\n\tResultado = %0.2f", c);
                    break;
                default:
                    printf("\nDigite uma opcao valida\n"); 
            }                   
            
    printf("\nDeseja realizar novo calculo? (s/n)");
    scanf(" %c", &repeat);
        }while(repeat == 's');

}