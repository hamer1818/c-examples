#include <conio.h>
#include <stdio.h>
/* 1. öğrencilerin numaraları ile notları sırala 2. istenilen öğrecinin notunu göster*/
int main(){
    int i,bilgiler[5][4]={{1,80,60,100},{2,60,100,100},{3,70,80,100},{4,78,50,40},{5,45,80,95}};
    
    int y=i-1, x=y-1,z=x-1;
    for (i = 0; i <= 5; i++)
    {
        if(i==0){
            continue;
        }
        
        printf("no: %d notlar: %d %d %d\n",i,bilgiler[i][y],bilgiler[i][x],bilgiler[i][z]);
    }
    
    



}