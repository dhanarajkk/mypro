#include<stdio.h>
struct name 
{
char a;
char b;
char c;
char d;
};
union halo
{
int a;
struct name o;
};

int main()
{
union halo r;
r.a=0x11223344;
printf("%x",r.o.a);
printf("%x",r.o.b);
printf("%x",r.o.c);
printf("%x",r.o.d);
return 0;
}
