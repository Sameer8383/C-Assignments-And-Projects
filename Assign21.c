#include <stdio.h>

/* Assignment:-21 Function */

//***************************************************************************************
// Q1 - Area of Circle (Normal & Function Pointer)
//***************************************************************************************

float circle(int *radius) {  
    return 3.14 * (*radius) * (*radius);   //** dereference pointer  
}  
/** (Using Normal Function Call) **/
void f1() {  
    printf("Q1. Write a function to calculate the area of a circle. (TSRS)\n\n");  
    printf("Solution:-\n\n");  

    int radius = 8;  
    int *ptr = &radius;  

    if (ptr != NULL) {  
        float result = circle(ptr);  //*** pass pointer  
        printf("Area of a circle is: %.2f cm^2\n", result);  
        printf("\n\n\n");  
    }  

    return;  
}  
/** (Using Function Pointer) **/
void f1_() {  
    printf("Q1.1 ----> Write a function to calculate the area of a circle using FUNCTION POINTER.\n\n");  
    printf("Solution:-\n\n");  

    int radius = 8;  

    //*** Declare a function pointer  
    float (*fptr)(int *) = &circle;  

    //*** Call Circle() using function pointer  
    float area = (*fptr)(&radius);  

    printf("Area of circle is: %.2f cm^2\n", area);  
    printf("\n\n\n");  
}  

//***************************************************************************************
// Q2 - Simple Interest (Normal & Function Pointer)
//***************************************************************************************

float SI(float *p_amount, float *rate, float *time) {  
    return (*p_amount * *rate * *time) / 100.0;  
}  
/** (Using Normal Function Call) **/
void f2() {  
    printf("Q2. Write a function to calculate simple interest. (TSRS)\n\n");  
    printf("Solution:-\n\n");  

    float p_amount = 1000, rate = 4, time = 2;  

    float *p  = &p_amount;  
    float *p1 = &rate;  
    float *p2 = &time;  

    float result = SI(p, p1, p2);  

    printf("Simple Interest = %.f%%\n", result);  
    printf("\n\n\n");  
} 
/** (Using Function Pointer) **/
void f2_() {  
    printf("Q2.1 ----> Write a function to calculate simple interest using FUNCTION POINTER. (TSRS)\n\n");  
    printf("Solution:-\n\n");  

    float p_amount = 1000, rate = 4, time = 2;  

    //*** Declare function pointer  
    float (*ptr)(float *, float *, float *) = &SI;

    float S_Interest = (*ptr)(&p_amount, &rate, &time);  

    printf("Simple Interest = %.f%%\n", S_Interest);  
    printf("\n\n\n");  
}  

//***************************************************************************************
// Q3 - Even or Odd (Normal & Function Pointer)
//***************************************************************************************

int EvenOrOdd(int *num) {  
    if (*num % 2 == 0)  
        return 1;  
    else  
        return 0;  
}  
/** (Using Normal Function Call) **/
void f3() {  
    printf("Q3. (Using Normal Function Call)\n");  
    printf("Write a function to check whether a given number is even or odd.\n");  
    printf("Return 1 if even and 0 if odd. (TSRS)\n\n");  
    printf("Solution:-\n\n");  

    int a = 12;  

    int *ptr = &a;  
    int result = EvenOrOdd(ptr);  

    if (result == 1)  
        printf("%d is even\n", a);  
    else  
        printf("%d is odd\n", a);  

    printf("\n\n\n");  
    return;  
}  
/** Using Function Pointer **/
void f3_() {  
    printf("Q3.1 (Using Function Pointer)\n");  
    printf("Write a function to check whether a given number is even or odd using FUNCTION POINTER.\n");  
    printf("Return 1 if even and 0 if odd. (TSRS)\n\n");  
    printf("Solution:-\n\n");  

    int num = 7;  

    int *ptr = &num;  
    int (*fptr)(int *) = &EvenOrOdd;  
    int result = fptr(ptr);  //*** call function pointer with pointer argument and store result

    if (result == 1)  
        printf("%d is an Even number.\n", num);  
    else  
        printf("%d is an Odd number.\n", num);  

    printf("\n\n\n");  
    return;  
} 

//***************************************************************************************
// Q4 - N Natural Numbers (Normal & Function Pointer)
//***************************************************************************************

void NaturalNumber(int *n) {  
    int i;  
    for(i = 1; i <= *n; i++) {  
        printf("%d\n", i);  
    }  
}  
//*** (Using Normal Function Call) ***/
void f4() {  
    printf("Q4. (Using Normal Function Call)\n");  
    printf("Write a function to print N natural numbers. (TSRN)\n\n");  
    printf("Solution:-\n\n");  

    int num = 10;  
    int *p = &num;  

    NaturalNumber(p);  
}
//*** (Using Function Pointer) ***/
void f4_() {  
    printf("Q4.1 (Using Function Pointer)\n");  
    printf("Write a function to print N natural numbers using FUNCTION POINTER. (TSRN)\n\n");  
    printf("Solution:-\n\n");  

    int num = 15;  
    int *p = &num;  

    void (*fptr)(int *) = &NaturalNumber;  
    fptr(p);  //*** call function pointer  
}  
void OddNaturalNumber(int *n) {  
  int i;  
  for(i = 1; i <= *n; i++) {  
      printf("%d\n", i*2-1);  
  }  
}  

void f5() {  
  printf("Q5. (Using Normal Function Call)\n");  
  printf("Write a function to print N Odd natural numbers. (TSRN)\n\n");  
  printf("Solution:-\n\n");  

  int num = 10;  
  int *p = &num;  

  NaturalNumber(p);  
}  
void f5_() {  
  printf("Q5.1 (Using Function Pointer)\n");  
  printf("Write a function to print N Odd natural numbers using FUNCTION POINTER. (TSRN)\n\n");  
  printf("Solution:-\n\n");  

  int num = 15;  
  int *p = &num;  

  void (*fptr)(int *) = &OddNaturalNumber;  
  fptr(p);  //*** call function pointer  
}  

//***************************************************************************************
// MAIN FUNCTION
//***************************************************************************************

int main() {  
    f1();  
    f1_();  
    f2();  
    f2_();  
    f3();  
    f3_();  
    f4();  
    f4_(); 
    f5();
    f5_();
    return 0;  
}