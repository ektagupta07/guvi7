#include<conio.h>
#include<stdio.h>
void main()
{
int n;
printf("enter no ");
scanf("%d",&n);
if((n % 4 == 0) && (n% 100 != 0) || (n % 400 == 0))
{
printf("leap year");
}
else
{
printf("not leap yaer");
}
getch();
}
