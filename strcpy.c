#include <stdio.h>
#include <string.h>

char *return_and_pass(char s[])	// OR char return_and_pass(char *s) 
{ 
	s[]='HIKE'; //modify passed string 
	return s;	//return it 
} 
 
int main() 
{ 
	char a[]="Hello!"; 
	printf("%s",return_and_pass(a)); 
	return 0; 
} 