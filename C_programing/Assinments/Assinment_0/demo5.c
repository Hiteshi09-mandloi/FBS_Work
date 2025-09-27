#include<stdio.h>
void main(){
	int x=4;
	int* p=&x;
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%p\n",p);
	printf("%p\n",&x);
	printf("%p\n",&p);
}
