#include<iostream>
using namespace std;
class Student
{
 private:
 int student_id ;
 string name;
 double GPA;
 public:
 static int total_student;
 Student(int id, string name, double gpa)
 {
    student_id=id;
    this->name=name;
    GPA=gpa;
    total_student++;
 }
 Student()
 {
    total_student++;
 }
 bool operator > (Student obj)
 {
    return GPA>obj.GPA;
 }
 void display_details()
 {
    cout<<"Student_id= "<<student_id<<endl;
    cout<<"Name= "<<name<<endl;
    cout<<"GPA= "<<GPA<<endl;
 }
  friend class ReportGenerator;
};
int Student:: total_student=0;


//parent class
class Course
{
    protected:
    int courseCode;
    string title ;
    int credit;
    public:
    Course(int code, string title,int credit)
    {
        courseCode=code;
        this->title=title;
        this->credit=credit;
    }
    Course operator +(string add)
    {
        title=title+" "+add;
    }

    void enrollStudent(Student &s)
    {
        cout<<"enrolling student using student obj"<<endl;
        s.display_details();
        cout<<"enrolled in the course= "<<title<<endl;
    }
    void enrollStudent(int studentId) {
        cout << "Enrolling student using ID: " << studentId << endl;
        cout << "Enrolled in course: " << title << endl;
    }

    ~Course()
    {
        cout<<"Course "<<courseCode<<"removed"<<endl;
    }

};

class Regular_course : public Course {
public:
    Regular_course(int code, string title, int credit) 
        : Course(code, title, credit) {
        classroomNumber = 0;
    }
    int classroomNumber;
    void classroom()
    {
        cout<<"enter classroom number= "<<endl;
        cin>>classroomNumber;
    }
    
};

class Online_course : public Course {
public:
    Online_course(int code, string title, int credit) 
        : Course(code, title, credit) {
        platform = "";
    }
    string platform;
    void used_platform()
    {
        cout<<"enter platform used= "<<endl;
        cin>>platform;
    }
};

class Faculty
{
    private:
    int faculty_id;
    string department;
    public:
    Faculty(int a, string b)
    {
        faculty_id=a;
        department=b;
    }
    friend class ReportGenerator;
    
};
class ReportGenerator
{
    public:
    
    void generateReport(Student s)
    {
        cout << "\n----- Student Report -----" << endl;
            cout << "Student ID: " << s.student_id << endl;
            cout << "Name: " << s.name << endl;
            cout << "GPA: " << s.GPA << endl;
            cout << "-----------------------" << endl;
    }
};

class TeachingAssistant:public virtual Student,public virtual Faculty
{

};

class Department:public Faculty
{};

int main() {
    // Create students
    Student student1(1001, "John Doe", 3.75);
    Student student2(1002, "Jane Smith", 3.90);
    
    // Create courses
    Course programmingCourse(101, "Programming", 3);
    Regular_course mathCourse(102, "Mathematics", 3);
    Online_course webCourse(103, "Web Development", 3);
    
    //Student enrollment confirmation
    cout << "\n----- Student Enrollment -----" << endl;
    programmingCourse.enrollStudent(student1);
    webCourse.enrollStudent(1002);  
    
    //GPA comparison result
    cout << "\n----- GPA Comparison -----" << endl;
    if(student1 > student2) {
        cout << "Student1 has higher GPA" << endl;
    } else {
        cout << "Student2 has higher GPA" << endl;
    }
    
    // Report showing student's private GPA
    ReportGenerator report;
    cout << "\n----- Student Report -----" << endl;
    report.generateReport(student1);
    
    // Total students count
    cout << "\n----- Total Students -----" << endl;
    cout << "Total number of students: " << Student::total_student << endl;
    
    
    
    return 0;
}


