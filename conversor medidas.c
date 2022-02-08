#include <stdio.h>
int main()
{
    float x,resultado;
    char repeat;
    int op;
   
        printf("Bem vindo ao conversor de medidas\n");
    do{  
        printf("Selecione a opcao desejada");
        printf("\n\t1 - Celsius para Fahrenheit\n\t2 - Fahrenheit para Celsius");
        printf("\n\t3 - Quilometros para Milhas\n\t4 - Milhas para Quilometros");
        printf("\n\t5 - Centimetros para Polegadas\n\t6 - Polegadas para Centimetros");
        printf("\n\t7 - Metros para Jardas\n\t8 - Jardas para Metros\n:");
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("\nCelsius para Fahrenheit\nDigite o valor em Celsius:\n");
                scanf("%f", &x);
                resultado = x*1.8+32;
                printf("\nResultado: %0.2fF", resultado);
                break;               
            case 2:
                printf("\nFahrenheit para Celsius\nDigite o valor em Fahrenheit:\n");
                scanf("%f", &x);
                resultado = (x-32)*(5.0/9.0);
                printf("\nResultado: %0.2fC", resultado);
                break;
            case 3:
                printf("\nQuilometros para Milhas\nDigite o valor em Quilometros:\n");
                scanf("%f", &x);
                resultado = x/1.609;
                printf("\nResultado: %0.2fmi", resultado);
                break;
            case 4:
                printf("\nMilhas para Quilometros\nDigite o valor em Milhas:\n");
                scanf("%f", &x);
                resultado = x*1.609;
                printf("\nResultado: %0.2fkm", resultado);
                break;
            case 5:
                printf("\nCentimetros para Polegadas\nDigite o valor em Centimetros:\n");
                scanf("%f", &x);
                resultado = x/2.54;
                printf("\nResultado: %0.2fin", resultado);
                break;
            case 6:
                printf("\nPolegadas para Centimetros\nDigite o valor em Polegadas:\n");
                scanf("%f", &x);
                resultado = x*2.54;
                printf("\nResultado: %0.2fcm", resultado);
                break;
            case 7:
                printf("\nMetros para Jardas\nDigite o valor em Metros:\n");
                scanf("%f", &x);
                resultado = x*1.094;
                printf("\nResultado; %0.2fyd", resultado);
                break;
            case 8:
                printf("\nJardas para Metros\nDigite o valor em Jardas:\n");
                scanf("%f", &x);
                resultado = x/1.094;
                printf("\nResultado; %0.2fm", resultado);
                break;
            default:
                printf("\n***Digite uma opcao valida***\n");

        }

        printf("\nDeseja realizar novo calculo? (s/n)\n:");
        scanf(" %c", &repeat);
    }while(repeat == 's');   

}