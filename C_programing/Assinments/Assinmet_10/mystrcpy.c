#include<stdio.h>
char* mystrcpy(char,char);
int main(){
	char source[100], destination[100];

    printf("Enter a string: ");
    scanf("%s", source);
    
    mystrcpy(destination,source);
    printf("Copied string: %s\n", destination);

}

char* mystrcpy(char d[],char s[]){
	int i=0;
	while(s[i]!='\0'){
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
}