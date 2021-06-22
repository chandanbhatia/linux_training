#include <stdio.h>

int main()
{
    int arr[3][4] = {
                  {10, 11, 12, 13},
                  {20, 21, 22, 23},
                  {30, 31, 32, 33}
                  };
    int i, j;
    
    for(int i=0; i<3; i++){
        printf("adddress of %dth array = %u %u\n", i, arr[i], *(arr+i));
        for(int j=0; j<4; j++){
            printf("%d ", arr[i][j]);
            printf("%d ", *(*(arr+i)+j));
            printf("%d ", (*(*arr+i)+j));
            
        }
        printf("\n");
    }

    return 0;
}

/*************************************************************
Output:
  adddress of 0th array = 149407376 149407376
  10 10 10 11 11 11 12 12 12 13 13 13 
  adddress of 1th array = 149407392 149407392
  20 20 11 21 21 12 22 22 13 23 23 14 
  adddress of 2th array = 149407408 149407408
  30 30 12 31 31 13 32 32 14 33 33 15 

*************************************************************/
