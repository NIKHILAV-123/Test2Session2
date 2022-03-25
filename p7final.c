#include<stdio.h>
#include<math.h>

typedef struct _point
{
  float x,y;
}Point;
typedef struct _line
{
  Point p1,p2;
  float distance;
}Line;
Point input_point()
{
  Point t;
  printf("Enter the coordinates\n");
  scanf("%f%f",&t.x,&t.y);
  return t;
}
Line input_line()
{
  Line t;
  t.p1=input_point();
  t.p2=input_point();
  return t;
}
void find_length(Line *l)
{
  l->distance=sqrt(((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x))+((l->p2.y-l->p1.y)*(l->p2.y-l->p1.y)));
}
void output(Line l)
{
  printf("The length of the line with coordinates\n%f,%f\n%f,%f\n is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Line l;
  l=input_line();
  find_length(&l);
  output(l);
  return 0;
}
