#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter size of array\n");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("enter %d elements\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int newSize = n * 2;
    arr = (int*)realloc(arr, newSize * sizeof(int));

    printf("enter %d more elements\n", n);
    for(int i=n; i<newSize; i++){
        scanf("%d", &arr[i]);
    }

    printf("updated array:\n");
    for(int i=0; i<newSize; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}

