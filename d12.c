#include<stdio.h>
#include<stdlib.h>
struct name
{
int a;
char b[20];
char c[10];
struct name *next;
struct name *prev;
};
gdgsga
int intlist(struct name *prevadd,int a,struct name *nextadd);
int count(struct name *add);
int  insert(struct name *add,int j);
int deleat(struct name *add,int o);
int update(struct name *add);
int print(struct name *add);

int main()
{
int c;
int i;
printf("%ld",sizeof(struct name));
struct name *add;
struct name *nextadd;

add=(struct name *)malloc(sizeof(struct name));
add->prev='\0';
nextadd=(struct name *)malloc(sizeof(struct name));
add->next=nextadd;
printf("enter the number of nodes u want to enter");
scanf("  %d",&c);
intlist(add,c,nextadd);
i=count(add);
printf("%d",i);
insert(add,i);
deleat(add,i);
update(add);
print(add);
}
int intlist(struct name *prevadd,int a,struct name *nextadd)
{
int i;
struct name *newadd;
for(i=0;i<a;i++)
{
nextadd->prev=prevadd;
newadd=(struct name *)malloc(sizeof(struct name));
nextadd->next=newadd;
newadd->prev=nextadd;
prevadd=nextadd;
nextadd=newadd;
}
nextadd->next='\0';
return 0;
}
int count(struct name *add)
{
struct name *o;
int i=0;
do
{
o=add->next;
add=o;
i++;
}while(add->next!='\0');
//printf("%d",i);
return (i);
}
int insert(struct name *add,int j)
{
int y;
int i;
struct name *h;
struct name *t;
struct name *q;

//SIZEOF FUN
do
{
//use do while, untill user enter correct node number.
printf("enter the position u have to enter node");


scanf("%d",&y);
//do
//{

for(i=0;i<y;i++)
{
q=add;
t=add->next;
add=t;
}
h=(struct name *)malloc(sizeof(struct name));  // add size of
h->next=add;
h->prev=q;
q->next=h;
add->prev=h;
}while(y>j);
return 0;
}
int deleat(struct name *add,int o)
{
int i;
int j;
struct name *r;
struct name *y;
struct name *u;

// do while implement.
do
{
printf("enter the position to deleat");

scanf("%d",&j);
//do
//{
for(i=0;i<j;i++)
{
y=add;
u=add->next;           //add = add->next
add=u;
r=u->next;
}
y->next=r;
r->prev=y;
}while(j>o);
return 0;
}

int update(struct name *add)
{
struct name *j;
do
{
scanf("%d",&(add->a));
scanf("%s",&(add->b[0]));
scanf("%s",&(add->c[0]));
j=add->next;
add=j;
}while(add->next!='\0');
return 0;
}
int print(struct name *add)
{
struct name *j;
do
{
printf("%d\n",(add->a));
printf("%s\n",&(add->b[0]));
printf("%s\n",&(add->c[0]));
j=add->next;
add=j;
}while(add->next!='\0');
return 0;
}

