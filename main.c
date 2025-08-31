#include <stdio.h>
#include "student.h"


int main() {
    printf("%d\n", ENROLLED);
    student_t student;
    student.name = "Minseok Kim";
    student.status = true;
    printf("Student name: %s\nStudent status: %d\n", student.name, student.status);
    return 0;
}