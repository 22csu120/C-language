#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char str[100];
	int i,temp;
	int count[256] = {0};
	printf("Enter data :");
	
	scanf("%c",&str);
	
	for(i=0 ; str[i] != '\0' ; i++){
		count[str[i]]++;
	}
	
	for(i=0 ; i<256 ; i++){
		if(count[i]>1){
			printf(" %d repets %d times",i,count[i]);
		}
	}
//	for(i=0 ; i<strlen(str) ;i++){
//		temp = str[i];
//		for(i=0 ; i<strlen(str) ;i++){
//			if(str[i] == temp){
//				count ++;
//			}
//		}
//		printf("The character %c has %d repetetion",str[i],count);
//		count = 0;
//	}
}

