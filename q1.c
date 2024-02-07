#include<stdio.h>
#include<conio.h>
void natural(int n);
int main()
{
    
    int n;

    printf("enter n = ");
    scanf("%d",&n);

    natural(n);

 return 0;
}

void natural(int a)
{
    if (a>0)
    {
        natural(a-1);
        printf("%d\n",a);
    }

}

