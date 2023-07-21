/*
Mountain View Middle School is all set for organizing their elaborate talent show
event of the year, "Stars Onstage". It is a fun-filled event for the students to
showcase and build their confidence.
Of the total audience who had come for the show, 1/3 were boys, 3/6 were girls
and the rest of them were adults. If there were 'x' more girls than adults, how many
people were there in total? Help the School authorities to find the total people who
visited their show.
Input Format:
First line of the input is an integer 'x', which corresponds to the count of girls more
than adults.
Output Format:
Output the total number of people who had visited the talent show.
Refer sample input and output for formatting specifications.
[All text in bold corresponds to input and rest corresponds to output.]
Sample Input and Output1:
Enter x
50
150 people were there in total
Sample Input and Output2:
Enter x
70
210 people were there in total
*/
#include<stdio.h>
int main()
{
int x,total_people;
printf("Enter x\n");
scanf("%d",&x);
/*
girls+boys+adults=total_people
(1/3)*t+(3/6)t+a=t
a=t-(1/3)*t-(3/6)*t
a=(6t-2t-3t)/6
a=t/6 ------>1

adults=a
girls=x+a; ----->2

from equn 1 and 2
girls=x+a
(3/6)*t=x+(t/6)
x=(3t/6)-(t/6)
x=2t/6
2t=6x
t=3x;
*/

total_people=3*x;
printf("%d people were there in total",total_people);


return 0;
}
