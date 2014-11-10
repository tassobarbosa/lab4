#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char * dest, const char * source){
	int len;
	len = strlen(source);
	int i=0;
	for(i=0;i<len;i++){
		dest[i] = source[i];
	}
	dest[i] = '\0';
}

void my_strncpy(char * dest, const char * source, size_t num){
	int i;
	for(i=0; i<num; i++)
		dest[i] = source[i];

	dest[i] = '\0';
}

void my_strcat(char * dest, const char * source){
	int i=0;
	int len = strlen(dest);	

	int j;
	int len2 = strlen(source);
	for(j=0;j<len2;j++){
		dest[len+j] = source[j];
	}
	dest[len+j] = '\0';	
}

void my_strncat(char * dest, const char * source, size_t num){
	int i=0;
	int len = strlen(dest);
	for(i=0;i<len; i++)
		if(dest[i]=='\0') break;

	int j;
	for(j=0;j<num;j++){
		dest[i] = source[j];
		i++;	
	}
	dest[i] = '\0';	
}


int my_strcmp(const char * str1, const char * str2){
	int i=0;
	for(i = 0; i<strlen(str1); i++){
		if(str1[i] == str2[i]){
		
		}else{
			if(str1[i]>str2[i])return 1;
			else return -1;
		} 
	}
	if(strlen(str1) == strlen(str2)) return 0;
	else return -1;
}

char * my_strchr(const char * str, int character){
	int i;
	
	for(i=0; i<strlen(str);i++)
		if(str[i] == character){
		 	return (char *)&str[i];			
			}

	return NULL;
}

char * my_strstr(const char * haystack, const char * needle){
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	int i, j;
	for(i = 0; i < haystack_len; i++){
		if(haystack[i] == needle[0]){
			for(j = 0; j < needle_len; j++){
				if(haystack[i+j] != needle[j]) break;
				if(j == needle_len -1) return (char *)&haystack[i];
			}
		}
	}
	return NULL;
}

size_t my_strlen(const char * str){
	size_t i=0;
	while(str[i]!=0){
		i++;
	}
	return i;
}
