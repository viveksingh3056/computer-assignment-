#include <stdio.h>
int main() {
    int a[3][3];
    int determinant;
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) -
                  a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) +
                  a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));

    printf("The determinant is: %d\n", determinant);

    return 0;
}
