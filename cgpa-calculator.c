#include <stdio.h>
#include <stdlib.h>

double getGradePoint(int score);
double getCGPA(double tCredits, int tUnits);

int main () {
    int noOfCourses;
    int courseUnit;
    int courseScore;
    // char courseGrade;
    double courseGradePoint;
    double courseCredit;
    double totalCredits;
    int totalUnits = 0;
    printf("%s", "Enter total number of courses: ");
    scanf("%d", &noOfCourses);
    // int index = 0;
    // char courseCode[7];
    for (unsigned int counter = 1; counter <= noOfCourses; ++counter) {
        puts("----------------------------");
        // printf("Enter Course %u code: ", counter);
        // scanf("%s", courseCode);
        printf("Enter Course %u units: ", counter);
        scanf("%d", &courseUnit);
        totalUnits += courseUnit;
        printf("Enter Course %u score: ", counter);
        scanf("%d", &courseScore);
        courseGradePoint = getGradePoint(courseScore);
        courseCredit = courseGradePoint * courseUnit;
        totalCredits += courseCredit;
    }

    // Course code | Course grade | Course Unit
    // -------------------------------------------
    // FSC113      |      A       |     3    
    double CGPA = getCGPA(totalCredits, totalUnits);
    puts("----------------------------");
    printf("Your CGPA is: %f", CGPA);

    return 0;
}


double getGradePoint(int score) {
    double gradePoint;
    if (score >= 70 && score <= 100) {
        gradePoint = 5.0;
    }
    else if (score >= 60 && score <= 69) {
        gradePoint = 4.0;
    }
    else if (score >= 50 && score <= 59) {
        gradePoint = 3.0;
    }
    else if (score >= 45 && score <= 49) {
        gradePoint = 2.0;
    }
    else if (score >= 40 && score <= 44) {
        gradePoint = 1.0;
    }
    else if (score >= 0 && score <= 39) {
        gradePoint = 0.0;
    }
    return gradePoint;
}

double getCGPA(double tCredits, int tUnits) {
    double result = tCredits / tUnits;
    return result;
}
