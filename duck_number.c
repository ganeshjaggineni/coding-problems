#include<stdio.h>
int main()
{
int num,flag = 0,digit=0;
scanf("%d",&num);
while(num>0)
{
digit = num%10;
if(digit == 0)
    flag = 1;
num=num/10;
}
if(flag == 1)
    printf("Yes");
else
    printf("No");
return 0;
}
