#include<stdio.h>

int main(){
	int i,j,count1 , count2,temp,len,k,ans=0;
	printf("enter length of strings :");
	scanf("%d",&len);
	int first[len];
	int second[len];
	
	printf("enter data for first :");
	for(i=0 ; i<len ; i++){
		scanf("%d",&first[i]);
	}
	
	printf("enter data for second :");
	for(i=0 ; i<len ; i++){
		scanf("%d",&second[i]);
	}
	
	for(i=0 ; i<len ; i++){
		count1 = 0;
		count2 = 0;
		temp = first[i];
		for(j=0 ; j<len ; j++){
			if(temp == first[i]){
				count1++;
			}
		}
		for(k=0;k<len;k++){
			if(temp == second[k]){
				count2++;
			}
		}
		if(count1 == count2){
			continue;
		}
		else{
			ans++;
			break ;
			
		}
	}
	if(ans==0){
		printf("same arrays.");
	}
	else{
		printf("not same arrays.");
	}
	return 0;
}
