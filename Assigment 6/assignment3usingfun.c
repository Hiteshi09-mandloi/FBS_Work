#include <stdio.h>
#include <math.h>

// Q1. Print 1 to 10 -> No args, No return
void printNumbers() {
	int i;
    for(i=1;i<=10;i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Q2. Table -> With args, No return
void printTable(int n) {
	int i;
    for(i=1;i<=10;i++) {
        printf("%d ", n*i);
    }
    printf("\n");
}

// Q3. Sum of range -> No args, With return
int sumRange() {
    int start, end, sum=0;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    int i;
    for(i=start;i<=end;i++) sum+=i;
    return sum;
}

// Q4. Prime -> With args, With return
int isPrime(int n) {
    if(n < 2) return 0;
    int i;
    for(i=2;i<=sqrt(n);i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

// Q5. Armstrong -> No args, No return
void checkArmstrong() {
    int n, temp, rem, sum=0, digits=0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0) { digits++; temp/=10; }
    temp=n;
    while(temp>0) {
        rem=temp%10;
        sum += pow(rem,digits);
        temp/=10;
    }
    if(sum==n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
}

// Q6. Perfect number -> With args, No return
void checkPerfect(int n) {
    int sum=0;
    int i;
    for(i=1;i<n;i++) {
        if(n%i==0) sum+=i;
    }
    if(sum==n) printf("Perfect\n");
    else printf("Not Perfect\n");
}

// Q7. Factorial -> No args, With return
int factorial() {
    int n, fact=1;
    printf("Enter number: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++) fact*=i;
    return fact;
}

// Q8. Strong number -> With args, With return
int isStrong(int n) {
    int temp=n, sum=0, rem;
    while(temp>0) {
        rem=temp%10;
        int fact=1;
        int i;
        for(i=1;i<=rem;i++) fact*=i;
        sum+=fact;
        temp/=10;
    }
    return (sum==n);
}

// Q9. Palindrome -> No args, No return
void checkPalindrome() {
    int n, rev=0, temp, rem;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0) {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(rev==n) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}

// Q10. Sum of first & last digit -> With args, With return
int sumFirstLast(int n) {
    int last=n%10;
    int first=n;
    while(first>=10) {
        first/=10;
    }
    return first+last;
}

// ---------------- Main ----------------
int main() {
    int choice;
    do {
        printf("\n========= MENU =========\n");
        printf("1. Print numbers 1-10\n");
        printf("2. Print Table\n");
        printf("3. Sum of Range\n");
        printf("4. Prime Check\n");
        printf("5. Armstrong Check\n");
        printf("6. Perfect Number Check\n");
        printf("7. Factorial\n");
        printf("8. Strong Number Check\n");
        printf("9. Palindrome Check\n");
        printf("10. Sum of First & Last Digit\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printNumbers();
                break;
            case 2: {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);
                printTable(n);
                break;
            }
            case 3: {
                int res=sumRange();
                printf("Sum = %d\n",res);
                break;
            }
            case 4: {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);
                if(isPrime(n)) printf("Prime\n"); else printf("Not Prime\n");
                break;
            }
            case 5:
                checkArmstrong();
                break;
            case 6: {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);
                checkPerfect(n);
                break;
            }
            case 7: {
                int res=factorial();
                printf("Factorial = %d\n",res);
                break;
            }
            case 8: {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);
                if(isStrong(n)) printf("Strong\n"); else printf("Not Strong\n");
                break;
            }
            case 9:
                checkPalindrome();
                break;
            case 10: {
                int n;
                printf("Enter number: ");
                scanf("%d",&n);
                int res=sumFirstLast(n);
                printf("Sum of First and Last Digit = %d\n",res);
                break;
            }
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice!=0);

    return 0;
}

