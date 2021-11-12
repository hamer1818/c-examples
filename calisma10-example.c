#include <conio.h>
#include<stdio.h>

int main(){
    int dizi[]={46,30,55,63,52};

    if (dizi[0]>dizi[1]&&dizi[0]>dizi[2]&&dizi[0]>dizi[3]&&dizi[0]>dizi[4])
    {
        printf("en büyük sayi= %d",dizi[0]);
    }
    else if (dizi[1]>dizi[0]&&dizi[1]>dizi[2]&&dizi[1]>dizi[3]&&dizi[1]>dizi[4])
    {
        printf("en büyük sayi= %d",dizi[1]);
    }
    else if (dizi[2]>dizi[0]&&dizi[2]>dizi[1]&&dizi[2]>dizi[3]&&dizi[2]>dizi[4])
    {
        printf("en büyük sayi= %d",dizi[2]);
    }
    else if (dizi[3]>dizi[0]&&dizi[3]>dizi[1]&&dizi[3]>dizi[2]&&dizi[3]>dizi[4])
    {
        printf("en büyük sayi= %d",dizi[3]);
    }else
    {
        printf("en büyük sayı= %d",dizi[4]);
    }
    
    
    

    



}