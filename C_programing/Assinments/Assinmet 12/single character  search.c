#include<stdio.h>
int main(){
	char str[50];
	int count=0;
	int consonent=0;

	printf("enter a string:");
	scanf("%s",str);
	
	int n=strlen(str);
	
	for(int i=0;i<n;i++){
		char ch=str[i];
		if(ch=='a'&&ch=='z'){
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'){
			count++;
		}else{
			consonent++;
		}
		
	}
}
	printf("%d",count);
	printf("%d",consonent);
}