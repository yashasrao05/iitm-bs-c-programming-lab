/**
 * Code for template expansion.  Fill in the functions below with 
 * suitable code.
 * 
 * Feel free to declare additional functions as needed.  You should
 * also document your code with comments.
*/

// Global parameters
#define MAX_STUDENTS 100

// Declare a new type for student
typedef struct {

} student_t;

// Read in the students from a file.  Return the number of students.
int read_csv(char* filename, student_t* s_array) {

}

// Compute the grade and update the struct.  Why do you need a pointer here?
void compute_grade(student_t* sptr) {

}

// Read in the template file line by line, process and write output
void write_file(char* tmpfile, student_t s) {

}

int main()
{
    // Declare a suitable array of structs to hold the data read from CSV
    student_t s_array[MAX_STUDENTS];
    char filename[] = "";
    char tmpfile[]  = "";
    int num_students;

    num_students = read_csv(filename, s_array);

    // Loop over all students 
    for (;;) {
        compute_grade();
        write_file();
    }

}