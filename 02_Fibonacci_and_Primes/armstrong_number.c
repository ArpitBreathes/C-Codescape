#include<conio.h>
#include<stdio.h>
#include<math.h>
main(){
    int num,n=0,original,remainder,result=0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d",&num);
    original = num;
    while(original != 0){
        original /=10;
        n++;
    }
    original = num;
    while(original!=0){
        remainder = original % 10;
        result+=pow(remainder,n);
        original/=10;
    }

    if(result == num){
        printf("%d is an Armstrong number. \n",num);
    }else{
        printf("%d is not an Armstrong number. \n",num);
    }
    getch();
}