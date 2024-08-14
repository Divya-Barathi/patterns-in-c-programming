#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int pascal[n][n];
    for (i = 0; i < n; ++i) {
        for (j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            printf(" ");
        }
        for (j = 0; j <= i; ++j) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
    return 0;
}


OUTPUT
Enter the number of rows: 5
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1
