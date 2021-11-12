#include<conio.h>
#include<stdio.h>

int main(){

    int i;

    for (i = 0; i < 50; i++)
    {
        if(i==10){
            continue;
        }
        printf("%d",i);
    }
    



    return 0;
}