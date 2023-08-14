#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	char str[100];
	int i;
    printf("Enter your text :")  ;
    scanf("%c",&str);
    int len = strlen(str);
//    while(str[i] != '\0'){
//    	while(str[i] != ' '){
//    	printf("%c",str[i]);
//    	i++;
//		}
//		printf("\n");
//	}
//    for(i=0 ; i<len ; i++){
//    	if(str[i] != ' '){
//    		printf("%c",str[i]);
//		}
//		printf("\n");
//	}
for(i=0 ; i<len ; i++){
    	if(str[i] == ' '){
    		printf("\n");
		}
		printf("%c",str[i]);
	}
    return 0;
}

