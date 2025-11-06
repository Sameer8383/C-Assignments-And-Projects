#include <stdio.h>
     
// Q1
void f1() {
    printf("Q1. Print left-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q2
void f2() {
    printf("Q2. Print right-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(j >= 6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q3
void f3() {
    printf("Q3. Print inverted left-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(j <= 6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q4
void f4() {
    printf("Q4. Print inverted right-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i <= 5; i++) {
        for(j=1; j<=5; j++) {
            if(j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q5
void f5() {
    printf("Q5. Print left-aligned number triangle (1 to row number)\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(j <= i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q6
void f6() {
    printf("Q6. Print left-aligned number triangle in reverse order\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        // k = i; row and k is same.
        for(j=1; j<=5; j++) {
            if(j <= i)
                printf("%d",i+1-j);  //k -=1;
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q7
void f7() {
    printf("Q7. Print right-aligned triangle of alphabets\n\n");
    printf("Solution :- \n\n");

    char ch, i, j;
    for(i=1; i <= 5; i++) {

        ch = 'A';

        for(j=1; j<=5; j++) {
            if(j >= i) {
                printf("%c",ch);
                ch++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q8
void f8() {
    printf("Q8. Print left-aligned continuous number triangle\n\n");
    printf("Solution :- \n\n");

    int i, j, k=1;

    for(i=1; i<=5; i++) {

        for(j=1; j<=5; j++) {
            if(j <= i) {
                printf("%d ",k);
                k +=1;
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    printf("\n\n");
}

// Q9
void f9() {
    printf("Q9. Print inverted right-aligned triangle of alphabets\n\n");
    printf("Solution :- \n\n");

    char i, j,k;
    
    for(i='A'; i <= 'E'; i++)
    {
        // k = 64 + i;
        
        for(j='A'; j<='E'; j++) {
            if(j >= i) {
                printf("%c",j);
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    printf("\n\n");
}

// Q10
void f10() {
    printf("Q10. Print hollow square of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(i==1||i==5||j==1||j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// MAIN
int main() {
    printf("***************************************\n");
    printf("\tAssignment :- 17\n");
    printf("\tStar Patterns\n\n");
    printf("***************************************\n\n");

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

    return 0;
}