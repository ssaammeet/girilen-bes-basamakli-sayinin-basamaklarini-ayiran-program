#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi, birler, onlar, yuzler, binler, onbinler;

    printf("5 basamakli bir sayi girin: ");
    scanf("%d", &sayi);

    onbinler = sayi / 10000;
    binler = (sayi / 1000) % 10;
    yuzler = (sayi / 100) % 10;
    onlar = (sayi / 10) % 10;
    birler = sayi % 10;

    printf("Onbinler basamagi: %d\t", onbinler);
    printf("Binler basamagi: %d\t", binler);
    printf("Yuzler basamagi: %d\t", yuzler);
    printf("Onlar basamagi: %d\t", onlar);
    printf("Birler basamagi: %d\n", birler);











    return 0;
}
