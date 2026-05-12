#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    } printf("The count number is %d ",count);
} 