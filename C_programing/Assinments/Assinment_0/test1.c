#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for isalpha, isdigit, etc.

void fun1(char str[]) {
    int v = 0, c = 0, d = 0, s = 0, i;
    int n = strlen(str);

    for (i = 0; i < n; i++) {
        char ch = str[i];

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            v++;
        }
        else if (isalpha(ch)) {   
            c++;
        }
        else if (isdigit(ch)) {  
            d++;
        }
        else if (ch == ' ') {     
            s++;
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Spaces: %d\n", s);
}

int main() {
    char str[100];
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);   
    str[strcspn(str, "\n")] = 0;     

    fun1(str);

    return 0;
}

