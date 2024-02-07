#include<stdio.h>
#include<conio.h>
void octal(int );
int main()
{
    
    int n,b;

    printf("enter n = ");
    scanf("%d",&n);

    octal(n);
   
 return 0;
}

void octal(int n)
{
    
    if(n>0)
    { 
      octal(n/8);
      printf("%d",n%8);
    }
    
}
