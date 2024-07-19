#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first and second number:\n");
    scanf("%d %d",&num1,&num2);
    int ans = num1+num2;
    printf("The resulting output is %d",ans);
    return 0;
}