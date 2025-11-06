#include<stdio.h>
#include<math.h>

// Q1: Nth Fibonacci term:
void f1() {
    printf("Q1. Write a program to find the Nth term of the Fibonacci series. \n\n");
    printf("Solution :- \n\n");

    int a=-1, b=1, c, n=5;

    for(int i=0; i<=4; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%dth term of the Fibonacci series is %d",n, c);
    printf("\n\n\n\n");
}

// Q2: First N Fibonacci terms
void f2() {
    printf("Q2. Write a program to print first N terms of Fibonacci series \n\n");
    printf("Solution :- \n\n");

    int a = -1, b = 1, c, n = 5;

    printf("%d term of Fibonacci is: ", n);
    for(int i = 0; i <= 4; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    printf("\n\n\n\n");
}

// Q3: Check number in Fibonacci
void f3() {
    printf("Q3. Write a program to check whether a given number is there in the Fibonacci series or not. \n\n");
    printf("Solution :- \n\n");

    int a = -1, b = 1, c;
    int num = 13;
    int found = 0;

    for(int i = 0; i <= 10; i++) {
        c = a + b;
        if(num == c) {
            printf("%d is in the Fibonacci series\n", c);
            found = 1;
            break;
        }
        a = b;
        b = c;
    }
    if(!found) {
        printf("%d is NOT in the Fibonacci series\n", c);
    }
    printf("\n\n\n\n");
}

// Q4: Armstrong number check
void f4() {
    printf("Q4. Write a program to check whether a given number is armstrong number or not. \n\n");
    printf("Solution :- \n\n");

    int num = 153, temp, digit, count = 0, rem, sum = 0;
    temp = num;
    int t = temp;

    while(num!=0) {

        num = num / 10;
        count+=1;
    }
    while(t!=0) {
        rem = t%10;
        sum = sum + pow(rem, count);
        t = t/10;
    }
    if(sum == temp)
        printf("%d is an Armstrong number", temp);
    else
        printf("%d is NOT an Armstrong number", temp);
    printf("\n\n\n\n");
}

// Q5: Armstrong numbers under 1000
void f5() {
    printf("Q5. Write a program to print all Armstrong number under 1000. \n\n");
    printf("Solution :- \n\n");

    int num, temp, digit, count, rem, sum, t;

    for (num = 1; num <= 1000; num++) {
        temp = num;
        t = temp;
        count = 0;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            count++;
            temp = temp / 10;
        }

        temp = num;
        while (t != 0) {
            rem = t % 10;
            sum = sum + pow(rem, count);
            t = t / 10;
        }

        if (sum == num)
            printf("%d ", num);
    }
    printf("\n\n\n\n");
}

// MAIN
int main(void) {
    printf("***************************************\n");
    printf("\tAssigment :- 16\n");
    printf("\tLevel up with loops: \n\n");
    printf("***************************************\n\n");

    f1();
    f2();
    f3();
    f4();
    f5();

    return 0;
}