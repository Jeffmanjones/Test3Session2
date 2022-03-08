#include <stdio.h>

void input(int *num1, int *den1,int *num2,int *den2)
{
  printf("Enter a numerator and denominator:\n");
  scanf("%d%d",num1,den1);
  printf("Enter another numerator and denominator:\n");
  scanf("%d%d",num2,den2); 
}
void add(int num1,int den1,int num2, int den2,int *num3,int *den3)
{
  int gcd=0;
  int x=(num1*den2)+(num2*den1);
  int y=den1*den2;
  for(int i=1;i<=x && i<=y;++i)
  {
    if(x%i==0 && y%i==0)
    gcd=i;
  }
  *den3=y/gcd;
  *num3=x/gcd;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("%d/%d + %de/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}