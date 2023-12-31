/*
The Westland Game Fair is the premier event of its kind for kids interested in some
intellectual and cognitive brain games. Exciting games were organized for kids
between age group of 8 and 10. One such game was called the "Triangle game",
where different number boards in the range 1 to 180 are available. Each kid needs to
select three number boards, where the numbers on the boards correspond to the
angles of a triangle.
If the angles selected by a kid forms a triangle, he/she would receive Prize 1. If the
angles selected by a kid forms a right triangle, he/she would receive Prize 2. If the
angles selected by the kids form an equilateral triangle, he/she would receive Prize
3. If the angles selected by a kid do not form even a triangle, then he/she will not
receive any prizes. Write a program for the organizers to fetch the result based on
the number boards selected by the kids.
Input Format:
There are 3 lines in the input, each of which corresponds to the numbers on the
boards that the kids select.
Output Format:
Output should display "Prize 1" or "Prize 2" or "Prize 3" or "No Prize" based on the
conditions given.
Refer sample input and output for formatting specifications.
Sample Input 1:
60
50
70
Sample Output 1:
Prize 1
Sample Input 2:
60
60
70
Sample Output 2:
No Prize
*/
//PROGRAM

#include<stdio.h>
int main()
{
int angle_1,angle_2,angle_3,sum=0;
scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
sum=angle_1+angle_2+angle_3;
if(sum==180)
{
    //right angle triangle
  if(angle_1==90 || angle_2 == 90 || angle_3 == 90)
        printf("Prize 2");
        //equilatera triangle
  else if(angle_1 == angle_2 && angle_1 == angle_3)
        printf("Prize 3");
        //just triangle
 else
     printf("Prize 1");
}
else
    printf("No Prize");
return 0;
}
