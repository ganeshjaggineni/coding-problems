#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int valid=0,i,a[100];
scanf("%s",str);
int len=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='C')
    a[i]=0;
else if(str[i]=='E')
    a[i]=1;
else if(str[i]=='S')
    a[i]=2;
}
for(int i=0;i<len-1;i++)
{
if(a[i]<=a[i+1])
    valid=1;
else
{
valid=0;
break;
}
}
if(valid==1)
    printf("yes");
else if(valid==0)
    printf("no");
}
