#include<stdio.h>
struct name 
{
unsigned char a:1;
unsigned char b:2;
unsigned char c:1;
unsigned char d:3;
};
int main()
{
struct name r;
r.a=1;
r.b=2;
r.c=1;
r.d=7;
printf("%d",r.a);
printf("%d",r.b);
printf("%d",r.c);
printf("%d",r.d);
return 0;
}

