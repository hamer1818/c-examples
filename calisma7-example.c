#include<conio.h>
#include<stdio.h>
/* sistemde 3 aday olacak seçim bittirmek için 5 sayısına basılacak*/
int main(){
    int secim,a=0,b=0,c=0;
    
    
    menu:printf("Adaylar:\n1)Ahmet\n2)Mehmet\n3)Selim\n");
    printf("Lütfen seçim yapınız[1-3]");

    do
    {
        scanf("%d",&secim);
        if (secim==1)
        {
            a++;
        }else if (secim==2)
        {
            b++;
        }else if (secim==3)
        {
            c++;
        }else if(secim!=5)
        {
            printf("lütfen 1-3 arası seçim yapın");
            goto menu;
        }
        printf("Adaylar:\n1)Ahmet=%d\n2)Mehmet=%d\n3)Selim=%d\n",a,b,c);
        
        
        
        
    } while (secim!=5);
    if (a>b&&a>c){
        printf("seçimi ahmet %d oy ile kazandı",a);
    } else if(b>a&&b>c){
        printf("seçimi mehmet %d oy ile kazandı",b);
    } else if(c>a&&c>b){
        printf("seçimi selim %d oy ile kazandı",c);
    }else
    {
        printf("iki veya daha fazla adayın oy eşitliğinden dolayı birinci seçilemedi");
    }
    
    
    
        
    
    
    

}