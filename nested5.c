#include <stdio.h>
void main() {
    int i,j, n = 3;
    // Upper pyramid
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
		 printf(" ");
        for (j = 1; j <= (2*i-1); j++)
		printf("*");
        printf("\n");
    }
    // Lower inverted pyramid
    for (i = n-1; i >= 1; i--) {
        for (j = i; j < n; j++)
		 printf(" ");
        for (j = 1; j <= (2*i-1); j++)
		 printf("*");
        printf("\n");
    }
    
}

