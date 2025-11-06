#include <stdio.h>
// Q1
void f1() {
    printf("Q1. Print left-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    for(i=1; i<=4; i++) {
        for(j=1; j<=7; j++) {
            if(j >= 5-i && j <= 3+i)
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
    for(i=1; i<=4; i++) {
        for(j=1; j<=7; j++) {
            if(j >= 5-i && j <= 8-i)
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
    for(i=1; i<=4; i++) {
        for(j=1; j<=7; j++) {
            if(j >= i && j<= 8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q4      /**** Leave for practice *****/
void f4() {
    printf("Q4. Print inverted right-aligned triangle of stars\n\n");
    printf("Solution :- \n\n");


    int i, j;
    for(i=1; i<=4; i++) {
        int k = 1;
        for(j=1; j<=7; j++) {
            if(j >= 5-i && j <= 3+i && k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
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
    for(i=1; i<=4; i++) {
        int k = 1;
        for(j=1; j<=7; j++) {
            if(j >= 5-i && j <= 3+i)
            {
                printf("%d",k);

                (j<4)? k++ : k-- ;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");
}

// Q6
void f6() {
    printf("Q6. Print left-aligned number triangle in reverse order\n\n");
    printf("Solution :- \n\n");


    int i, j,ch;
    for(i=1; i<=4; i++) {
        ch = 'A';
        for(j=1; j<=7; j++) {
            if(j >= i && j<= 8-i)
                printf("%c",ch++);
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

    char ch;
    int i,j;

    for(i=1; i<=4; i++) {
        ch = 'A';
        for(j=1; j<=7; j++) {
            if(j >= i && j<= 8-i)
            {
                printf("%c",ch);

                (j<4)? ch++ : ch-- ;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");
}
// Q8      /**** Leave for practice *****/
void f8() {
    printf("Q8. Print inverted right-aligned triangle of numbers\n\n");
    printf("Solution :- \n\n");

    int i, j, flag, k;
    for(i=1; i<=5; i++) {
        k = 1;
        flag = 1;
        for(j=1; j<=9; j++) {
            if(j >= 6-i && j <= 4+i) {
                if(flag) {
                    printf("%d", k);
                    (j < 5) ? k++ : k--;
                } else {
                    printf(" ");   // add space inside the triangle
                    if(j==5 && i%2 == 0)
                        k--;
                }
                flag = 1 - flag;   // toggle each step
            }

            else {
                printf(" ");       // space outside triangle
            }
        }
        printf("\n");
    }
    printf("\n\n");

}


// Q9
void f9() {
    printf("Q9. Print left-aligned continuous number triangle\n\n");
    printf("Solution :- \n\n");

    int i, j;

    for(i=1; i<=4; i++) {
        for(j=1; j<=7; j++) {
            if(j <= 5-i || j >= 3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
}

// Q10
void f10() {
    printf("Q10. Print inverted right-aligned triangle of alphabets\n\n");
    printf("Solution :- \n\n");

    int i, j, k;

    for(i=1; i<=4; i++) {
        k = 1;
        for(j=1; j<=7; j++) {
            if(j <= 5-i || j >= 3+i) {
                printf("%d", k);
                (j < 4) ? k++ : k--;
            }
            else {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }

    printf("\n\n");
}

// Q11
void f11() {
    printf("Q11. Print hollow square of stars\n\n");
    printf("Solution :- \n\n");

    int i, j;
    char ch;

    for(i=1; i<=4; i++) {
        ch = 'A';
        for(j=1; j<=7; j++) {
            if(j <= 5-i || j >= 3+i) {
                printf("%c", ch);
                (j < 4) ? ch++ : ch--;
            }
            else {
                printf(" ");
                if(j==4)
                    ch--;
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

// MAIN
int main() {
    printf("***************************************\n");
    printf("\t      Assignment :- 18\n");
    printf("\tMore on Star Pattern Problems\n");
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
    f11();

    return 0;
}