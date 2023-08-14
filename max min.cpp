#include<stdio.h>

int main(){
	int n,i;
	printf("enter limit of your numbers");
	scanf("%d",&n);
	int arr[n];
	for(i=0 ; i <n ; i++){
		scanf("%d",&arr[i]);
	}
	int maxnum = 0;
	int minnum =arr[0];
	for(i=0 ; i <n ; i++){
		if(arr[i]>maxnum){
			maxnum = arr[i];
		}
		if(arr[i]<minnum){
			minnum = arr[i];
		}
	}
	printf("Max num is %d and Min num is %d",maxnum,minnum);
}
