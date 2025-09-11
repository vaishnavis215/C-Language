#include <stdio.h>

void main() {
    int s, i;
    float sum = 0, average;

    printf("Enter the size of elements: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter elements:\n", s);
    for (i=0;i<s;i++) {
        scanf("%d", &arr[i]);
        sum=sum+arr[i]; 
    }
    average = sum/s;
    printf("The average of the array elements is: %.2f\n", average);
}

