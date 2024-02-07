#include<stdio.h>
#include<conio.h>
int decimal(int );
int main()
{
    
    int n,b;

    printf("enter n = ");
    scanf("%d",&n);

    printf("%d",decimal(n));
   

     

 return 0;
}

int decimal(int n)
{
    
    if(n>0)
    { 
       return n%2 + 10 * decimal(n/2);
    }
    
}
