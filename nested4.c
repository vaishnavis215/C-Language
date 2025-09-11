#include <stdio.h>
void main() {
    int i,j,n = 3;
    for ( i = 1; i <= n; i++) {
        // spaces
        for ( j = i;j < n; j++) {
            printf(" ");
        }
        // stars
        for ( j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
}

