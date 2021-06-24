#include <stdio.h>
#include <string.h>

void string_swapping_with_swapping_pointer(char **s1, char **s2){
     char *temp = *s2;
     *s2 = *s1;
     *s1 = temp;
    
}

void string_swapping_with_swapping_data(char *s1, char *s2){
  int tempSize;
  if(strlen(s1) > strlen(s2)){
      tempSize = strlen(s1);
  }else{
      tempSize = strlen(s2);
  }
  char temp[tempSize + 1];
  strcpy(temp, s1);
  strcpy(s1, s2);
  strcpy(s2, temp);
}
int main() {
  char *str1 = "String Fist";
  char *str2 = "String Second";

  char a_str1[20] = "String Fist";
  char a_str2[20] = "String Second";
  
  printf("Before Swapping: \n");
  printf("1st: %s\n", str1);
  printf("2st: %s\n", str2);
  
  string_swapping_with_swapping_pointer(&str1, &str2);

  printf("After Swapping with swapping_pointer: \n");
  printf("1st: %s\n", str1);
  printf("2st: %s\n", str2);
  
  printf("\n");
  printf("Before Swapping: \n");
  printf("1st: %s\n", a_str1);
  printf("2st: %s\n", a_str2);
  
  string_swapping_with_swapping_data(a_str1, a_str2);
  
  printf("After Swapping with swapping_pointer: \n");
  printf("1st: %s\n", a_str1);
  printf("2st: %s\n", a_str2);

  return 0;
}

/******************************************
Output:
  Before Swapping: 
  1st: String Fist
  2st: String Second
  After Swapping with swapping_pointer: 
  1st: String Second2st: String Fist

  Before Swapping: 
  1st: String Fist
  2st: String Second
  After Swapping with swapping_pointer: 
  1st: String Second
  2st: String Fist

*******************************************/
