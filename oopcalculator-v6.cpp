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
        result=a;
        for (int i=1; i<b; i++){
            result *= a;
        }
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
    friend class Relation;

};
class Relation
{
    public:
    int result;
    void storehistory(calculator &calc , string operation , double result)
    {
        if (calc.count<5)
        {
            calc.operations[calc.count]=operation;
            calc.results[calc.count]=result;
            calc.count++;
        }
    }
    
        void greater(int a, int b) 
        {
            if(a>b)
            {
                cout<<a<<" is greater then "<<b<<endl;
                result=a;
            }
            else 
            {
                cout<<b<<" is greater then "<<a<<endl;
                result=b;
            }
        }
        void less(int a, int b)
        {
            if (a<b)
            {
                cout<<a<<" is less then "<<b<<endl;
                result=a;
            }
            else 
            {
                cout<<b<<" is less then "<<a<<endl;
                result=b;
            }
        }
        void equal(int a, int b)
        {
            if(a==b)
            {
                cout<<a<<" is equal to "<<b<<endl;
                result=a;
            }
            
        }
        void notequal (int a, int b)
        {
            if (a!=b)
            {
                cout<<a<<" is not equal to "<<b<<endl;
                result=a;
            }
        }
        void greater_equal(int a, int b)
        {
            if(a>=b)
            {
                cout<<a<<" is greater then equal to "<<b<<endl;
                result=a;
            }
            else 
            {
                cout<<b<<" is greater then equal to "<<a<<endl;
                result=b;
            }
        }
        void lesser_equal(int a, int b)
        {
            if (a<=b)
            {
                cout<<a<<" is less then equal to "<<b<<endl;
                result=a;
            }
            else 
            {
                cout<<b<<" is less then equal to "<<a<<endl;
                result=b;
            }
        }

};
int main() {
    calculator calc;
    Relation obj;
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
        cout<<"6. relational operation"<<endl;
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
            case 6:
            {
                int relChoice;
                cout << "\nChoose a relation operation:" << endl;
                cout << "1. Greater than" << endl;
                cout << "2. Less than" << endl;
                cout << "3. Equal to" << endl;
                cout << "4. Not equal to" << endl;
                cout << "5. Greater than or equal to" << endl;
                cout << "6. Less than or equal to" << endl;
                cout << "Enter your choice (1-6): ";
                cin >> relChoice;
                cout<<"enter two numbers to compare="<<endl;
                cin>>num1>>num2;
                switch (relChoice)
                {
                    case 1:
                    {
                        obj.greater(num1,num2);
                        obj.storehistory(calc ,"greater",obj.result);
                        break;
                    }
                    case 2:
                    {
                        obj.less(num1,num2);
                        obj.storehistory(calc,"lesser",obj.result);
                        break;
                    }
                    case 3:
                    {
                        obj.equal(num1,num2);
                        obj.storehistory(calc,"equal",obj.result);
                        break;
                    }
                    case 4:
                    {
                        obj.notequal(num1,num2);
                        obj.storehistory(calc,"not-equal",obj.result);
                        break;
                    }
                    case 5:
                    {
                        obj.greater_equal(num1,num2);
                        obj.storehistory(calc,"greater-then-equal",obj.result);
                        break;
                    }
                    case 6:
                    {
                        obj.lesser_equal(num1,num2);
                        obj.storehistory(calc,"less-then-equal",obj.result);
                        break;    
                    }
                    default:
                    {
                        cout<<"invalid input"<<endl;
                    }

                }

            }
            default:
                cout << "Invalid choice. Skipping turn." << endl;
                break;
        }
    }
    calc.printHistory();
    return 0;
}