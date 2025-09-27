#include <stdio.h>
#include <math.h>

// ----------------- Part 1 -----------------
// Armstrong numbers (w/o parameter, w/o return type)
void armstrongRange1() {
    int n;
    printf("Enter limit n: ");
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++) {
        int temp=i, sum=0, rem, digits=0;
        int t=i;
        while(t>0) { digits++; t/=10; }
        while(temp>0) {
            rem=temp%10;
            sum += pow(rem,digits);
            temp/=10;
        }
        if(sum==i) printf("%d ", i);
    }
    printf("\n");
}

// Armstrong numbers (with parameter, w/o return type)
void armstrongRange2(int n) {
	int i;
    for(i=1; i<=n; i++) {
        int temp=i, sum=0, rem, digits=0;
        int t=i;
        while(t>0) { digits++; t/=10; }
        while(temp>0) {
            rem=temp%10;
            sum += pow(rem,digits);
            temp/=10;
        }
        if(sum==i) printf("%d ", i);
    }
    printf("\n");
}

// Prime numbers (w/o parameter, w/o return type)
void primeRange1() {
    int n;
    printf("Enter limit n: ");
    scanf("%d",&n);
    int i;
    for(i=2;i<=n;i++) {
        int flag=1;
        int j;
        for(j=2;j<=sqrt(i);j++) {
            if(i%j==0) { flag=0; break; }
        }
        if(flag) printf("%d ",i);
    }
    printf("\n");
}

// Prime numbers (with parameter)
void primeRange2(int n) {
	int i;
    for(i=2;i<=n;i++) {
        int flag=1;
        int j;
        for(j=2;j<=sqrt(i);j++) {
            if(i%j==0) { flag=0; break; }
        }
        if(flag) printf("%d ",i);
    }
    printf("\n");
}

// Perfect numbers (w/o parameter)
void perfectRange1() {
    int n;
    printf("Enter limit n: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++) {
        int sum=0;
        int j;
        for(j=1;j<i;j++) if(i%j==0) sum+=j;
        if(sum==i) printf("%d ",i);
    }
    printf("\n");
}

// Perfect numbers (with parameter)
void perfectRange2(int n) {
	int i;
    for(i=1;i<=n;i++) {
        int sum=0;
        int j;
        for(j=1;j<i;j++) if(i%j==0) sum+=j;
        if(sum==i) printf("%d ",i);
    }
    printf("\n");
}

// Strong numbers (w/o parameter)
void strongRange1() {
    int n;
    printf("Enter limit n: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++) {
        int temp=i, sum=0, rem;
        while(temp>0) {
            rem=temp%10;
            int fact=1;
            int k;
            for(k=1;k<=rem;k++) fact*=k;
            sum+=fact;
            temp/=10;
        }
        if(sum==i) printf("%d ",i);
    }
    printf("\n");
}

// Strong numbers (with parameter)
void strongRange2(int n) {
	int i;
    for(i=1;i<=n;i++) {
        int temp=i, sum=0, rem;
        while(temp>0) {
            rem=temp%10;
            int fact=1;
            int k;
            for(k=1;k<=rem;k++) fact*=k;
            sum+=fact;
            temp/=10;
        }
        if(sum==i) printf("%d ",i);
    }
    printf("\n");
}

// ----------------- Part 2 -----------------
// Menu driven (with number as parameter, w/o return type)
void numberOperations1() {
    int n, choice;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nMenu:\n1.Even/Odd\n2.Prime\n3.Palindrome\n4.Positive/Negative/Zero\n5.Reverse\n6.Sum of digits\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice) {
        case 1:
            if(n%2==0) printf("Even\n"); else printf("Odd\n");
            break;
        case 2: {
            int flag=1;
            if(n<2) flag=0;
            int i;
            for(i=2;i<=sqrt(n);i++) if(n%i==0) { flag=0; break; }
            if(flag) printf("Prime\n"); else printf("Not Prime\n");
            break;
        }
        case 3: {
            int rev=0,temp=n;
            while(temp>0) { rev=rev*10+temp%10; temp/=10; }
            if(rev==n) printf("Palindrome\n"); else printf("Not Palindrome\n");
            break;
        }
        case 4:
            if(n>0) printf("Positive\n"); else if(n<0) printf("Negative\n"); else printf("Zero\n");
            break;
        case 5: {
            int rev=0,temp=n;
            while(temp>0) { rev=rev*10+temp%10; temp/=10; }
            printf("Reverse = %d\n",rev);
            break;
        }
        case 6: {
            int sum=0,temp=n;
            while(temp>0) { sum+=temp%10; temp/=10; }
            printf("Sum of digits = %d\n",sum);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
}

void numberOperations2(int n, int choice) {
    switch(choice) {
        case 1:
            if(n%2==0) printf("Even\n"); else printf("Odd\n");
            break;
        case 2: {
            int flag=1;
            if(n<2) flag=0;
            int i;
            for(i=2;i<=sqrt(n);i++) if(n%i==0) { flag=0; break; }
            if(flag) printf("Prime\n"); else printf("Not Prime\n");
            break;
        }
        case 3: {
            int rev=0,temp=n;
            while(temp>0) { rev=rev*10+temp%10; temp/=10; }
            if(rev==n) printf("Palindrome\n"); else printf("Not Palindrome\n");
            break;
        }
        case 4:
            if(n>0) printf("Positive\n"); else if(n<0) printf("Negative\n"); else printf("Zero\n");
            break;
        case 5: {
            int rev=0,temp=n;
            while(temp>0) { rev=rev*10+temp%10; temp/=10; }
            printf("Reverse = %d\n",rev);
            break;
        }
        case 6: {
            int sum=0,temp=n;
            while(temp>0) { sum+=temp%10; temp/=10; }
            printf("Sum of digits = %d\n",sum);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
}

// ----------------- MAIN -----------------
int main() {
    int choice,n;

    printf("\n--- Part 1: Ranges ---\n");
    armstrongRange1();
    primeRange1();
    perfectRange1();
    strongRange1();

    printf("\nUsing With Parameter:\n");
    printf("Enter n: ");
    scanf("%d",&n);
    armstrongRange2(n);
    primeRange2(n);
    perfectRange2(n);
    strongRange2(n);

    printf("\n--- Part 2: Number Operations ---\n");
    numberOperations1(); // Without parameter
    printf("\nNow with parameter:\n");
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter choice: ");
    scanf("%d",&choice);
    numberOperations2(n,choice);

    return 0;
}

