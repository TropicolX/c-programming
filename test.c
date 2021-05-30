#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #include tells the preprocessor to include contents
// of another file

// function prototypes
void sayHi(char name[], int age); 
double maxCube(double num1, double num2, double num3);

// function main begins program execution
int main() {
    // Data types
    char characterName[] = "Smith";
    int characterAge = 50;
    double score = 4.4;
    const int NUM = 6;
    
    /* // Use puts() to print a newline after text 
    // puts() takes a max of two arguments
    // Use min of two arguments when using printf()
    puts("There once was a man named %s", characterName);
    puts("he was %d years old.", characterAge);
    puts("He really liked the name %s", characterName);
    puts("but he did not like being %d.", characterAge);
    return 0; */

    double gpa;
    char grade;
    char name[20];
    /* printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Enter your grade: ");
    scanf("%c", &grade);
    fgets(name, 20, stdin);
    printf("Your name is %s", name); */

    // Arrays
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    // printf("%d", luckyNumbers[0]);
    int unluckyNumbers[10];
    unluckyNumbers[1] = 20;
    char phrase[20] = "Jack on";

    // Calling function
    sayHi("Alexander Jacobs", 17);
    printf("%f", maxCube(10.0, 4.0, 5.0));

    return 0;
}

// Creating functions
void sayHi(char name[], int age) {
    printf("Hi %s, you are %d years old!\n", name, age);
}

// if statements and logical operators
// && - and
// || - or
// returns the cube of the highest number
double maxCube(double num1, double num2, double num3) {
    double result;
    if (num1 >= num2 && num1 >= num3) {
        result = pow(num1, 3);
    }
    else if (num2 >= num1 && num2 >= num3) {
        result = pow(num2, 3);
    }
    else {
        result = pow(num3, 3);
    }
    return result;
}

// Assignment
// Calculate your CGPA for Year 1
