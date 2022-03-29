#include<stdio.h>

void input_string(char *string,char *substring)
{
  printf("Enter the string and substring:\n");
  scanf("%s%s",string,substring);
  
}
int str_reverse(char *string,char *substring)
{
  int i,j;
  for(i=0;string[i]!='\0';i++)
    {
      j=0;
      while(string[i]==substring[j])
        {
          j++;
          i++;
          if(substring[j]=='\0')
            return i-j;
          if(string[i]!=substring[j]){
            i--;
            break;
          }
        }
    }
  return -1;
  
}
void output(char *string,char *substring,int reverse)
{
  if(reverse>=0)
    printf("The reverse of %s in %s is %d.\n",substring,string,reverse);
  else
    printf("The given substring %s is not present in %s.\n",substring,string);
  
}
int main()
{
  char string[20],substring[20];int x;
  input_string(string,substring);
  x=str_reverse(string,substring);
  output(string,substring,x);
  return 0;
}
