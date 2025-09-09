#include<stdio.h>

struct student{
	int rollNo;
	char name[15];
	float marks;
};

void main(){
	struct student s;
	printf("Enter the rollNo: ");
	scanf("%d",&s.rollNo);
	printf("Enter the name: ");
	scanf("%s",s.name);
	printf("Enter the marks: ");
	scanf("%f",&s.marks);
	
	printf("Student details are....\n");
	printf("rollNo: %d\n",s.rollNo);
	printf("Name: %s\n",s.name);
	printf("Marks: %f",s.marks);
	
}
