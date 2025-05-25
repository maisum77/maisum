#include <iostream>
#include <string>
using namespace std;

class Course 
{
public:
    string course_title;
    string instructor;

    void setCourseDetails(string title, string instr) 
    {
        course_title = title;
        instructor = instr;
    }

    void displayCourseDetails() 
    {
        cout << "Course Title: " << course_title << endl;
        cout << "Instructor: " << instructor << endl;
    }
};

// Multilevel 
class ProgrammingCourse : public Course 
{
public:
    string language;
    string difficulty_level;

    void setProgrammingDetails(string lang, string level) 
    {
        language = lang;
        difficulty_level = level;
    }

    void displayProgrammingDetails() 
    {
        displayCourseDetails();
        cout << "Language: " << language << endl;
        cout << "Difficulty Level: " << difficulty_level << endl;
    }
};

class EnrolledProgrammingCourse : public ProgrammingCourse 
{
public:
    string student_name;
    string enrollment_date;

    int access_duration; // in days

    void setEnrollmentDetails(string student, string date, int duration) 
    {
        student_name = student;
        enrollment_date = date;
        access_duration = duration;
    }

    void displayEnrollmentDetails() 
    {
        displayProgrammingDetails();
        cout << "Student Name: " << student_name << endl;
        cout << "Enrollment Date: " << enrollment_date << endl;
        cout << "Access Duration: " << access_duration << " days" << endl;
    }
};

// Hierarchical 
class DesignCourse : public Course 
{
public:
    string software_used;
    bool has_project_work;

    void setDesignDetails(string software, bool project) 
    {
        software_used = software;
        has_project_work = project;
    }

    void displayDesignDetails()
     {
        displayCourseDetails();
        cout << "Software Used: " << software_used << endl;
        cout << "Has Project Work: " << (has_project_work ? "Yes" : "No") << endl;
    }
};

// Hybrid Inheritance
class HybridCourse : public ProgrammingCourse, public DesignCourse 
{
public:
    bool is_certified;

    void setHybridDetails(string lang, string level, string software, bool project, bool certified) {
        ProgrammingCourse::language = lang;
        ProgrammingCourse::difficulty_level = level;
        DesignCourse::software_used = software;
        DesignCourse::has_project_work = project;
        is_certified = certified;
    }

    void displayHybridDetails() 
    {
        
        cout << "--- Hybrid Course Details ---" << endl;
        cout << "Programming Language: " << ProgrammingCourse::language << endl;
        cout << "Difficulty Level: " << ProgrammingCourse::difficulty_level << endl;
        cout << "Software Used: " << DesignCourse::software_used << endl;
        //conditional statement
        cout << "Has Project Work: " << (DesignCourse::has_project_work ? "Yes" : "No") << endl;
        cout << "Certified: " << (is_certified ? "Yes" : "No") << endl;
    }
};

int main() 
{
    
    EnrolledProgrammingCourse epc;
    epc.setCourseDetails("C++ Programming", "Mr. Smith");
    epc.setProgrammingDetails("C++", "Intermediate");
    epc.setEnrollmentDetails("Alice", "2025-05-01", 90);
    epc.displayEnrollmentDetails();

    cout << endl;

    
    DesignCourse dc;
    dc.setCourseDetails("Graphic Design", "Ms. Johnson");
    dc.setDesignDetails("Photoshop", true);
    dc.displayDesignDetails();

    cout << endl;

    
    HybridCourse hc;
    hc.setHybridDetails("Python", "Advanced", "Figma", true, true);
    hc.displayHybridDetails();

    return 0;
}