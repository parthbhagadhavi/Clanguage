#include <stdio.h>

void calculateCube(int array[], int n) {
    printf("Cubes of the array elements:\n");
    for (int i = 0; i < n; i++) {
        int cube = array[i] * array[i] * array[i]; 
        printf("%d ", cube);
    }
    printf("\n");
}

int main() {
    int array[100]; 
    int n;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    calculateCube(array, n);

    return 0;
}