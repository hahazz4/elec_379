#include <stdio.h>

void InsertionSort(int *a, int n){
    int i, j, key;
    for (i = 1; i < n; i++) { // Assuming i = 0 is already sorted...
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }
}

int main(){
    int num = 0;
    
    printf("Please enter the amount of numbers you would like to add in the array: ");
    scanf("%d", &num);

    int a[num+1];
    int z;
    printf("Please enter the values you want in the array\n");
    for (z = 0; z < num; z++){
        scanf("%d", &a[z]);
    }
    
    InsertionSort(a, num);

    printf("\n");
    int i;
    for (i = 0; i < num; i++) {
        printf("%d, ", a[i]);
    }

    return 0;
}
