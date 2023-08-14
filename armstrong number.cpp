#include<stdio.h>

int main(){
	int n,f,sum =0,i;
	printf("Enter your numer : ");
	scanf("%d",&i);
	n = i ;
	while(n != 0){
		f = n%10 ;
		n = n/10 ;
		sum = f*f*f + sum ;
	}
	if(sum==i){
		printf("It is an armstrong number");
	}
	
	else{
		printf("It is not an armstrong number");
	}
}
