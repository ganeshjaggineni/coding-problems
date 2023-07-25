#include<stdio.h>
int main()
{
    int n,rows,cols,spaces;
    printf("\nEnter a number :");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
         printf("\n");
        for(cols=1;cols<=n;cols++)
        {
            if(rows==1||rows==n||cols==1||cols==n)
                printf("* ");
            else
                printf("  ");
        }

    }
    return 0;
}
//OUTPUT
/*
Enter a number :5

* * * * *
*         *
*         *
*         *
* * * * *
*/
