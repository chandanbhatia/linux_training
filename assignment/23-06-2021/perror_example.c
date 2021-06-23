/*********************************************************
perror() prints standard error message when error encounted
during a function call
**********************************************************/


#include <stdio.h>

int main () {
   FILE *fp;

   /* now let's try to open same file */
   if(-1 == ( fp = fopen("file.txt", "r"))){
    perror("unable to open file.txt");
   }    
   return(0);
}

/*********************************************************
if file.txt doesn't exist, perror() will display 
unable to open file.txt
**********************************************************/
