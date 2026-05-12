#include<stdio.h>
int main(){
    int n;
    printf("Enter digits:");
    scanf("%d",&n);
    for(int a=1; a<=n; a++){
        if(a%2!=0)
        printf("%d\n",a);
    }
    return 0;
}   