class Student {
    const int m_grade;
    static int nofStudents;
    static int maxGrade;
    public:
    Student(int grade = maxGrade):m_grade(grade) {
        if (grade > maxGrade) maxGrade = grade;
        nofStudents++;
        }

    static int get_nofStudent() {return nofStudents;}
    static int get_max_grade() {return maxGrade;}
};  

