#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Base class: Employee
class Employee {
protected:
float totalSales;

public:
// Constructor to initialize total sales
Employee(float sales) {
totalSales = sales;
}

// Function to get total sales
float getSales() {
return totalSales;
}

// Function to display total sales
void showSales() {
cout << "Total Sales: " << totalSales << endl;
}
};

// Derived class: Role (Multilevel Level 1)
class Role : public Employee {
protected:
string roleName;

public:
// Constructor to initialize role and total sales
Role(float sales, string role) : Employee(sales) {
roleName = role;
}

// Function to display role
void showRole() {
cout << "Role: " << roleName << endl;
}

// Function to convert string to lowercase for easier comparison

void toLowerCase(string &str) {
transform(str.begin(), str.end(), str.begin(), ::tolower);
}

// Function to get role in lowercase for comparison
string getRole() {
toLowerCase(roleName);
return roleName;
}
};

// Derived class: SalesCommission (Multilevel Level 2)
class SalesCommission : public Role {
public:
// Constructor to initialize role and total sales
SalesCommission(float sales, string role) : Role(sales, role) {}
// Function to calculate commission based on role
float calculateCommission() {
string roleLower = getRole();
if (roleLower == "salesperson") {
return (getSales() * 10) / 100; // 10% commission for Salesperson
}
else if (roleLower == "manager") {
return (getSales() * 15) / 100; // 15% commission for Manager
}
else if (roleLower == "senior manager") {
return (getSales() * 20) / 100; // 20% commission for Senior Manager
}
else {
return 0; // No commission for other roles
}
}

// Function to display commission

void showCommission() {
float commission = calculateCommission();
cout << "Commission: " << commission << endl;
}
};

int main() {
float sales;
string role;

// Taking input from the user
cout << "Enter the Total Sales: ";
cin >> sales;
cout << "Enter the Employee Role (Salesperson/Manager/Senior Manager): ";
cin.ignore(); // To ignore any leftover newline character from previous input
getline(cin, role); // To get the whole line, including spaces if any
// Creating Employee objects for the given role
SalesCommission employee(sales, role);
// Displaying the details of the employee
cout << "\nEmployee's Details:" << endl;
employee.showRole();
employee.showSales();
employee.showCommission();

return 0;
}