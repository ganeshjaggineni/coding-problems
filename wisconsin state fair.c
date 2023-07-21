/*
Wisconsin State Fair is one of the largest midsummer celebrations in the Midwest
Allis, showcasing the agriculture skills and prowess of the state. The Event
organizers hired few part-time employees to work at the fair and the agreed salary
paid to them are as given below:
Weekdays --- 80 / hour
Weekends --- 50 / hour
Justin is a part-time employee working at the fair. Number of hours Justin has
worked in the weekdays is 10 more than the number of hours he had worked
during weekends. If the total salary paid to him in this month is known, write a
program to estimate the number of hours he had worked during weekdays and the
number of hours he had worked during weekends.
Input Format:
First line of the input is a double value that corresponds to the total salary paid to
Justin.
Output Format:
First line of the output should display the number of hours Justin has worked
during the weekdays.
Second line of the output should display the number of hours Justin has worked
during the weekends.
Sample Input and Output:
Enter the total salary paid
2750
Number of weekday hours is 25
Number of weekend hours is 15
#include<stdio.h>
*/
int main()
{

int weekday_hr,weekend_hr;
double sal;
printf("Enter the total saylary paid \n");
scanf("%lf",&sal);

/*
weekends=x
weekdays=(10+x)

x*50+(10+x)*80=total salary
50x+80x+800=sal
130x+800=sal
130x=sal-800
x=(sal-800)/130;
*/

weekend_hr=(sal-800)/130;
weekday_hr=10+weekend_hr;

printf("Number of weekday hours is %d\n",weekday_hr);
printf("Number of weekend hours is %d",weekend_hr);

return 0;
}
