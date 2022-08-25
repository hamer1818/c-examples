#include <stdio.h>
int main(){
    char dizi[100];
    int i=0,sayac=0;
    printf("kelime girin\n");
    gets(dizi);
    while (dizi[i]!='\0')
    {
        if (dizi[i]=='a'&& dizi[i+1]=='k')
        {
            sayac++;
        }
        i++;
    }
    printf("girdiginiz cumlede %d kadar 'ak' kelimesi geciyor\n",sayac);
    printf("girilen cumle: ");
    puts(dizi);
    system("\npause");
    return 0;
}