#include<stdio.h>
#include<stdlib.h>
int main(){
int a, b, c;
int i, j,k;
printf("enter number of rows and columbs of matrix A\n");
scanf("%d %d", &a, &b);
printf("enter number of columbs of matrix B\n");
scanf("%d", &c);

    
int **A=(int**)malloc(a*sizeof(int*));
for(int i=0; i<a; i++){
	A[i]=(int*)malloc(b*sizeof(int));
}
  
int **B=(int**)malloc(b*sizeof(int*));
for(int i=0; i<b; i++){
	B[i]=(int*)malloc(c*sizeof(int));
}

int **C=(int**)malloc(a*sizeof(int*));
for(int i=0; i<a; i++){
	C[i]=(int*)malloc(c*sizeof(int));
}

    printf("Enter elements of matrix A (%d x %d):\n", a, b);
    for(int i=0; i<a; i++){
    	for(int j=0; j<b; j++){
    		scanf("%d", &A[i][j]);
		}
	}


    printf("Enter elements of matrix B (%d x %d):\n", b, c);
    for(int i=0; i<b; i++){
    	for(int j=0; j<c; j++){
    		scanf("%d", &B[i][j]);
		}
	}

    for(int i=0; i<a; i++){
    	for(int j=0; j<c; j++){
    	   C[i][j]=0;
		}
	}

	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			for(int k=0; k<b; k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}

	printf("resulted matrix\n");
	for(int i=0; i<a; i++){
		for(int j=0; j<c; j++){
			printf(" %d ", C[i][j]);
		}
	}
	  for (i = 0; i < a; i++) free(A[i]);
    free(A);

    for (i = 0; i < b; i++) free(B[i]);
    free(B);

    for (i = 0; i < a; i++) free(C[i]);
    free(C);

    return 0;
}
