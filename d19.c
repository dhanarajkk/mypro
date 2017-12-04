#include<stdio.h>
int *add(int *a,int *b)
{
static int c;
c=*a+*b;
return (&c);
}
int main()
{
int a;
int b;
int *r;
scanf("%d%d",&a,&b);
r=add(&a,&b);
printf("%p",r);
}
