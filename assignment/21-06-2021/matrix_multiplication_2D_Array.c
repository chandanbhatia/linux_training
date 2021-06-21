#include <stdio.h>

void printMatrix(int *p, int N, int M){

    for (int i = 0; i < N; i++) {
  
        // Travere columns of 2D matrix
        for (int j = 0; j < M; j++) {
  
            // Print the element
            printf("%d ", *((p + i * M) + j));
            //printf("0x%x ", ((p + i * M) + j));
        }
        printf("\n");
    }
    
    printf("\n");
    
}
// Driver Code
int main()
{
    int N =2, M =2;
    int matrix_1[2][2] = {
                  {2, 4},
                  {3, 4},
                  };
     int matrix_2[2][2] = {
                  {1, 2},
                  {1, 3}
     };
     
    int out[2][2]= {0};
    
    printf("First Matrix:\n");
    printMatrix((int*)matrix_1, N, M);
    printf("Second Matrix:\n");
    printMatrix((int*)matrix_2, N, M);
  
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                out[i][j] = out[i][j] + ( matrix_1[i][k] * matrix_2 [k][j]);
            }
        }
    }
   printf("Out Matrix:\n");
   printMatrix((int*)out, N, M);
    return 0;
}


/**************************************

Test Case 1:
	First Matrix:
	2 4 
	3 4 

	Second Matrix:
	1 2 
	1 3 

	Output Matrix:
	6 16 
	7 18 


Test Case 2:

	First Matrix:
	2 4 
	3 4 

	Second Matrix:
	9 2 
	10 3 

	Output Matrix:
	58 16 
	67 18 


*****************************************/
