#include<stdio.h>
int main(){
    int sqdnumber,digit;
    int sqdNumber_result = 0;
    printf("Enter number: ");
    scanf("%d",&sqdnumber);
    while(sqdnumber != 0){
        digit = sqdnumber % 10;
        sqdNumber_result = sqdNumber_result + digit * digit;
        sqdnumber = sqdnumber / 10;
    }
    printf("Sum of squares = %d",sqdNumber_result);
    return 0;
}
