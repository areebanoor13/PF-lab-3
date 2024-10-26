#include<iostream>
using namespace std;

int main () {
    int celcius;

    
    cout << "Enter Celsius: ";
    cin >> celcius;
    int fahrenheit = (celcius * 9 / 5) + 32;

    cout << "Fahrenheit = " << fahrenheit << endl;

    return 0;
}
