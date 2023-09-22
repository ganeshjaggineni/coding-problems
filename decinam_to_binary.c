#include<stdio.h>
int main()
{
int dec,bin[100];
scanf("%d",&dec);
int i=0;
while(dec>0)
{
bin[i++]=dec%2;
dec=dec/2;
}

for(int val=i-1;val>=0;val--)
{
printf("%d",bin[val]);
}

return 0;
}

