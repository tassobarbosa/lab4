#include "myCString.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	char str[] = "Sample string";
	char str2[40];
	my_strcpy(str2, str);
	printf("%s\n",str2);

	char str3[40];
	my_strncpy(str3, str, 6);
	printf("%s\n",str3);

	char str4[40] = "This is a ";	
	my_strcat(str4, str);
	printf("%s\n", str4);

	char str5[40]= "This ";
	my_strncat(str5,"is a sample string",11);	
	printf("%s\n", str5);

	char str6[] = "Sample string";
	char str7[] = "Sample different string";
	if(my_strcmp(str,str6)==0) printf("str and str6 match\n");
	if(my_strcmp(str, str7)==0) printf("str and str7 match\n");	

	char * pch;
	pch = my_strchr(str,'t');
	printf ("found at %d\n", pch-str+1);		

	char * pch2;
	pch2 = my_strstr(str, "string");
	printf("found at %d\n",pch2-str+1);

	int len;
	len = my_strlen(str);	
	printf("length of: %d\n", len);
return 0;
}
