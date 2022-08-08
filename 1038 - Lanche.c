#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B;
    float preco = 0;

    scanf("%d %d", &A, &B);
    if (A == 1)
    {
        preco  = (float) (4.00 * B);
    }
    else if (A == 2)
    {
        preco  = (float) (4.50 * B);
    }
    else if (A == 3)
    {
        preco  = (float) (5.00 * B);
    }
    else if (A == 4)
    {
        preco  = (float) (2.00 * B);
    }
    else if (A == 5)
    {
        preco  = (float) (1.50 * B);
    }

    printf("Total: R$ %.2f\n",preco);

}
