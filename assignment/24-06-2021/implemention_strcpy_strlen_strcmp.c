#include <stdio.h>

char *personal_strcpy(char *dest, const char *src)
{
	char *tmp = dest;
	while(*src!='\0'){
	    *dest++ = *src++;
	}
	*dest = '\0';
	return tmp;
}

int personal_strlen(const char *src)
{
	int len =0;
	while(*src!='\0'){
	    *src++;
	    len++;
	}
	return len;
}

int personal_strcmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	while (1) {
		c1 = *cs++;
		c2 = *ct++;
		if (c1 != c2)
			return c1 < c2 ? -1 : 1;
		if (!c1)
			break;
	}
	return 0;
}
int main() {
   char str1[25] = "Coping string";
   char str2[25];

   personal_strcpy(str2, str1);
   
   printf("%s\n",str2);
   
   printf("string length is %d\n",personal_strlen(str2));
   
   //str2[2] = 'a';
   if( (personal_strcmp (str1, str2)) == 0){
       printf("Both Strings are same");
   }else{
       printf("Both Strings are different");
   }

   return 0;
}

/********************************************************
Test Case 1:
  Coping string
  string length is 13
  Both Strings are same
  
Test Case 2:
  String Random Data
  string length is 18
  Both Strings are same
 
*********************************************************/
