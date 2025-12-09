#include <stdio.h>
#include <string.h>

// Assignment 44.
// Structures

typedef struct
{
    int id;
    char name[20];
    float salary;
} Employee;

// Function to input employee data
Employee inputEmployeeData()
{
    Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    getchar(); // consume newline
    fgets(emp.name, 20, stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; // remove newline
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    return emp;
}

// Function to display employee in table format
void displayEmployeeData(Employee emp)
{
    printf("   %-12s %-11d %.2f\n", emp.name, emp.id, emp.salary);
}

// Program 1: Input & display single employee
void f1()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q1. Input & display Employee data in table format.\n");
    printf("******************************************************************************\n\n");

    Employee emp = inputEmployeeData();

    printf("\n   Name          ID          Salary\n");
    printf("----------   ----------   ------------\n");
    displayEmployeeData(emp);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 1st.                                  \n");
    printf("******************************************************************************\n\n");
}

// Function to find employee with greatest salary
Employee greatestSalary(Employee *emps, int size)
{
    Employee maxEmp = emps[0];
    for (int i = 1; i < size; i++)
    {
        if (emps[i].salary > maxEmp.salary)
            maxEmp = emps[i];
    }
    return maxEmp;
}

// Program 2: Greatest salary among employees
void f2()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q2. Find Employee with greatest salary.\n");
    printf("******************************************************************************\n\n");

    int size = 3;
    Employee emps[3];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        emps[i] = inputEmployeeData();
    }

    Employee maxEmp = greatestSalary(emps, size);

    printf("\nEmployee with the greatest salary:\n");
    printf("\n   Name          ID          Salary\n");
    printf("----------   ----------   ------------\n");
    displayEmployeeData(maxEmp);

    printf("\n******************************************************************************\n");
    printf("                        End of Program 2nd.                                  \n");
    printf("******************************************************************************\n\n");
}

// Function to sort employees by name
void sortACToTheirNames(Employee *emps, int size)
{
    Employee temp;
    for (int r = 1; r < size; r++)
    {
        for (int i = 0; i < size - r; i++)
        {
            if (strcmp(emps[i].name, emps[i + 1].name) > 0)
            {
                temp = emps[i];
                emps[i] = emps[i + 1];
                emps[i + 1] = temp;
            }
        }
    }
}

// Program 3: Sort employees by name
void f3()
{
    printf("******************************************************************************\n");
    printf("======> Using normal function call <======\n");
    printf("Q3. Sort Employees by name and display in table format.\n");
    printf("******************************************************************************\n\n");

    int size = 3;
    Employee emps[3];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        emps[i] = inputEmployeeData();
    }

    sortACToTheirNames(emps, size);

    printf("\nEmployees sorted by names:\n");
    printf("\n   Name          ID          Salary\n");
    printf("----------   ----------   ------------\n");
    for (int i = 0; i < size; i++)
    {
        displayEmployeeData(emps[i]);
    }

    printf("\n******************************************************************************\n");
    printf("                        End of Program 3rd.                                  \n");
    printf("******************************************************************************\n\n");
}

int main()
{
    f1();
    f2();
    f3();
    return 0;
}
