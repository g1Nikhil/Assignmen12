#include <stdio.h>
 
int recursive_func(int, int);
 
int main()
{
  int num, result;
 
  printf("Enter the number: ");
  scanf("%d", &num);
 
  //calling recursive function
  result = recursive_func(num, 0);
 
  printf("Reverse of %d is %d", num, result);
 
  return 0;
}
 
int recursive_func(int num, int rev)
{
  if (num == 0)
    return rev;
  else
    return recursive_func(num/10, rev*10 + num%10);
}

