/*
Hill Town Inn is planning to organize a Food Festival bringing together at one
place, a wide variety of cuisines from across the world on account of Christmas.
The Hotel Management has rented out a square hall of an indoor Auditorium for
this extravaganza. The side of the square hall is y inches in which a large square
table is placed for the display of the most popular and celebrated food items. The
side of the square table is x inches, such that x<y.
The Management wanted to fill the remaining floor area with a decorative carpet.
To get this done, they needed to know the floor area to be filled with the carpet.
Write a program to help the Management find the area of the region located
outside the square table, but inside the square hall.
Input Format:
First line of the input is an integer y, the side of the square hall.
Second line of the input is an integer x, the side of the square table placed for
display.
Output Format:
Output should display the area of the floor that is to be decorated with the carpet.
Sample Input and Output 1:
Enter the side of the square hall
7
Enter the side of the square table placed for display
3
Area to be decorated is 40
Sample Input and Output 2:
Enter the side of the square hall
5
Enter the side of the square table placed for display
2
Area to be decorated is 21
*/
#include<stdio.h>
int main()
{
int square_hall,square_table,carpet,square_hall_area,square_table_area,carpet_area;

printf("Enter the side of the square hall\n");
scanf("%d",&square_hall);
printf("Enter the side of the square table placed for display\n");
scanf("%d",&square_table);

square_hall_area=square_hall*square_hall;
square_table_area=square_table*square_table;
carpet_area=square_hall_area-square_table_area;

printf("\nArea to be decorated is %d",carpet_area);
return 0;
}
