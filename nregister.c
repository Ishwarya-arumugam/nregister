#include<stdio.h>
#include<conio.h>
void main()
{
int a[500],i,b[100]={0},c;
clrscr();
printf("Enter the number");
scanf("%d",&c);
//printf("b=%d",b[0]);
for(i=0;i<c;i++)
{

scanf("%d",&a[i]);
//printf("before: %d",b[a[i]]);
b[a[i]]++;
//printf("after: %f",b[a[i]]);
}
/*for(i=0;i<6;i++)
{
printf("\n%d",b[i]);
} */
//printf("\nenter");
for(i=0;i<100;i++)
{
if(b[i]>1)
{
printf("\n%d",i);
}
}
getch();
}
