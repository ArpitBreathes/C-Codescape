#include<conio.h>
#include<stdio.h>

void main(){
    int num1,num2;
    clrscr();
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    while(num2!=0){
        int temp = num2;;
        num2 = num1%num2;
        num1 = temp;
    }
    printf("The GCD of the two given positive integer is : %d",num1);
    getch();
}