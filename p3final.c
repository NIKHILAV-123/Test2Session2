#include<stdio.h>
#include<math.h>

int input_number()

{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
  
{

   int count=0,i;
    for(i=2;i<=(n/2);i++)
    {
      if(n%i==0)
      {
        count=1;
        break;
      }
    }
  return count;
} 
  
 void output(int n,int is_prime)
{
  if(is_prime==0)
    {
      printf("it is a prime number");
    }
  else
  {
    printf("it is composite");
  }
}
int main()
{
  int q,n;
  n=input_number();
  q=is_prime(n);
  output(n,q);
  return 0;
}
