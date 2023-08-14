#include<stdio.h>
#include<stdlib.h>


int main(){
	int i , j , k , sum=0,e1,e2,h1,h2;
	printf("enter size of first matrix");
	scanf("%d %d",&e1,&e2);
	
	printf("enter size of second matrix");
	scanf("%d %d",&h1,&h2);
	int arr1[e1][e2];
	int arr2[h1][h2];
	int arr3[e1][h2];
	
	if(e2 != h1){
		goto end;
	}
	
	
	printf("enter data for first matrix :");
	for(i=0;i<e1;i++){
		for(j=0;j<e2;j++){
			printf("for cell %d %d :",i,j);
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("enter data for second matrix :");
	for(i=0;i<h1;i++){
		for(j=0;j<h2;j++){
			printf("for cell %d %d :",i,j);
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0 ; i<e1 ;i++){
		for(j=0 ; j<h2 ; j++){
			for(k=0 ; k= e2 ; k++){
				sum += arr1[i][k]*arr2[k][j];
			}
			arr3[i][j] = sum ;
			sum =0;
		}
	}
	
	for(i=0 ; i<e1 ; i++){
		for(j= 0 ; j<h2 ; j++){
			printf("%d  ",arr3[i][j]);
		}
		printf("\n");
	}
	end:
		printf("Matrix can not be multiplied");
		
}
