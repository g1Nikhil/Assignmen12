#include<stdio.h>
#include<conio.h>
void odd(int );
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);

    odd(n);
 return 0;   
}

void odd(int n)
{
    if(n>0)
    {
      odd(n-1);
      if(n%2==0)
        printf("%d",n);  
    }
}