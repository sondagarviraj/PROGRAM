// write a program to find total and average 
#include<stdio.h>
void main()
{
    int size;
    printf("enter total number of student");
    scanf("%d",&size);
    int marks[size],count = 0;
    float answer = 0,average;
    do
    {
        printf("enter marks for suject %d",count + 1);
        scanf("%d",&marks[count]);
        count++;
    } while (count < size);
    for (count = 0; count< size; count= count + 1)
    {
        printf("\n the value of marks of subject %d is %d",count + 1,marks[count]);
    }
    
    answer = 0;
    for(count=0;count<size;count++)
    {
        answer = answer = +marks[count];
    }
    printf("\n the value of answer is %.2f",answer);
    // answer = answer +marks[1];
   // answer = answer +marks[2];   
   // answer = answer +marks[3];
   // answer = answer +marks[4];
   average = answer / size ;
   printf("\n the value of average is %.2f",average);


}