#include<stdio.h>
int input()
{
  int n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int f=0,f1=1,s;
  if(n<=1)
    return n;
  for(int i=2;i<=n;i++)
    {
      s=f+f1;
      f=f1;
      f1=s;
    }
  return s;
}
void output(int n,int fibo)
{
  printf("The %dth number in fibonacci sequence is %d.",n,fibo);
}
int main()
{
  int x,y;
  x=input();
  y=find_fibo(x);
  output(x,y);
  return 0;
}
