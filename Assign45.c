#include <stdio.h>
#include <string.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

void formatting()
{
    printf("+++++========+++++==========+++++==========+++++========+++++\n");
    printf("Q1. Write a program to calculate the difference between two time\n");
    printf("    periods\n");
    printf("+++++========+++++==========+++++==========+++++========+++++\n");
}

// Q1.
int isGreater(struct Time t1, struct Time t2)
{
    if (t1.hrs > t2.hrs) return 1;
    else if (t1.hrs < t2.hrs) return 0;

    if (t1.min > t2.min) return 1;
    else if (t1.min < t2.min) return 0;

    if (t1.sec > t2.sec) return 1;
    return 0;
}

struct Time difference(struct Time t1, struct Time t2, struct Time diff)
{
    struct Time big, small;

    if (isGreater(t1, t2)) {
        big = t1;
        small = t2;
    } else {
        big = t2;
        small = t1;
    }

    if (big.sec < small.sec) {
        big.sec += 60;
        big.min--;
    }
    diff.sec = big.sec - small.sec;

    if (big.min < small.min) {
        big.min += 60;
        big.hrs--;
    }
    diff.min = big.min - small.min;

    diff.hrs = big.hrs - small.hrs;

    return diff;
}

void passValue()
{
    struct Time t1, t2, diff;

    printf("\nEnter Value for First Time Period\n");
    printf("Enter hrs min sec : ");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);

    printf("\nEnter Value for Second Time Period\n");
    printf("Enter hrs min sec : ");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);

    diff = difference(t1, t2, diff);

    printf("\nDifference = %d hrs : %d min : %d sec\n",
           diff.hrs, diff.min, diff.sec);
}

// Q2.
struct Students
{
    char name[50];
    int class;
    int roll;
};

struct Students input()
{
    struct Students s;
    static int round = 1;

    printf("\n=======================================\n");
    printf("Enter Details of Student %d:\n", round++);

    printf("Enter Name: ");
    getchar();
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Class: ");
    scanf("%d", &s.class);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    return s;
}

void Input(struct Students s[], int n)
{
    for (int i = 0; i < n; i++)
        s[i] = input();
}

void printStudentsDetails(struct Students s[], int n)
{
    printf("\n=========== Students Details ===========\n");
    printf("%-20s %-10s %-10s\n", "Name", "Class", "Roll");
    printf("========================================\n");

    for (int i = 0; i < n; i++)
        printf("%-20s %-10d %-10d\n",
               s[i].name, s[i].class, s[i].roll);
}


// Q4.
struct Marks {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

struct Marks stdDataInput()
{
    struct Marks m;
    static int round = 1;

    printf("\n==================================\n");
    printf("Details Of Student %d:\n", round++);

    printf("Enter Name: ");
    while(getchar()!='\n');
    fgets(m.name, 50, stdin);
    m.name[strcspn(m.name, "\n")] = '\0';

    printf("Enter Roll: ");
    scanf("%d", &m.roll_no);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &m.chem_marks);

    printf("Enter Maths Marks: ");
    scanf("%d", &m.maths_marks);

    printf("Enter Physics Marks: ");
    scanf("%d", &m.phy_marks);

    printf("==================================\n");
    return m;
}

void inputData(struct Marks m[])
{
    for(int i = 0; i < 5; i++)
        m[i] = stdDataInput();
}

float percentage(struct Marks m)
{
    return (m.chem_marks + m.maths_marks + m.phy_marks) / 3.0;
}

void printStudentMarksDetails(struct Marks m[])
{
    printf("\n========== Students Marks Details ==========\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Name        : %s\n", m[i].name);
        printf("Roll Number : %d\n", m[i].roll_no);
        printf("Percentage  : %.2f%%\n", percentage(m[i]));
        printf("--------------------------------------\n");
    }
}


int main()
{
    // Q1
    formatting();
    passValue();

    // Q2
    printf("\n==== Q2 ====\n");
    int n = 3;
    struct Students s[n];

    Input(s, n);
    printStudentsDetails(s, n);

    // Q4
    printf("\n==== Q4 ====\n");

    struct Marks m[5];
    inputData(m);
    printStudentMarksDetails(m);

    return 0;
}
