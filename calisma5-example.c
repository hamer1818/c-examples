#include <conio.h>
#include<stdio.h>
int main(){
    int cicek;
    
    menu:printf("cicek seciniz[1-4] \n1)gul\n2)papatya\n3)lale\n4)nergis\n:");
    scanf("%d",&cicek);
    switch (cicek)
    {
    case 1:
        printf("gul u sectiniz\ngul cicegi yazin haftada en az iki kez,kiş aylarindaise haftada 1 kere saksı ustten sulanmalidir");
        break;
    case 2:
        printf("papatyayi sectiniz\npapatya haftada bir kez sulamak yeterli olacaktir");
        break;
    case 3:
        printf("laleyi sectiniz\nlale hafatda iki kez saksiyi ustten sulamalisiniz");
        break;
    case 4:
        printf("nergisi sectiniz\nnergis topragi kurumayacak sekilde nemli tutulmaldır.3-4 gunde bir kontrol edilerek sulanir");
        break;
    
    default:
    printf("\ngirdiginiz sayi gecersiz\n");
    goto menu;
        break;
    }
}