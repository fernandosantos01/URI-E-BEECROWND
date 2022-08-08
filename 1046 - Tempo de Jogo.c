#include <stdio.h>

int main()

{

    int aTm, bTm, duraTm;

    scanf("%d %d", &aTm, &bTm);

    duraTm = bTm - aTm;

    if (duraTm < 0)

    {

        duraTm = 24 + (bTm - aTm);

    }

    if (aTm == bTm)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S)\n", duraTm);
    return 0;
}
