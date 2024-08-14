#include <stdio.h>
int main() {
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i) {
        for (k = 0; k < rows - i; ++k) {
            printf("  ");
        }
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


OUTPUT
Enter the number of rows: 5
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
