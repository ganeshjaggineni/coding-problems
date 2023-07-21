/*
Help India, a famous NGO has been selective in identifying events to raise funds for charity. Suzanne is a volunteer from the NGO who was selling tickets to the public for the charity event. She sold 'X' more adult tickets than children tickets and she sold twice as many senior tickets as children tickets. Assume that an adult ticket costs $5, children ticket costs $2 and senior ticket costs $3.
Suzanne made 'Y' dollars from ticket sales. Find the number of adult tickets, children tickets and senior tickets.
Input Format:
First input is an integer value X that corresponds to the number of adult tickets more than children tickets.
Second input is an integer value Y that corresponds to the money in dollars made by Suzanne from ticket sales.
Output Format:
First line of the output should display the number of children tickets sold.
Second line of the output should display the number of adult tickets sold.
Third line of the output should display the number of senior tickets sold.
Refer sample input and output for formatting specifications.
[All text in bold corresponds to input and rest corresponds to output.]
Sample Input and Output :
Enter the value of X
10
Enter the value of Y
700
Number of children tickets sold : 50
Number of adult tickets sold : 60
Number of senior tickets sold : 100
*/
#include<stdio.h>
int main()
{
int x,y,adult_tic,senior_tic,child_tic;

printf("Enter the value of x \n");
scanf("%d",&x);
printf("Enter the value of y \n");
scanf("%d",&y);
/*
adult_tic=x+child_tic;
senior_tic=2*child_tic;

total_tic=child_tic+adult_tic+senior_tic;
(child_tic*2)+(adult_tic*5)+(senior_tic*3)=yy
(child_tic*2)+((x+child_tic)*5)+((2*child_tic)*3)=yy
(2*child_tic)+(5*x+5*child_tic)+(6*child_tic)=yy
(2*child_tic)+(5*child_tic)+(6*child_tic)=yy-5*x;
13*child_tic=yy-5*x;
*/
child_tic=(y-(5*x))/13;
adult_tic=x+child_tic;
senior_tic=2*child_tic;

printf("\nNumber of children tickets sold : %d",child_tic);
printf("\nNumber of adult tickets sold : %d",adult_tic);
printf("\nNumber of senior tickets sold : %d",senior_tic);

return 0;
}
