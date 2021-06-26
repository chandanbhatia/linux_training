#include <stdio.h>

#define ROW 0x04
#define COL 0x03

 void transpose(int A[][COL], int B[][ROW], int row, int col)
 {
     for (int i = 0; i < col; i++)
         for (int j = 0; j < row; j++)
             B[i][j] = A[j][i];
}
 
void printMatrix(int *p, int N, int M){

    for (int i = 0; i < N; i++) {
  
        // Travere columns of 2D matrix
        for (int j = 0; j < M; j++) {
  
            // Print the element
            printf("%d ", *((p + i * M) + j));
        }
        printf("\n");
    }
    
    printf("\n");
    
}
// Driver code
int main()
{
    int A[ROW][COL] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12},
                    };
 
    int B[COL][ROW];
  
    printf("Input maxtrix is: \n");
    printMatrix(A, ROW, COL);
    transpose(A, B, ROW, COL);
    printf("Output maxtrix is: \n");
    printMatrix(B, COL, ROW);
 
    return 0;
}

/*********************************************************
Output:

  Input maxtrix is: 
  1 2 3 
  4 5 6 
  7 8 9 
  10 11 12 

  Output maxtrix is: 
  1 4 7 10 
  2 5 8 11 
  3 6 9 12 

*********************************************************/
