#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int sum=0;
    int ld;
    while(n!=0){ 
        ld=n%10;
        n=n/10;
        sum=sum+ld;
    }printf("Sum of given numbers: %d",sum);
}