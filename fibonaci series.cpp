#include<stdio.h>

int main(){
	int len,count=2,sum,i;
	printf("Enter the length of your series  :");
	scanf("%d",&len);
	int arr[len];
	
	for(i=0 ; i<len ; i++){
		scanf("%d",&arr[i]);
	}
	for(i=2 ; i<len ; i++){
		if(arr[i] = arr[i-1] + arr[i-2]){
			count ++;
		}
	}
	if(count == len){
		printf("fibonaci series");
	}
	else{
		printf("not fibonaci series");
	}
//	sum = arr[0];
//	for(i=1 ; i<len ; i++){
//		if(arr[i+1] == sum+arr[i]){
//			sum = sum + arr[i];
//			count ++;
//		}
//	}
//	if(count==len){
//		printf("fibonaci series");
//	}
//	else{
//		printf("not fibonaci series");	
//	}
//	
	return 0;
}
