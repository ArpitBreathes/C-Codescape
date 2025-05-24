#include<conio.h>
#include<stdio.h>
main(){
    int num,sum = 0,digit; 
    clrscr();
    printf("Enter the positive integer: ");       //positive integer whose sum of digits you want
    scanf("%d",&num);
    while(num>0){
        digit = num % 10;
        sum += digit;
        num = num /10;
    }
    printf("Sum of digits is %d\n",sum);
    getch();
}