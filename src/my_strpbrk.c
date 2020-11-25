#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Brady Lange
 * 3/12/18
 * File name: mystrpbrk.c
 * This program is my own version of locating characters in a string that is found in the C library
 */
 
 //My strpbrk function that I have created myself
 const char * mystrpbrk(const char * str1, const char * str2)
 {
	 int i = 0;
	 int str1length = strlen(str1);
	 int str2length = strlen(str2);
	 int count = 0;
	 
	 while(count != str1length)
	 {
		 if(str1[count] == str2[i])
		 {
			 str1 = &str1[count];
			 return str1;
			 break;
		 }
		 else
			++i;
		 if(i == str2length)
		 {
			 ++count;
			 i = 0;
		 }
	 }
	 
	 //If no pointer was returned and the count equals the first strings length return a NULL pointer
	 if(count == str1length)
	 {
		 str1 = NULL;
		 return str1;
	 }
	 
	 
 } //End of mystrpbrk
 
 //Main function to test my strpbrk function
 int main(int argc, char * argv[])
 {
	 int i = 0;
	 int length1 = strlen(argv[1]);
	 int length2 = strlen(argv[2]);
	 char string[length1];
	 char key[length2];
	 char * stringPointer;
	 
	 //Making the string array more user friendly to work with
	 while(argv[1][i] != '\0')
	 {
		 string[i] = argv[1][i];
		 i++;
	 }
	 i = 0;
	 while(argv[2][i] != '\0')
	 {
		 key[i] = argv[2][i];
		 i++;
	 }
	   
	 
	 printf("Letters found in '%s' using a key: ", string);
	 stringPointer = mystrpbrk(string, key);

	 //Looping through all of the string to find multiple of the same letters that were in the key
	 while(stringPointer != NULL)
	 {
		 printf("%c ", *stringPointer);
		 stringPointer = mystrpbrk(stringPointer + 1, key);
	 }
	 printf("\n");
	 
	 return 0; 
	 
 } //End of main function