#include <stdio.h>

typedef struct fraction
{
  int num,den;
}fraction;
fraction input_fraction()
{
  fraction a;
  printf("Enter a fraction:\n");
  scanf("%d%d",&a.num,&a.den);
  return a;
}
fraction largest_fraction(fraction a,fraction b,fraction c)
{
  fraction large;
  large.num=a.num;
  large.den=a.den;
  float f1=a.num/a.den;
  float f2=b.num/b.den;
  float f3=c.num/c.den;
  if(f1>f2)
    large.num=b.num;
    large.den=b.den;
  if(f1>f3)
    large.num=c.num;
    large.den=c.den;
  return large;
}
void output(fraction a,fraction b, fraction c,fraction largest)
{
  printf("%d/%d is the smallest among %d/%d, %d/%d and %d/%d.\n",largest.num,largest.den,a.num,a.den,b.num,b.den,c.num,c.den);
}
int main()
{
  fraction a,b,c,small;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  small=largest_fraction(a,b,c);
  output(a,b,c,small);
  return 0;
}