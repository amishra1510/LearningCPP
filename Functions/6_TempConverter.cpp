#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    int choice;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (choice == 1) {
        cout << "Temperature in Fahrenheit: "
             << celsiusToFahrenheit(temperature) << " F\n";
    }
    else if (choice == 2) {
        cout << "Temperature in Celsius: "
             << fahrenheitToCelsius(temperature) << " C\n";
    }
    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}