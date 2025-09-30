#include <iostream>

using namespace std;

// If the number is positive, add the number to the variable positivesum; else, add
// the number to the variable negativesum.

int main()
{
    double num1;
    double positivesum, negativesum = 0;

    cout << "Input a number: " << endl;
    cin >> num1;
    if(num1 != 0)
    {
        if(num1 > 0)
        {
            positivesum += num1;
        }
        else if(num1 < 0)
        {
            negativesum += num1;
        }
        else
        {
            cout << "You're all done!" << endl;
        }
    }
    cout << "positivesum is: " << positivesum << " and negativesum is " << 
    negativesum << endl;
}