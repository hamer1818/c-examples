#include <stdio.h>
int main(){
    char dizi[500];
    int sayac=1;
    printf("cumle gir: ");
    gets(dizi);
    for (int i = 0; dizi[i] != '\0'; i++)
    {
        if(dizi[i]==' '){
            sayac++;
        }
    }
    printf("cumlede %d kadar kelime var",sayac);




    system("pause");
    return 0;

}