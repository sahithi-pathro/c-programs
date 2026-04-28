#include <stdio.h>
void main()
{
int cigars;
printf("enter the number of cigars:\n");
scanf("%d",&cigars);
int weekend;
printf("Enter 0 for weekend and enter 1 for weekdays:\n");
scanf("%d",&weekend);
if(weekend==1)
{
if(cigars>=40)
{
printf("true");
}
else
{
printf("false");
}
}
if(weekend==0)
{
if(cigars>=40&&cigars<=60)
{
printf("true");
}
else
{
printf("false");
}
}
}