#include <stdio.h>

/** Assignment:- 12 **/
/** While Loop **/

// Q1
void f1() {
    printf("*************************************************************\n");
    printf("Q1. Write a program to print 'MySirG' N times on the screen.\n");
    printf("*************************************************************\n\n");

    int i = 1, n = 8;
    while (i <= n) {
        printf("%d. MySirG\n", i);
        i+=1;
    }

    printf("\n***********************************************************\n");
    printf("                END OF QUESTION 1\n");
    printf("*************************************************************\n\n\n\n\n");
}

// Q2
void f2() {
    printf("********************************************************\n");
    printf("Q2. Write a program to print the first N natural numbers.\n");
    printf("********************************************************\n\n\n\n\n"); 

    int i = 1, n = 15;
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    printf("\n******************************************************\n");
    printf("       END OF QUESTION 2\n");
    printf("******************************************************\n\n\n\n\n");
}

// Q3
void f3() {
    printf("*************************************************************************\n");
    printf("Q3. Write a program to print the first N natural numbers in reverse order.\n");
    printf("*************************************************************************\n\n     "); // 5 spaces

    int i = 10;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    printf("\n**********************************************************************\n");
    printf("                       END OF QUESTION 3\n");
    printf("************************************************************************\n\n\n");
}

// Q4
void f4() {
    printf("********************************************************\n");
    printf("Q4. Write a program to print first N odd natural numbers.\n");
    printf("********************************************************\n\n"); 

    int i = 1, n = 19;
    while (i <= n) {
        if (i % 2 != 0)
            printf("%d\n", i);
        i++;
    }

    printf("\n******************************************************\n");
    printf("                END OF QUESTION 4\n");
    printf("******************************************************\n\n\n");
}

// Q5
void f5() {
    printf("*************************************************************************\n");
    printf("Q5. Write a program to print first N odd natural numbers in reverse order.\n");
    printf("*************************************************************************\n\n"); 

    int i = 8;
    while (i >= 1) {
        printf("%d\n", i * 2 - 1);
        i--;
    }

    printf("\n************************************************************************\n");
    printf("                   END OF QUESTION 5\n");
    printf("**************************************************************************\n\n\n");
}

// Q6
void f6() {
    printf("*********************************************************\n");
    printf("Q6. Write a program to print first N even natural numbers.\n");
    printf("**********************************************************\n\n"); 

    int i = 1, n = 17;
    while (i <= n) {
        printf("%d\n", i * 2);
        i++;
    }

    printf("\n************************************************************************\n");
    printf("                      END OF QUESTION 6\n");
    printf("*************************************************************************\n\n\n");
}

// Q7
void f7() {
    printf("*************************************************************************\n");
    printf("Q7. Write a program to print first N even natural numbers in reverse order.\n");
    printf("**************************************************************************\n\n"); 

    int i = 10;
    while (i >= 1) {
        printf("%d\n", i * 2);
        i--;
    }

    printf("\n********************************************************************\n");
    printf("                      END OF QUESTION 7\n");
    printf("**********************************************************************\n\n\n");
}

// Q8
void f8() {
    printf("********************************************************************\n");
    printf("Q8. Write a program to print squares of the first N natural numbers.\n");
    printf("********************************************************************\n\n     "); // 5 spaces

    int i = 1, n = 15;
    while (i <= n) {
        printf("%d² = %d\n", i, i * i);
        i++;
    }

    printf("\n*****************************************************************\n");
    printf("                  END OF QUESTION 8\n");
    printf("*******************************************************************\n\n\n");
}

// Q9
void f9() {
    printf("********************************************************************\n");
    printf("Q9. Write a program to print cubes of the first N natural numbers.\n");
    printf("********************************************************************\n\n     "); // 5 spaces

    int i = 1, n = 8;
    while (i <= n) {
        printf("%d³ = %d\n", i, i * i * i);
        i++;
    }

    printf("\n*****************************************************************\n");
    printf("       END OF QUESTION 9\n");
    printf("*******************************************************************\n\n\n");
}

// Q10
void f10() {
    printf("******************************************\n");
    printf("Q10. Write a program to print a table of N.\n");
    printf("******************************************\n\n     "); // 5 spaces

    int n = 7, i = 1;
    while (i <= 10) {
        printf("%d × %d = %d\n", n, i, n * i);
        i++;
    }

    printf("\n******************************************\n");
    printf("          END OF QUESTION 10\n");
    printf("*********************************************\n\n\n");
}

// MAIN
int main() {
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();

    printf("=========== END OF ASSIGNMENT 12 ===========\n");
    return 0;
}
