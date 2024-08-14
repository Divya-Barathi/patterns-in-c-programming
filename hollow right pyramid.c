#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n - i; ++j) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


OUTPUT
Enter the number of rows: 5
    *
   **
  * *
 *  *
*****
