#include<stdio.h>
#include<stdlib.h>

int main(){
    int days;
    printf("enter number of days\n");
    scanf("%d", &days);

    float *sales = (float*)malloc(days * sizeof(float));

    printf("enter sales for %d days\n", days);
    for(int i=0; i<days; i++){
        scanf("%f", &sales[i]);
    }

    float total = 0;
    for(int i=0; i<days; i++){
        total += sales[i];
    }

    printf("total sales = %.2f\n", total);

    int extra;
    printf("enter extra days to add\n");
    scanf("%d", &extra);

    sales = (float*)realloc(sales, (days + extra) * sizeof(float));

    printf("enter sales for extra %d days\n", extra);
    for(int i=days; i<days+extra; i++){
        scanf("%f", &sales[i]);
    }

    total = 0;
    for(int i=0; i<days+extra; i++){
        total += sales[i];
    }

    printf("new total sales = %.2f\n", total);

    free(sales);
    return 0;
}

