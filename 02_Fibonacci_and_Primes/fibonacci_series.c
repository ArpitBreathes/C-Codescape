#include<conio.h>
#include<stdio.h>
main(){
    int n,first = 0,second =1,next,i;
    clrscr();
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Sequence: ");
    for(i=0;i<n;i++){
        if(i<=1){
            next =i;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d",next)
    }
    printf("\n");
    getch();
}