#include <stdio.h>

void main() {
    char ch='s';
  
    if ((ch >= 'A' && ch <= 'Z')) {
        printf("%c is Uppercase\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is Lowercase\n", ch);
    } 
    else {
        printf("%c is not an alphabet character\n", ch);
    }

   
}
