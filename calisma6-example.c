#include<conio.h>
#include<stdio.h>
int main(){
    int a=0;
    while (a<=100)
    {
        
        
        if (a%4==0)
        {
            printf("%d\nmağaza bölmüne\n",a);
        }else
        {
            printf("%d\nfabrika bölmüne\n",a);
        }
        a++;
        

    }
    
}