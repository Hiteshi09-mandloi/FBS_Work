#include <stdio.h>

// Q1. Even/Odd -> No arguments, No return
void evenOdd() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

// Q2. Palindrome -> With arguments, No return
void palindrome(int num) {
    int rev=0, rem, temp=num;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(num == rev)
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);
}

// Q3. Leap Year -> No arguments, With return
int leapYear() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if((year%400==0) || (year%4==0 && year%100!=0))
        return 1;
    else
        return 0;
}

// Q4. Vowel/Consonant -> With arguments, With return
int vowelOrConsonant(char ch) {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1; // vowel
    else
        return 0; // consonant
}

// Q5. Voting Eligibility -> No arguments, No return
void votingEligibility() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");
}

// Q6. Uppercase/Lowercase -> With arguments, With return
int checkCase(char ch) {
    if(ch >= 'A' && ch <= 'Z')
        return 1; // uppercase
    else if(ch >= 'a' && ch <= 'z')
        return 0; // lowercase
    else
        return -1; // not alphabet
}

// Q7. Salary Calculation -> With arguments, With return
float calcSalary(float basic) {
    float da, ta, hra, total;
    if(basic <= 5000) {
        da = 0.10*basic; ta = 0.20*basic; hra = 0.25*basic;
    } else {
        da = 0.15*basic; ta = 0.25*basic; hra = 0.30*basic;
    }
    total = basic + da + ta + hra;
    return total;
}


// ---------------- Main ----------------
int main() {
    int choice;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Even/Odd (No args, No return)\n");
        printf("2. Palindrome (With args, No return)\n");
        printf("3. Leap Year (No args, With return)\n");
        printf("4. Vowel/Consonant (With args, With return)\n");
        printf("5. Voting Eligibility (No args, No return)\n");
        printf("6. Uppercase/Lowercase (With args, With return)\n");
        printf("7. Salary Calculation (With args, With return)\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                evenOdd();
                break;
            case 2: {
                int num;
                printf("Enter 3-digit number: ");
                scanf("%d", &num);
                palindrome(num);
                break;
            }
            case 3: {
                int res = leapYear();
                if(res) printf("Leap Year\n"); else printf("Not Leap Year\n");
                break;
            }
            case 4: {
                char ch;
                printf("Enter character: ");
                scanf(" %c", &ch);
                int res = vowelOrConsonant(ch);
                if(res) printf("Vowel\n"); else printf("Consonant\n");
                break;
            }
            case 5:
                votingEligibility();
                break;
            case 6: {
                char ch;
                printf("Enter character: ");
                scanf(" %c", &ch);
                int res = checkCase(ch);
                if(res==1) printf("Uppercase\n");
                else if(res==0) printf("Lowercase\n");
                else printf("Not Alphabet\n");
                break;
            }
            case 7: {
                float basic;
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                float total = calcSalary(basic);
                printf("Total Salary = %.2f\n", total);
                break;
            }
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}

