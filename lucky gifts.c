/*
"Planet Kids Entertainment Fair" is back to delight kids and parents. The Fair will
have non-stop entertainment with an extravaganza of games, exciting rides, sports,
art & crafts, role-plays, inspiring competitions, prizes & gifts, and yummy food.
Few lucky attendees at the Fair will be given a pack of candies as a lucky gift and
the show coordinator has assigned you the task for choosing the number of
attendees who will receive the pack of candies. There are 'N' candies available and
you need to decide how many candies to place in each pack. Each pack must
contain the same number of candies. You should choose an integer A between 1
and N, inclusive, and place exactly A candies into each pack. You should make as
many packs as possible but since you enjoy eating candies very much, you eat the
remaining candies.
Write a program that will calculate the maximum number of candies per pack that
can be made with 'N' candies so that you can also maximise the number of candies
that you can eat.
Input Format:
The first and only line of input contains an integer N.
Output Format:
Output a single line that gives the maximum number of candy packs that can be
made with 'N' candies.
Refer sample input and output for formatting specifications.
Sample Input 1:
2
Sample Output 1:
2
Sample Input 2:
5
Sample Output 2:
3
*/
//CODING
#include<stdio.h>
int main()
{
int candies,max_cand_pac;

scanf("%d",&candies);
max_cand_pac=(candies/2)+1;
printf("%d",max_cand_pac);
return 0;

}
