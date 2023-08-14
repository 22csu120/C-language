#include <stdio.h>

void update(int *a , int *b){
	int int1,int2;
	int1 = *a;
	int2 = *b;
	int sum ,abd;
	sum = int1+int2;
	*a = int1;
	
	if(int1>int2){
		abd = int1 - int2 ;
		*b = abd;
	}
	
	if(int2>int1){
		abd = int2 - int1 ;
		*b = abd;
	}
	
	 
}

int main(){
	int a,b;
	int *pa = &a , *pb =&b;
	scanf("%d  %d"  ,&a,&b);
	update(pa,pb);
	printf("%d \n %d",a,b);
}
