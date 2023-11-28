#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_STRING   200

typedef struct {
    char name[20]; // - name: string
    char rollno[20]; // - roll number: string
    int marks; // - marks: integer
    char grade; // - grade: char
} student_t;

void print_student(student_t s) {
    // Output should look like the following:
    // Nitin C (abc123) got grade D with 50 marks

    // Fill in the correct info for the "_" values and the "..."
    printf("%s (%s) got grade %c with %d marks\n", s.name, s.rollno, s.grade, s.marks);
}

int main() {
    student_t s = { .name = "Nitin C", 
                    .rollno = "abc123",
                    .marks = 50,
                    .grade = 'D'};
    print_student(s);
}
