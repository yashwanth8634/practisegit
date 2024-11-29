#include<stdio.h>//5th question

int main(){
    int n,i;
    printf("enetr the number\n");
    scanf("%d",&n);
    int SecondLast=0,Last=1,sum=0;
    printf("The Fibonacii Series Upto %d\n",n);
    while(sum<=n){
        printf("%d  ",sum);
        SecondLast=Last;
        Last=sum;
        sum=SecondLast+Last;
        
    }
}