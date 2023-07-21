/*
The prime functionality of an Event Management System is budgeting. An Event
Management System should estimate the total expenses incurred by an event and
the percentage rate of each of the expenses involved in planning and executing an
event. Nikhil, the founder of "Pine Tree" wanted to include this functionality in his
company’s Amphi Event Management System and requested your help in writing a
program for the same.
The program should get the branding expenses, travel expenses, food expenses and
logistics expenses as input from the user and calculate the total expenses for an
event and the percentage rate of each of these expenses.
Input Format:
First input is a double value that corresponds to the branding expenses.
Second input is a double value that corresponds to the travel expenses.
Third input is a double value that corresponds to the food expenses.
Fourth input is a double value that corresponds to the logistics expenses.
Output Format:
First line of the output should display the double value that corresponds to the total
expenses for the Event.
Next four lines should display the percentage rate of each of the expenses.
Sample Input and Output:
Enter branding expenses
20000
Enter travel expenses
40000
Enter food expenses
15000
Enter logistics expenses
25000
Total expenses : Rs.100000.00
Branding expenses percentage : 20.00%
Travel expenses percentage : 40.00%
Food expenses percentage : 15.00%
Logistics expenses percentage : 25.00%
*/
//CODING
#include<stdio.h>
int main()
{
double branding_expenses,travel_expenses,food_expenses,logistics_expenses,total_expenses;

printf("Enter branding expenses\n");
scanf("%lf",&branding_expenses);
printf("Enter travel expenses\n");
scanf("%lf",&travel_expenses);
printf("Enter food expenses\n");
scanf("%lf",&food_expenses);
printf("Enter logistic expenses\n");
scanf("%lf",&logistics_expenses);
//output
total_expenses=branding_expenses+travel_expenses+food_expenses+logistics_expenses;
printf("\nTotal expenses : %.2lf",total_expenses);
printf("\nBranding expenses percentage : %.2lf %%",(branding_expenses/total_expenses)*100);
printf("\nTravel expenses percentage : %.2lf %%",(travel_expenses/total_expenses)*100);
printf("\nFood expenses percentage : %.2lf %%",(food_expenses/total_expenses)*100);
printf("\nlogistics expenses percentage : %.2lf %%",(logistics_expenses/total_expenses)*100);
return 0;
}
