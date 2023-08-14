#include<stdio.h>

int main(){
	int i,j;
	int a[10] ;
	printf("enter your array length :");
	scanf("%d",&j);
	for(i=0 ; i<j ; i++){
		printf("enter data for cell number %d  :",i);
		scanf("%d", &a[i]);
	}
	
		for(i=0 ; i<j ; i++){
		printf("%d  ",a[i]);
	}
}
