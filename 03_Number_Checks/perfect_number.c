#include<conio.h>
#include<stdio.h>
main(){
    int num,i,sum=0;
    clrscr();
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum == num){
        printf("%d is a perfect number. \n",num);
    }else{
        printf("%d is not a perfect number. \n",num);
    }
    getch();
}