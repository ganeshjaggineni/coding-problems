/*
Harry, a little boy was accompanied by his Dad to visit the "Aquatica Carnival". The event
saw a large crowd and the Security Chiefs found it hard to control them. Very regretfully,
Harry got lost and was seen extremely worried. He wanted to reach back home as soon as
possible. He was standing currently at coordinates (x1, y1) in 2-D plane. His home is at
coordinates (x2, y2).
Please help him by giving a command by telling the direction in which he should go, so as to
reach his home. If you give him a direction, he will keep moving in that direction till he
reaches home. There are four possible directions you can give as command - "left", "right",
"up", "down". It might be possible that you can't instruct Harry in such a way that he reaches
his home. In that case, display the output as "sad".
Input Format:
First line of the input contains four space separated integers x1, y1, x2, y2.
Output Format:
Output a single line containing "left" or "right" or "up" or "down" or "sad" (without
quotes).
Refer sample input and output for formatting specifications.
Sample Input 1:
0 0 1 0
Sample Output 1:
right
Sample Input 2:
0 0 1 1
Sample Output 2:
sad
*/
#include<stdio.h>
int main()
{
int x1,y1,x2,y2;
while(1)
{
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
if(x1 == x2 || y1 == y2)//then only he reaches home because in same plane
{
    if(x1>x2)
        printf("left");
    else if (x1<x2)
        printf("right");
    else if(y1>y2)
        printf("down");
    else if(y1<y2)
        printf("up");
}
else
{
//not in 2d plane so not reach his home  in any of given direction...
//question says in only left,right,up or down but this requires north-east,south-west etc directions
printf("sad");
}
}
return 0;
}
//testcases
/*
SNo Name Input Output Visibility
1 T6 100 100 100 200 up Private
2 T9 0 10 1 10 right Private
3 T8 100 200 100 100 down Private
4 T4 5 4 5 10 up Private
5 T7 10 20 30 40 sad Private
6 T5 10 5 4 5 left Private
7 T2 0 0 0 1 up Private
8 T1 0 0 1 0 right Public
9 T3 0 0 1 1 sad Public
*/
/*
//example
 harry(1,20) and home(1,40)
 draw in a graph
 home(1,40)
        |
        | up
        |
        |
harry(1,20)
here x coordiantes equal so we have to move up or down to reach harry home
 y-coordinates
 y2>y1
 home>harry
 so ,he moves up to reach home

 //example 2
 harry--(5,10) and home(2,10)

 home(2,10)--------------left-----------------harry(5,10)
here y-coordinate is equal so harry move left or right to reach his house
2<5
x2<x1,,,so harry move left to reach his house
*/
