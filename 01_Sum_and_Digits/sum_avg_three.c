#include<stdio.h>
#include<conio.h>
main(){
    float num1,num2,num3,sum,avg;        //Variable Declaration
    clrscr();
    printf("Enter the three numbers: ");
    scanf("%f%f%f,&num1,&num2,&num3");
    sum = num1 + num2 + num3;
    avg = sum/3;
    printf("Sum = %.2f\n Avgerage = %.2f\n",sum,avg);   //%.2f will print the output sum or avg exactly upto two decimal places  
    getch();
}