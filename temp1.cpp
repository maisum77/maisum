#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string name;
    string email;

public:
    // Constructor
    User(string userName = "", string userEmail = "") {
        name = userName;
        email = userEmail;
    }

    // Method to display user details
    void displayDetails() {
        cout << "\n----- User Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        
    }

    // Getters and setters
    string getName() { return name; }
    string getEmail() { return email; }
    void setName(string userName)
     { 
        name = userName; 
    }
    void setEmail(string userEmail)
     {
         email = userEmail; 
    }
};  // End of User class

class CourseAccess {
private:
    string enrolledCourses[5];  // Array to store enrolled courses
    int courseCount;

public:
    // Constructor
    CourseAccess() { courseCount=0;}

    // Method to display available courses
    void displayAvailableCourses() {
        cout << "\n----- Available Courses -----" << endl;
        cout << "1. Introduction to Programming" << endl;
        cout << "2. Data Structures" << endl;
        cout << "3. Web Development" << endl;
        cout << "4. Database Management" << endl;
        cout << "5. Software Engineering" << endl;
        cout << "---------------------------" << endl;
    }

    // Method to enroll in a course
    bool enrollCourse(int courseNumber) {
        if (courseCount >= 5) {
            cout << "Maximum course limit reached!" << endl;
            return false;
        }

        string courseName;
        switch(courseNumber) {
            case 1: courseName = "Introduction to Programming"; break;
            case 2: courseName = "Data Structures"; break;
            case 3: courseName = "Web Development"; break;
            case 4: courseName = "Database Management"; break;
            case 5: courseName = "Software Engineering"; break;
            default:
                cout << "Invalid course number!" << endl;
                return false;
        }

        enrolledCourses[courseCount++] = courseName;
        cout << "Successfully enrolled in: " << courseName << endl;
        return true;
    }

    // Method to display enrolled courses
    void displayEnrolledCourses() {
        

        cout << "\n----- Enrolled Courses -----" << endl;
        for (int i = 0; i < courseCount; i++) {
            cout << (i + 1) << ". " << enrolledCourses[i] << endl;
        }
    
    }
};

class StudentInstructor : public User, public CourseAccess {
private:
    bool isInstructor;
    string uploadedCourses[5];
    int uploadCount;

public:
    // Constructor
    StudentInstructor(string name, string email, bool instructor) 
        : User(name, email), CourseAccess() {
        isInstructor = instructor;
        uploadCount = 0;
    }

    // Method to check role
    bool checkRole() {
        return isInstructor;
    }

    // Student method: Enroll in course with role verification
    bool enrollInCourse(int courseNumber) {
        if (isInstructor) {
            cout << "Instructors cannot enroll in courses!" << endl;
            return false;
        }
        return enrollCourse(courseNumber);
    }

    // Instructor method: Upload new course
    bool uploadCourse(string courseName) {
        if (!isInstructor) {
            cout << "Students cannot upload courses!" << endl;
            return false;
        }
        if (uploadCount >= 5) {
            cout << "Maximum course upload limit reached!" << endl;
            return false;
        }
        uploadedCourses[uploadCount++] = courseName;
        cout << "Course uploaded successfully: " << courseName << endl;
        return true;
    }

    // Instructor method: Manage courses
    void manageCourses() {
        if (!isInstructor) {
            cout << "Access denied: Only instructors can manage courses!" << endl;
            return;
        }
        cout << "\n----- Uploaded Courses -----" << endl;
        if (uploadCount == 0) {
            cout << "No courses uploaded yet." << endl;
            return;
        }
        for (int i = 0; i < uploadCount; i++) {
            cout << (i + 1) << ". " << uploadedCourses[i] << endl;
        }
        cout << "--------------------------" << endl;
    }
};