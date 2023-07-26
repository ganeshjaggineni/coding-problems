/*
Aayush studies in Teswan National University. Now is the time for exam results.
Aayush similar to other students, hopes that his scores in 5 subjects in the exam
could fetch him a scholarship for his GRE preparation.
The following simple rules are used to find whether he is eligible to receive
scholarship:
 University follows 5 point grading system. In an exam, a student can receive
any score from 2 to 5. 2 is called an F grade, meaning that student has failed
that exam.
 Student should not have fail any of the exams.
 Student must obtain a full score in some of his/her exams to show that he/she
is excellent in some of the subjects.
 He/She must have a grade point average not less than 4.0
You are given information regarding how Aayush performed in those 5 subjects .
Help him determine whether he will receive the scholarship or not.
Input Format:
The input contains 5 space separated integers denoting Aayush’s 5 subjects score in
the exam.
Output Format:
Output a single line - "Yes" (without quotes) if Aayush will receive scholarship, or
"No" (without quotes) otherwise.
Refer sample input and output for formatting specifications.
Sample Input 1:
3 5 4 4 3
Sample Output 1:
No
Sample Input 2:
3 4 4 4 5
Sample Output 2:
Yes
*/
//PROGRAM

#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,valid=0;
float avg;
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

if(sub1>2&&sub2>2&&sub3>2&&sub4>2&&sub5>2)
    valid=1;
if(sub1==5 || sub2==5 || sub3==5||sub4==5||sub5==5)
    valid=1;

avg=(sub1+sub2+sub3+sub4+sub5)/5;
if(valid==1&&avg>=4.0)
    printf("Yes");
else
    printf("No");
return 0;
}
