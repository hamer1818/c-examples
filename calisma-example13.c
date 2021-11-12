#include<conio.h>
#include<stdio.h>

void beseBol(int a,int b){

    if (a%5==0)
    {
        printf("\nsayi 1 beşe bölünüyor\n");
    }
    else
    {
        printf("\nsayi1 beşe bölünmüyor\n");
    }
    if (b%5==0)
    {
        printf("\nikinci sayini 5 e bölünüyor\n");
    }else
    {
        printf("\nikinci sayi beşe bölünmüyor\n");
    }
    
    
    
    

}

int main(){
    int sayi1,sayi2,bol=5;
    printf("lütfen 2 adet sayı giriniz: ");
    scanf("%d\n%d",&sayi1,&sayi2);
    beseBol(sayi1,sayi2);
    
    

    
    

    return 0;
}