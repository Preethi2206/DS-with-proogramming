#include<stdio.h>
int main(){
    int number, digit, sum, cycle_no = 0,finalNumber;
    printf("Enter a number: ");
    scanf("%d",&number);
    while (number != 1 && cycle_no < 10){
        sum = 0;
        int temp = number;
        while (temp > 0){
            digit = temp % 10;
            sum +=digit * digit;
            temp /=10;
        }
        number = sum;
        cycle_no++;
    }
    finalNumber = number;
    printf("Final number = %d\n",finalNumber);
    printf("Cycle No = %d\n",cycle_no);
    return 0;
}
