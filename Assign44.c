#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void inputEmployee(struct Employee *e, int number)
{
    printf("\n+-----------------------------+\n");
    printf("| Enter details for Employee %2d |\n", number);
    printf("+-----------------------------+\n");
    printf("Enter Employee ID   : ");
    scanf("%d", &e->id);
    printf("Enter Employee Name : ");
    scanf("%s", e->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e->salary);
}

void displayEmployee(struct Employee e)
{
    printf("| %-15s %-10d %-12.2f |\n", e.name, e.id, e.salary);
}

void f1(struct Employee emp[], int n)
{
    printf("====================================================\n");
    printf("                  EMPLOYEE ENTRY                   \n");
    printf("====================================================\n");
    for (int i = 0; i < n; i++)
    {
        inputEmployee(&emp[i], i + 1);
    }
    printf("====================================================\n");
    printf("                End of Program 1                   \n");
    printf("====================================================\n\n\n");
}

void f2(struct Employee emp[], int n)
{
    struct Employee max = emp[0];
    for (int i = 1; i < n; i++)
        if (emp[i].salary > max.salary)
            max = emp[i];

    printf("====================================================\n");
    printf("        Employee with the Greatest Salary          \n");
    printf("====================================================\n");
    printf("+-----------------+------------+-------------+\n");
    printf("| Name            | ID         | Salary      |\n");
    printf("+-----------------+------------+-------------+\n");
    displayEmployee(max);
    printf("+-----------------+------------+-------------+\n");

    printf("====================================================\n");
    printf("                End of Program 2                   \n");
    printf("====================================================\n\n\n");
}

void f3(struct Employee emp[], int n)
{
    struct Employee temp;

    // Sort by Salary
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (emp[i].salary > emp[j].salary)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("====================================================\n");
    printf("          Employees Sorted by Salary               \n");
    printf("====================================================\n");
    printf("+-----------------+------------+-------------+\n");
    printf("| Name            | ID         | Salary      |\n");
    printf("+-----------------+------------+-------------+\n");
    for (int i = 0; i < n; i++)
        displayEmployee(emp[i]);
    printf("+-----------------+------------+-------------+\n");
    printf("====================================================\n");
    printf("                End of Program 3                   \n");
    printf("====================================================\n\n\n");

    // Sort by Name
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(emp[i].name, emp[j].name) > 0)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    printf("====================================================\n");
    printf("          Employees Sorted by Name (Alphabetically)\n");
    printf("====================================================\n");
    printf("+-----------------+------------+-------------+\n");
    printf("| Name            | ID         | Salary      |\n");
    printf("+-----------------+------------+-------------+\n");
    for (int i = 0; i < n; i++)
        displayEmployee(emp[i]);
    printf("+-----------------+------------+-------------+\n");
    printf("====================================================\n");
    printf("                End of Program 4                   \n");
    printf("====================================================\n\n\n");
}

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n]; // C99 VLA

    f1(emp, n);
    f2(emp, n);
    f3(emp, n);

    return 0;
}
