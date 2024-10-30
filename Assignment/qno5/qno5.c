
#include <stdio.h>

void readValues(int arr[], int count) {
    for (int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
}

void printHorizontalHistogram(int arr[], int count) {
    for (int i = 0; i < count; i++) {
        printf("For %d: ", arr[i]);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int findMaxValue(int arr[], int count) {
    int max = -1;
    for (int i = 0; i < count; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

void printVerticalHistogram(int arr[], int count, int max) {
    for (int i = max; i > 0; i--) {
        for (int j = 0; j < count; j++) {
            if (arr[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int count;
    printf("No of values to enter: ");
    scanf("%d", &count);
    int arr[count], max = -1;

    readValues(arr, count);
    printf("=========== Horizontal Histogram ============\n");
    printHorizontalHistogram(arr, count);
    max = findMaxValue(arr, count);
    printf("%d\n", max);
    printf("=========== Vertical Histogram ============\n");
    printVerticalHistogram(arr, count, max);

    return 0;
}
