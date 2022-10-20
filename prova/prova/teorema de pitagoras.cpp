#include <stdio.h>
#include <math.h>

main()
{
float A,B,C,seno;

printf("Digite o valor de B ");
scanf("%f",&B);
printf("Digite o valor de C ");
scanf("%f",&C);
A=(B*B)+(C*C);
printf("A hipotenusa é: %f",sqrt(A));
printf("O seno é:",(A/B));
 
}
