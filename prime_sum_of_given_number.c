#include<stdio.h>
int main()
{
int num,digit=0,sum=0;
scanf("%d",&num);
while(num>0)
{
digit = num%10;
int count=0;
for(int i=1;i<=digit;i++)
{
if(digit%i == 0)
    count++;
}
if(count==2)
    {
    sum=sum+digit;
    }
num=num/10;
}
printf("%d",sum);
return 0;
}
