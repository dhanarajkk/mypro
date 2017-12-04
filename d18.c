#include<stdio.h>
int add( int *a, int *b)
{
 int c;
c=*a+*b;
return (c);
}
int main()
{
int c;
int d;
int e;
scanf("%d%d",&c,&d);
e=add(&c,&d);
printf("%d",e);
}
