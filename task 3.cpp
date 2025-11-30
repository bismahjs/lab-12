#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("enter number of strings\n");
    scanf("%d", &n);

    char **list = (char**)malloc(n * sizeof(char*));

    for(int i=0; i<n; i++){
        int len;
        printf("enter length of string %d\n", i+1);
        scanf("%d", &len);

        list[i] = (char*)malloc((len + 1) * sizeof(char));

        printf("enter string %d\n", i+1);
        scanf("%s", list[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(list[i], list[j]) > 0){
                char *temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    printf("sorted strings:\n");
    for(int i=0; i<n; i++){
        printf("%s\n", list[i]);
    }

    for(int i=0; i<n; i++){
        free(list[i]);
    }
    free(list);

    return 0;
}


