/*
The ExCon Fair is the region's largest trade fair on Construction Equipments &
Technology. The Event is targeted to be attended by approx. 30 million visitors. To
ensure the smooth functioning of the event and the safety of the visitors, the Event
Coordinator, Security Chief and Crowd Control Chief were instructed to carry twoway transceivers so they can stay in constant contact. Of course, these transceivers
have a limited range so if two are too far apart, they cannot communicate directly.
The Event Coordinator invested in top-of-the-line transceivers which have a few
advanced features. One is that even if two people cannot talk directly because they
are out of range, if there is another transceiver that is close enough to both, then the
two transceivers can still communicate with each other using the third transceiver as
an intermediate device.
There has been a minor emergency at the Event and the Event Coordinator needs to
communicate with both the Security Chief and Crowd Control Chief right away. Help
the Event Coordinator determine if it is possible for all three people to communicate
with each other, even if two must communicate through the third because they are
too far apart.
Input Format:
The first line of the input contains a positive integer R ≤ 1,000 indicating that two
transceivers can communicate directly without an intermediate transceiver if they are
at most R meters away from each other.
The remaining three lines of the input describe the current locations of the the Event
Coordinator, Security Chief and Crowd Control Chief, respectively. Each such line
contains two integers X,Y (at most 10,000 in absolute value) indicating that the
respective person is located at position X,Y.
Output Format:
Output a single line containing a single string. If it is possible for all three to
communicate then you should output "Yes". Otherwise, you should output "No".
To be clear, we say that two transceivers are close enough to communicate directly
if the length of the straight line connecting their X,Y coordinates is at most R.
Refer to sample input and output for formatting specifications.
Sample Input 1: Sample Input 2:
1 2
0 1 0 0
0 0 0 2
1 0 2 1
Sample Output 1: Sample Output 2:
Yes No

*/
//PROGRAM
#include<stdio.h>
#include<math.h>
int main()
{
int r,x1,y1,x2,y2,x3,y3;
float d1,d2,d3;
scanf("%d %d%d %d%d %d%d",&r,&x1,&y1,&x2,&y2,&x3,&y3);
d1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
d2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
d3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
if(d1 <= r && d2 <= r || d3 <= r)
    printf("Yes");
else
    printf("No");

return 0;
}
