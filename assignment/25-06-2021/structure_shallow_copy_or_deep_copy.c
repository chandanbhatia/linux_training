#include <stdio.h>

typedef struct{
    char name[20];
    int id;
}book_t;

int main() {
     book_t book_x ={
        {'M', 'A', 'T', 'H','\0'},
        0x123456,
     };
     book_t book_y;
     book_y = book_x;
     
     printf("book name of second book:%s, id:0x%x \n", book_y.name, book_y.id);
     printf("Post updated first book is to 0x98765\n");
     book_x.id = 0x98765;
     printf("book name of second book:%s, id:0x%x \n", book_y.name, book_y.id);
     if(book_x.id != book_y.id){
         printf("structure copy of C is deep copy \n");
     }else{
         printf("structure copy of C is shallow copy \n");
     }
    
    return 0;
}

/*****************************************************
Output:
  book name of second book:MATH, id:0x123456 
  Post updated first book is to 0x98765
  book name of second book:MATH, id:0x123456 
  structure copy of C is deep copy 
*****************************************************/
