#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/* 1. öğrencilerin numaraları ile notları sırala 2. istenilen öğrecinin notunu göster*/
int main(){
    int bilgiler[5][4]={{1,80,60,100},{2,60,100,100},{3,70,80,100},{4,78,50,40},{5,45,80,95}},a;
    
    
    printf("öğrenci numarası giriniz(1-5): ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("notları: %d %d %d",bilgiler[0][1],bilgiler[0][2],bilgiler[0][3]);
        break;
    case 2:
        printf("notları: %d %d %d",bilgiler[1][1],bilgiler[1][2],bilgiler[1][3]);
        break;
    case 3:
        printf("notları: %d %d %d",bilgiler[2][1],bilgiler[2][2],bilgiler[2][3]);
        break;
    case 4:
        printf("notları: %d %d %d",bilgiler[3][1],bilgiler[3][2],bilgiler[3][3]);
        break;
    case 5:
        printf("notları: %d %d %d",bilgiler[4][1],bilgiler[4][2],bilgiler[4][3]);
        break;
    
    default:
        break;
    }

    

system("pause");
return 0;

}
