#include <stdio.h>

void Reverse(int array[], int n) {
    int sum = 0;
    printf("Reverse of the array elements:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
        sum += array[i];
    }
    printf("\nSum of the reversed elements: %d\n", sum);
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

    Reverse(array, n);

    return 0;
}