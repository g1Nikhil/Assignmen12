#include<stdio.h>
#include<conio.h>
void square(int n);
int main()
{
    
    int n;

    printf("enter n = ");
    scanf("%d",&n);

    square(n);

 return 0;
}

void square(int a)
{
    if (a>0)
    {
        natural(a-1);
        printf("%d\n",a*a);
    }

}
