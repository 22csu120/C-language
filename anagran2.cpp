#include<stdio.h>
#include<string.h>

int areanagram(const char *str1 ,const  char *str2){
	int count[256]={0};
	int len1 = strlen(str1);
	int len2 = strlen(str2); int i;
	
	
	if(len1 != len2){
		return 0;
	}
	
	for(i=0 ; i<len1 ;i++){
		count[str1[i]]++;
		count[str2[i]]--;
	}
	for(i=0 ; i<256 ;i++){
		if(count[i] != 0){
			return 0;
		}
	}
	
	return 1;
	
}

int main(){
	char str1[100];
	char str2[100];
	
	printf("Enter first string : \n");
	scanf("%s",&str1);
	printf("Enter second string : \n");
	scanf("%s",&str2);
	
	
	if(areanagram(str1,str2)){
		printf("strings are anagram ");
	}
	else{
		printf("strings are not anagram.");
	}
	

	
	return 0;
}
