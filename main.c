#include <stdio.h>

int main()
{
    printf("---While---\n");
    int i = 48;
    while (i <= 250)
    {
        i++;
        if (i % 26 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("---Do-While---\n");
    int j;
    j = 48;
    do
    {
        j++;
        if (j % 26 == 0)
        {
            printf("%d\n", j);
        }
    } while (j <= 250);

    printf("---For---\n");
    int a;
    for (a = 48; a <= 250; a++)
    {
        if (a % 26 == 0)
        {
            printf("%d\n", a);
        }
    }

    printf("---If_Else---\n");
    int sayac;
    for (sayac = 48; sayac <= 250; sayac++)
    {
        if (sayac % 26 == 0)
        {
            printf("%d\n", sayac);
        }
    }

    printf("---Switch---\n");
    int sayi;
    for (sayi = 48; sayi <= 250; sayi++)
    {
        switch (sayi % 26 == 0)
        {
        case 1:
            printf("%d\n", sayi);
            break;
        }
    }
    return 0;
}
