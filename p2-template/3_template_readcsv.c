#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_STRING   200

typedef struct {
    char name[20];
    char rollno[20];
    int marks;
    char grade;
} student_t;

void print_student(student_t s) {
    printf("%s (%s) got grade %c with %d marks\n", s.name, s.rollno, s.grade, s.marks);
}

void compute_grade(student_t* sptr) {
    if (sptr->marks >= 90){
        sptr->grade = 'S';
    }

    else if ((sptr->marks >= 80) && (sptr->marks < 90)){
        sptr->grade = 'A';
    }
    
    else if ((sptr->marks >= 70) && (sptr->marks < 80)){
        sptr->grade = 'B';
    }

    else if ((sptr->marks >= 60) && (sptr->marks < 70)){
        sptr->grade = 'C';
    }

    else if ((sptr->marks >= 50) && (sptr->marks < 60)){
        sptr->grade = 'D';
    }

    else if ((sptr->marks >= 40) && (sptr->marks < 50)){
        sptr->grade = 'E';
    }

    else{
        sptr->grade = 'U';
    }
}

int read_csv(char* filename, student_t s_array[MAX_STUDENTS]) {
    // Open a file for reading
    FILE *fp = fopen(filename, "r");
    int num = 0;

    char buf[MAX_STRING];
    while (fgets(buf, MAX_STRING, fp) != NULL) {
        student_t* sptr = &s_array[num];
        sscanf(buf, "%[^,],%[^,],%d", &(sptr->name), &(sptr->rollno), &(sptr->marks));
        compute_grade(sptr);
        num ++;
    }
    return num; 
}

int main() {
    student_t s_array[MAX_STUDENTS];
    
    int num = read_csv("students.csv", s_array);

    for (int i=0; i<=num; i++) {
        tmpl_print(s_array[i]);
    }
}
