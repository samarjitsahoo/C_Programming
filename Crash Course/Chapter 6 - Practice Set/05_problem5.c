#include <stdio.h>

int sum(int a, int b){
    int s = a + b;
    printf("The sum is %d\n", s);
    return s; // Return the value directly
}

float average(int a, int b){
    float avg = (a + b) / 2.0;
    printf("The average is %f\n", avg);
    return avg; // Return the value directly
}

int main(){
    int x = 4; 
    int y = 6;
    int sum_result;
    float average_result;

    sum_result = sum(x, y); // Store the returned value from sum
    average_result = average(x, y); // Store the returned value from average

    printf("The sum is %d and the average is %f\n", sum_result, average_result);

    return 0;
}