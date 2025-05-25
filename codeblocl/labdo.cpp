#include <iostream>
#include <string>
using namespace std;

class Doctor {
    string name;
public:
    Doctor(string n) : name(n) {}
    void doRound() {
        cout << "Dr. " << name << " doing rounds\n";
    }
    string getName() { return name; }
};

class Ward {
    string wardName;
    Doctor* physician;  // Association (temporary use)
public:
    Ward(string n) : wardName(n), physician(nullptr) {}

    void useDoctor(Doctor* doc) {  // Association
        physician = doc;
        cout << wardName << " using Dr. " << doc->getName() << "\n";
        doc->doRound();
    }

    string getName() { return wardName; }
};

class Hospital {
    string hospitalName;
    Ward* department;  // Composition (Hospital owns Ward)
public:
    Hospital(string hn, string wn) : hospitalName(hn) {
        department = new Ward(wn);  // Composition
    }

    ~Hospital() { delete department; }

    void display() {
        cout << hospitalName << " contains "
             << department->getName() << "\n";
    }

    Ward* getWard() { return department; }
};

int main() {
    Doctor doc1("Smith");  // Independent doctor (aggregation)
    Doctor doc2("Jones");

    Hospital h("Central Medical", "ICU");
    h.display();

    Ward* mainWard = h.getWard();
    mainWard->useDoctor(&doc1);  // Association

    Hospital h2("Downtown Clinic", "Emergency");
    Ward* emergWard = h2.getWard();
    emergWard->useDoctor(&doc1);  // Same doctor in different ward (aggregation)
    emergWard->useDoctor(&doc2);  // Different doctor
}
