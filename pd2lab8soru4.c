#include <stdio.h>
#include <string.h>

int main() {
    // Dizileri tanýmlayýn ve baþlatýn
    char dizi1[] = "Merhaba, ";
    char dizi2[] = "dunya!";
    char dizi3[20];

    // strcat kullanarak dize birleþtirme
    strcat(dizi1, dizi2);
    printf("Birlestirilmis dize: %s\n", dizi1);

    // strlen kullanarak dize uzunluðunu bulma
    printf("dizi1'in uzunlugu: %lu\n", strlen(dizi1));

    // strcpy kullanarak dize kopyalama
    strcpy(dizi3, dizi1);
    printf("Kopyalanan dize: %s\n", dizi3);

    // strcmp kullanarak dizeleri karþýlaþtýrma
    int cmpSonuc = strcmp(dizi1, dizi3);
    if (cmpSonuc == 0) {
        printf("dizi1 ve dizi3 esittir\n");
    } else if (cmpSonuc < 0) {
        printf("dizi1, dizi3'ten kucuktur\n");
    } else {
        printf("dizi1, dizi3'ten buyuktur\n");
    }

    // strncpy kullanarak alt dize alma
    char altDizi[10];
    strncpy(altDizi, dizi1 + 7, 5);
    altDizi[5] = '\0';
    printf("Alt dize: %s\n", altDizi);

    // strstr kullanarak dize içinde arama
    char *aramaSonucu = strstr(dizi1, "dunya");
    if (aramaSonucu != NULL) {
        printf("dizi1 icinde 'dunya' bulundu, konum: %ld\n", aramaSonucu - dizi1);
    } else {
        printf("'dunya' dizi1 içinde bulunamadi\n");
    }

    return 0;
}

