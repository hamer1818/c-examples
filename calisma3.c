#include <conio.h>
#include <stdio.h>

int main(){
    int x,y,sonuc;
    printf("Lutfen ilk sayiyi giriniz: %d \n", x);
    scanf("%d",&x);
    printf("Lutfen ikinci sayiyi giriniz: %d\n" ,y);
    scanf("%d",&y);
    sonuc=20*(10*x+5*y)+3*(2*x+8*y);
    printf("islemin sonucu: %d",sonuc);

}