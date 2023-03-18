//example of arry
//write a program to store markes for 5 subject
#include<stdio.h>
void main()
{
    // datatype arry-name[size];
    int markes[5],count = 0;
    for (count = 0; count<5; count++)
    {
        printf("enter markes for subject %d",count + 1);
        scanf("%d",&markes[count]);
    }
//   printf("enter markes for subject 2");
//   scanf("%d",&markes[2]);
//   printf("enter markes for subject 3");
//   scanf("%d",&markes[3]);
//   printf("enter markes for subject 4");
//   scanf("%d",&markes[4]);
//   printf("enter markes for subject 5");
//   scanf("%d",&markes[5]);
count=0;
while (count<5)
{
    printf("\nthe value of subject %d is %d",count+1,markes[count]);
    count++;
}
//   printf("\nthe value of markes of subject 2 is %d",markes[2]);
//   printf("\nthe value of markes of subject 3 is %d",markes[3]);
//   printf("\nthe value of markes of subject 4 is %d",markes[4]);
//   printf("\nthe value of markes of subject 5 is %d",markes[5]);

}