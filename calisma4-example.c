#include <conio.h>
#include<stdio.h>

int main(){
    //kullanıcının girdiği sayı tek mi çift mi

    int a;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("sayi çift");
    }else
    {
        printf("sayi tek");
    }
    
    
}