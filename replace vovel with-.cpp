#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	char temp;

	int i=0,count=0;
	printf("Enter your word :");
	gets(str);
	while(count!=3 ){
		if(str[i] == 'a' || 'e' || 'i' || 'o' ||'u'){
			str[i] ='-';
			count = 3;
		}
		
	}
	puts(str);
	
}
