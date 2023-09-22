#include<stdio.h>
#include<string.h>
int checkBirthday(char [],int);
int checkBirthday(char month[],int day)
{
if(strcmp(month,"july")==0 && day == 5)
{
return 1;
}
else
    return 0;

}

int main()
{
char month[100];
int day,res;
scanf("%s%d",month,&day);
res = checkBirthday(month,day);
printf("%d",res);
return 0;
}
