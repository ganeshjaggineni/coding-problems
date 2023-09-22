#include<stdio.h>
int main()
{
int n,seq_count = 0;
int num3 = 0;
scanf("%d",&n);
int num1 = 1, num2 = 1;
while(seq_count++ < n-2)
{
    num3 = num1+num2;
    num1 = num2;
    num2 = num3;

}
printf("%d",num3);
return 0;
}
