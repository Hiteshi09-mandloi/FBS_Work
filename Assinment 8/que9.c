#include <stdio.h>
void main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
	int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     int left=0,right=n-1;
    int temp=0;
    while(left<right){
       
       	 temp=arr[left];
       	 arr[left]=arr[right];
       	 arr[right]=temp;
	   left++;
	   right--;
    }
    printf("reverse array :");
    for(i=0;i<n;i++){
    	printf("%d ",arr[i]);
	}

  
   
}

