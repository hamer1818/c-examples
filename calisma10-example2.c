#include <conio.h>
#include<stdio.h>

int main(){
    int dizi[]={46,30,55,63,52},i,min,max;
    max=dizi[0];
    min=dizi[0];
    for (i = 0; i < 5; i++)
    {
        if (min>dizi[i]){
            
            min=dizi[i];
            
            
        }
        if (max<dizi[i]){
            max=dizi[i];
        }
    }
    printf("en küçük sayı: %d\n",min);
    printf("en büyük sayı: %d",max);


}