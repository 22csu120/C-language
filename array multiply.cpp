#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,j,k,sum=0;
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
   	printf("Enter data for first array :");
   	for(i=0 ; i<3 ; i++){
   		for(j=0; j<3 ; j++){
   			scanf("%d",&arr1[i][j]);
		   }
		   printf("\n");
	   }
	printf("Enter data for second array :");   
	for(i=0 ; i<3 ; i++){
   		for(j=0; j<3 ; j++){
   			scanf("%d",&arr2[i][j]);
		   }
		   printf("\n");
	   }
	   
	   
	for(i=0 ; i<3 ;i++){
		for(j =0; j<3 ; j++){
			for(k=0 ; k<3 ; k++){
				sum += arr1[i][k]*arr2[k][j];
			}
		arr3[i][j] = sum ;
		sum = 0;	
		}
	}
	for(i=0 ; i<3 ; i++){
   		for(j=0; j<3 ; j++){
   			printf("%d  ",arr3[i][j]);
		   }
		   printf("\n");
	   }
	
    return 0;
}
