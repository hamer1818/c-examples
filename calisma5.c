//switch case

#include <conio.h>
#include<stdio.h>

int main(){
    int sayi;
    menu: printf("Bir sayi giriniz [1-4]");
    scanf("%d",&sayi);

    switch (sayi)
    {
    case 1:
        printf("Bir");
        break;
    case 2:
        printf("Iki");
        break;
    case 3:
        printf("Uc");
        break;
    case 4:
        printf("Dort");
        break;
    
    default:
    printf("\nbir ile dort arasından giris yapilmadi\n");
    goto menu;
        break;
    }
}