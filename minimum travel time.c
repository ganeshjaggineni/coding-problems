/*
The renowned book fair of the season "Publishers Federation Book Expo" is back, it
promises to be bigger and better with a spread of about a million books on display. It
is organized in a wide space this year on the topmost floor N of Hotel Grand
Regency.
Williams, an ardent book lover visits the fair and wants to minimize the time it takes
him to go from the N-th floor to ground floor. He can either take the elevator or the
stairs.
The stairs are at an angle of 45 degrees and Williams's velocity is V1 m/s when
taking the stairs down. The elevator on the other hand moves with a velocity V2 m/s.
Whenever an elevator is called, it always starts from ground floor and goes to N-th
floor where it collects Williams (collecting takes no time), it then makes its way down
to the ground floor with Williams in it.
The elevator cross a total distance equal to N meters when going from N-th floor to
ground floor or vice versa, while the length of the stairs is sqrt(2) * N because the
stairs is at angle 45 degrees. Williams has requested your help to decide whether he
should use stairs or the elevator to minimize his travel time. Can you help him out?
Input Format:
First line of the input contains three space-separated integers N, V1, V2.
Output Format:
Output a single line with string Elevator or Stairs, denoting the answer to the
problem.
Refer sample input and output for formatting specifications.
Sample Input 1:
5 10 15
Sample Output 1:
Elevator
Sample Input 2:
2 10 14
Sample Output 2:
Stairs
*/
//PROGRAM

#include<stdio.h>
int main()
{
int n,velocity_v1,velocity_v2;
double elev_dist,elev_speed,elev_time;
double stairs_dist,stairs_speed,stairs_time;
scanf("%d%d%d",&n,&velocity_v1,&velocity_v2);

//formula
//time=distance/speed;
//elev_dist=n+n
elev_dist=2*n;
elev_speed=velocity_v2;
elev_time=elev_dist/elev_speed;

stairs_dist=sqrt(2)*n;
stairs_speed=velocity_v1;
stairs_time=stairs_dist/stairs_speed;
if(stairs_time<elev_time)
    printf("Stairs");
else
    printf("Elevator");
return 0;
}
