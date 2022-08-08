#include<stdio.h>
int main()
{
 float aumSal;
 scanf("%f", &aumSal);
 if (aumSal <= 400.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", aumSal * 1.15, aumSal * 0.15);
 else if (aumSal <= 800.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", aumSal * 1.12, aumSal * 0.12);
 else if (aumSal <= 1200.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", aumSal * 1.10, aumSal * 0.10);
 else if (aumSal <= 2000.0)
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", aumSal * 1.07, aumSal * 0.07);
 else
   printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", aumSal * 1.04, aumSal * 0.04);
 return 0;
}
