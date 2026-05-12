#include<stdio.h>
int main(){
    float n;
    printf("Enter number of terms:");
    scanf("%f",&n);
    float a=100;
    for (float i=1; i<=n ;i++){
        printf("%.2f ",a);
        a=a-(a/2);
    }
    return 0;
}