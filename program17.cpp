// c++ program that will calculate the simple interest where the rate of interest is 15% 

#include <iostream>
using namespace std;

int main() {
    double principal, time, interestRate = 15.0;
    double simpleInterest;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time period in years: ";
    cin >> time;

    simpleInterest = (principal * time * interestRate) / 100;

    cout << "The simple interest is: " << simpleInterest << endl;

    return 0;
}
