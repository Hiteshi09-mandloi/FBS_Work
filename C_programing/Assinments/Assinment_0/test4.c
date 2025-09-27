#include<stdio.h>
void main(){
	int i;
	for(i=2;i<=100;i++){
		int j;
		for(j=2;j<i;j++){
			if(i<=1){
				return;
			}
			if(i%j!=0){
				printf("%d ",i);
			}
		}
	}
}
