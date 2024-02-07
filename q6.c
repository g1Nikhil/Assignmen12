#include<stdio.h>
#include<conio.h>
void even(int );
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);

    even(n);
 return 0;   
}

void even(int n)
{
    if(n>0)
    {
      if(n%2==0)
        printf("%d",n);

      even(n-1);    
    }
}