#include<stdio.h>
int main(){
	int n ,a,f,num=0;
	printf("Enter your number :");
	scanf("%d", &n);

	while(n != 0){
		f = n%10 ;
		n = n/10 ;
		num = num*10 + f ;
	}
	
	printf("Your reverced num is : %d",num);

}
