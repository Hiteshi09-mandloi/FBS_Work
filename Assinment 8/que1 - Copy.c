#include <stdio.h>
#include <math.h>
void main(){
	int arr[]={1,2,3,4,5,6};
	int length = sizeof(arr) / sizeof(arr[0]);
	int max=arr[0];
	int min=arr[0];
	int i;
	
	for(i=0;i<length;i++){
		if(max<arr[i])
 			max=arr[i];
		if(min>arr[i])
			min=arr[i];		
 	}
 	printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}
