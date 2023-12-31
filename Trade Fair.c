/*
QUESTION

Trade Fairs are important for companies to present their products and to get in touch with its customers and business parties. One such grandeur Trade Fair Event was organized by the Confederation of National Large-Scale Industry.
Number of people who attended the event on the first day was x. But as days progressed, the event gained good response and the number of people who attended the event on the second day was twice the number of people who attended on the first day. Unfortunately, due to heavy rains on the third day, the number of people who attended the event was exactly half the number of people who attended on the first day.
Given the total number of people who have attended the event in the first 3 days, find the number of people who have attended the event on day 1, day 2 and day 3.
Input Format:
First line of the input is an integer value that corresponds to the total number of people.
Output Format:
First line of the output should display the number of attendees on day 1.
Second line of the output should display the number of attendees on day 2.
Third line of the output should display the number of attendees on day 3.
Refer sample input and output for formatting specifications.
[All text in bold corresponds to input and rest corresponds to output.]
Sample Input and Output:
Enter the total number of people
10500
Number of attendees on day 1 : 3000
Number of attendees on day 2 : 6000
Number of attendees on day 3 : 1500

*/
#include<stdio.h>
int main()
{
int first_day_x,second_day,third_day,total_people;

printf("\nEnter the total number of people \n");
scanf("%d",&total_people);
//first_day_x+(2*first_day_x)+(first_day_x/2)=total_people;
//first_day_x=total_people-((2*first_day_x)+(first_day_x/2));
first_day_x=(2*total_people)/7;
second_day=2*first_day_x;
third_day=first_day_x/2;
printf("Number of attendees on day 1 : %d",first_day_x);
printf("\nNumber of attendees on day 2 : %d",second_day);
printf("\nNumber of attendees on day 3 : %d",third_day);
return 0;
}
