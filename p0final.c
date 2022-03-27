#include<stdio.h>
#include<math.h>

void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
  printf("Enter the values of x1,y1,x2,y2,x3,y3\n");
  scanf("%f %f %f %f %f %f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  area = 0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

 if(area==0)
   {
     return 1;
   }    
   else
   {
     return 2;    
   }
 
} 

void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
{
  if(istriangle==1)
  {
    printf("it's not a triangle\n");
  }
  if(istriangle==2)
  {
    printf("it is a triangle\n");
  }
}
int main()
{
   float x1,y1,x2,y2,x3,y3;
   float area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area); 
  return 0;
}
