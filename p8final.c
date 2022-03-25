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
typedef struct _polygon
{
int n;
Line l[100];
float perimeter;
}Polygon;
int input_n()
{
  int n;
  printf("Enter the number of sides:\n");
  scanf("%d",&n);
  return n;
}
Line input_line()
{
  Line t;
  printf("Enter the point:\n");
  scanf("%f %f %f %f",&t.p1.x,&t.p1.y,&t.p2.x,&t.p2.y);
  t.distance=sqrt((t.p2.x - t.p1.x)*(t.p2.x - t.p1.x)+(t.p2.y - t.p1.y)*(t.p2.y - t.p1.y));
  return t;
}
void input_n_lines(int n, Line l[n])
{
  for(int i=0;i<n;i++)
    l[i]=input_line();
}
void input_polygon(int n,Polygon *p)
{
  p->n=n;
  input_n_lines(p->n,p->l);
  p->perimeter=0.0;
  
}
void find_perimeter(Polygon *p)
{
  for(int i=0;i<p->n;i++)
    p->perimeter+=p->l[i].distance;
}
void output(Polygon p)
{
  printf("The perimeter of the polygon with %d sides is %f",p.n,p.perimeter);
  
}
int main()
{
  int x;Polygon p;
  x=input_n();
  input_polygon(x,&p);
  find_perimeter(&p);
  output(p);
  return 0;
}
