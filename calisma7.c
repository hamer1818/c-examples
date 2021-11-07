#include<conio.h>
#include<stdio.h>

//do while
int main(){
    int sayi,topla=0;
    do
    {
        printf("\nsayi giriniz:\n(girdiğinz sayı 0 olunca işlem bitecektir)\n");
        scanf("%d",&sayi);
        topla+=sayi;
        printf("\n%d\n",topla);
        
    } while (sayi!=0);
    
    printf("toplama işleminin sonu: %d",topla);
    
    

}