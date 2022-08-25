#include <stdio.h>

int main()
{
int i;
int A[5]={5,9,7,1,4} ;

for (i = 0;i < 5; i++)
{    if (A[0]>A[i]&&i!=0)
    {
        
        
    printf("en buyuk: %d\n",A[0]);
        
        break;
        
    }else if (A[1]>A[i]&&i!=1)
    {
        printf("en buyuk: %d\n",A[1]);
        break;
    }else if (A[2]>A[i]&&i!=1)
    {
        printf("en buyuk: %d\n",A[2]);
        break;
    }else if (A[3]>A[i]&&i!=2)
    {
        printf("en buyuk: %d\n",A[3]);
        break;
    }else 
    printf("en buyuk: %d\n",A[3]);
    
}




system("pause");
return 0;
}