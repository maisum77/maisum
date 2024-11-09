#include <iostream>
#include <string>
using namespace std;
int main()
{
    string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int year, j = 0;
    cout << "Enter a year: ";
    cin >> year;
    cout << "       JANUARY     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "        FEBRUARY       \n";
    // use the year to find if the current year is leap year or not
    if (year % 4 == 0)
    {
        for (int i = 1; i <= 27; i++)
        {
            cout << i << "  " << day[j] << "\n";
            j++;
            {
            if (j == 7)
            {
                j = 0;
            }
            }
        }
    }
    else
    {
        for (int i = 1; i <= 28; i++)
        {
            cout << i << "  " << day[j] << "\n";
            j++;
            {
            if (j == 7)
            {
                j = 0;
            }
            }
        }
    }
    cout << "       MARCH     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       APRIL     " << endl;

    for (int i = 1; i <= 30; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       MAY     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       JUNE     " << endl;

    for (int i = 1; i <= 30; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       JULY     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       AUGUST     " << endl;

    for (int i = 1; i <= 30; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       SEPTEMBER     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       OCTOBER     " << endl;

    for (int i = 1; i <= 30; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "       NOVEMBER     " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    cout << "      DECEMBER      " << endl;

    for (int i = 1; i <= 31; i++) // loop for printing days
    {
        cout << i << "  " << day[j] << "\n";
        j++;
        {
            if (j == 7)
            {
                j = 0 ;
            }
        }
    }
    return 0;
}