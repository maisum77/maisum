#include<iostream>
#include<string>
using namespace std;
class calculator
{
    private:
    double result;
    double results[5];     //store result
    string operations[5];  //store operations
    int count;      //count to store history  
    public:
    void history(string opr ,double res)
    {
        if (count<5)
        {
            operations[count]=opr;
            results[count]=res;
            count++;
        }
    }
    calculator()
    {
        count=0;
        result=0;
    }
    // Add two numbers
    double add(double a, double b) {
        result = a + b;
        return result;
    }

    //Add three numbers
    double add(double a, double b, double c) {
        result = a + b + c;
        return result;
    }
    double subtract(double a, double b) {
        result = a - b;
        return result;
    }

    // Multiplication function
    double multiply(double a, double b ,double c) {
        result = a * b * c;
        return result;
    }
    double divide(double a, double b) {
        if (b != 0) {
            result = a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
        return result;
    }
    int power(int a, int b)
    {
        result=a^b;
        return result;
    }
    void printHistory() {
        cout << "\nCalculator History:" << endl;
        for (int i = 0; i < count; i++) {
            cout << operations[i] << " = " << results[i] << endl;
        }
    }
    void setter()
    {
        result=0;
    }

};
int main() {
    calculator calc;
    int choice;
    double num1, num2, num3;
    int addChoice;
    cout << "Simple Calculator (5 turns)" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nTurn " << (i + 1) << " - Choose an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout<<"5. Power"<<endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "For addition, choose:" << endl;
                cout << "1. Add two numbers" << endl;
                cout << "2. Add three numbers" << endl;
                cout << "Enter your choice (1-2): ";
                cin >> addChoice;
                if (addChoice == 1) {
                    cout << "Enter two numbers: ";
                    cin >> num1 >> num2;
                    cout << "Result: " << calc.add(num1, num2) << endl;
                    calc.history("addition", calc.add(num1, num2));
                } else if (addChoice == 2) {
                    cout << "Enter three numbers: ";
                    cin >> num1 >> num2 >> num3;
                    cout << "Result: " << calc.add(num1, num2, num3) << endl;
                    calc.history("addition", calc.add(num1, num2,num3));
                } else {
                    cout << "Invalid addition option." << endl;
                }
                calc.setter();
                break;
                case 2:
                    {
                    cout << "Enter two numbers for subtraction (first - second): ";
                    cin >> num1 >> num2;
                    cout << "Result: " << calc.subtract(num1, num2) << endl;
                    calc.history("subtraction",calc.subtract(num1,num2));
                    calc.setter();
                    break;
                    }      
            case 3:
                cout << "Enter three numbers for multiplication: ";
                cin >> num1 >> num2 >> num3 ;
                cout << "Result: " << calc.multiply(num1, num2,num3) << endl;
                calc.history("multiplication",calc.multiply(num1,num2,num3));
                calc.setter();
                break;
            case 4:
                cout << "Enter two numbers for division (first / second): ";
                cin >> num1 >> num2;
                cout << "Result: " << calc.divide(num1, num2) << endl;
                calc.history("division",calc.divide(num1,num2));
                calc.setter();
                break;
            case 5:
                cout<<"Enter two numbers for power : ";
                cin>>num1>>num2;
                cout<<"result: "<<calc.power(num1,num2);
                calc.history("power",calc.power(num1,num2));
                calc.setter();
                break;
            default:
                cout << "Invalid choice. Skipping turn." << endl;
                break;
        }
    }
    calc.printHistory();
    return 0;
}