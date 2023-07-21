/*
Pranav, an enthusiastic kid visited the "Fun Fair 2017" along with his family. His
father wanted him to purchase entry tickets from the counter for his family
members. Being a little kid, he is just learning to understand about units of money.
Pranav has paid some amount of money for the tickets, but he wants your help to
give him back the change of Rs. N using minimum number of rupee notes.
Consider a currency system in which there are notes of seven denominations,
namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If the change given to Pranav
Rs. N is input, write a program to computer smallest number of notes that will
combine to give Rs. N.
Input Format:
First line of the input is an integer N, the change to be given to Pranav.
Output Format:
Output should display the smallest number of notes that will combine to give N.
Refer sample input and output for formatting specifications.
Sample Input 1:
1200
Sample Output1:
12
Sample Input 2:
242
Sample Output2:
7
1

*/

#include<stdio.h>
int main()
{
int change,div=0,notes=0;
scanf("%d",&change);

if(change>=100)
{
    div=change/100;
    change=change%100;
    notes=notes+div;
    printf("\nchange= %d and notes =%d and div=%d",change,notes,div);
}
if(change>=50)
{
    div=change/50;
    change=change%50;
    notes=notes+div;
        printf("\nchange= %d and notes =%d and div=%d",change,notes,div);

}
if(change>=10)
{
    div=change/10;
    change=change%10;
    notes=notes+div;
        printf("\nchange= %d and notes =%d and div=%d",change,notes,div);

}
if(change>=5)
{
    div=change/5;
    change=change%5;
    notes=notes+div;
}
if(change>=2)
{
    div=change/2;
    change=change%2;
    notes=notes+div;
}
if(change>=1)
{
    div=change/1;
    change=change%1;
    notes=notes+div;
}

printf("%d",div);
return 0;
}
