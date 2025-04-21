#include <iostream>
#include <string>
using namespace std;
// Base class 1: Handles login system
class LoginSystem {
public:
 bool login() {
 string username, password;
 cout << "=== LMS Login ===\n";
 cout << "Username: ";
 cin >> username;
 cout << "Password: ";
 cin >> password;
 if (username == "student" && password == "lms123") {
 cout << "\nLogin successful. Welcome to LMS, " << username << "!\n";
 return true;
 } else {
 cout << "\nInvalid login. Access denied.\n";
 return false;
 }
 }
}; 
// Base class 2: LMS core functionalities
class CourseContent {
    public:
     void viewCourses() {
     cout << "\n[Your Courses]\n";
     cout << "- Introduction to Programming\n";
     cout << "- Data Structures\n";
     cout << "- Web Development Basics\n";
     }
     void viewAnnouncements() {
     cout << "\n[Announcements]\n";
     cout << "- Mid-term exam scheduled next week.\n";
     cout << "- New assignment uploaded for Web Development.\n";
     }
    };

    // Derived class: LMS Portal
class LMSPortal : public LoginSystem, public CourseContent {
    // Inherits everything needed
   };
   int main() {
    LMSPortal lms;
    int choice;
    // Login first
    if (!lms.login()) {
    return 0;
    }
    // After successful login, show LMS menu
    do {
    cout << "\n=== LMS Dashboard ===\n";
    cout << "1. View My Courses\n";
    cout << "2. View Announcements\n";
    cout << "3. Logout\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
        lms.viewCourses();
        break;
        case 2:
        lms.viewAnnouncements();
        break;
        case 3:
        cout << "\nLogging out. Goodbye!\n";
        break;
        default:
        cout << "\nInvalid option. Please choose again.\n";
        }
        } while (choice != 3);
        return 0;
       }