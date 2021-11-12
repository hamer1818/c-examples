#include<conio.h>
#include<stdio.h>

int main(){

    int i,faktoryel=1,sayi;
    printf("Bir sayı giriniz: ");
    scanf("%d",&sayi);
    
    for (i=1; i<=sayi; i++)
    {
        faktoryel*=i;
              
        
    }
    printf("%d!=%d\n",sayi,faktoryel);


    return 0;
}