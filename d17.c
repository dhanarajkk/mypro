#include<stdio.h>
int *foo(int a,int b)
{
static int c;
c=*a+*b;
return (&c);
}
int main()
{
int a;
int b;
int *c;
printf("enter two number");
scanf("%d%d",&a,&b);
c=foo(a,b);
printf("%p",c);
}
