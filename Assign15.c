#include<stdio.h>

// Q1: Prime numbers under 100
void f1() {
    printf("Q1. Write a program to print all Prime numbers under 100. \n\n");
    printf("Solution :- \n\n");
    printf("Prime numbers b/w 1 to 100 are : \n");

    int i, j, prime;
    for(i=1; i<=100; i++) {
        prime=0;
        for(j=1; j<=i; j++) {
            if(i%j==0) {
                prime+=1;
            }
        }
        if(prime==2) {
            printf("%d\n",i);
        }
    }
    printf("\n\n\n");
}

// Q2: Prime numbers between two numbers
void f2() {
    printf("Q2. Write a program to print all Prime numbers between two given numbers. \n\n");
    printf("Solution :- \n\n");

    int i, j, n=5, num=30, Prime;
    printf("Prime numbers b/w %d to %d are : \n", n, num);

    for(i = n; i <= num; i++) {
        Prime = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                Prime += 1;
            }
        }
        if(Prime==2) {
            printf("%d\n",i);
        }
    }
    printf("\n\n\n");
}

// Q3: Next Prime number
void f3() {
    printf("Q3. Write a program to find next Prime number of a given number. \n\n");
    printf("Solution :- \n\n");

    int i, j, n = 7, prime;
    for(i = n+1; ; i++) {
        prime = 0;
        for(j=2; j < i; j++) {
            if(i % j == 0) {
                prime = 1;
                break;
            }
        }
        if(prime==0) {
            printf("Next Prime number of %d is : %d\n",n,i);
            break;
        }
    }
    printf("\n\n\n");
}

// Q4: Previous Prime number
void f4() {
    printf("Q4. Write a program to find previous Prime number of a given number. \n\n");
    printf("Solution :- \n\n");

    int i, j, n = 7, prime;
    for(i = n-1; ; i--) {
        prime=0;
        for(j=2; j < i; j++) {
            if(i % j == 0) {
                prime=1;
                break;
            }
        }
        if(prime==0) {
            printf("Previous Prime number of %d is : %d\n",n,i);
            break;
        }
    }
    printf("\n\n\n");
}

// Q5: HCF of two numbers
void f5() {
    printf("Q5. Write a program to calculate HCF of two numbers.\n\n");
    printf("Solution :- \n\n");

    int hcf, a = 12, b = 18;
    for(hcf=(a<b)?a:b; hcf>=1; hcf--) {
        if(a%hcf==0 && b%hcf==0) {
            printf("HCF of %d and %d is : %d\n",a,b,hcf);
            break;
        }
    }
    printf("\n\n\n\n");
}

// Q6: Co-prime check:
void f6() {
    printf("Q6. Write a program to check whether two given numbers are co-prime numbers or not.\n\n");
    printf("Solution :- \n\n");

    int n = 17, num = 13, hcf, co_prime=0;
    for(hcf = 1; hcf <= n; hcf++) {
        if(n % hcf == 0 && num % hcf == 0) {
            co_prime +=1;
        }
    }
    if(co_prime == 1) {
        printf("%d and %d are co-prime numbers.\n",n,num);
    }
    else {
        printf("%d and %d are not co-prime numbers.\n",n,num);
    }
    printf("\n\n\n");
}

// MAIN
int main(void) {
    printf("***********************************\n");
    printf("\tAssigment :- 15\n");
    printf("\tLevel up with Loops:\n\n");
    printf("***********************************\n\n");

    f1();
    f2();
    f3();
    f4();
    f5();
    f6();

    return 0;
}