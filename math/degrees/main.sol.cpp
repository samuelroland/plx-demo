#include <iostream>
using namespace std;

double celsius_to_fahrenheit(double celsius) {
    return 9. / 5. * celsius + 32;
}
double fahrenheit_to_celsius(double fahrenheit) {
    return 5. / 9. * (fahrenheit - 32);
}

int main(int argc, char *argv[]) {
    cout << "25 Celsius donne " << celsius_to_fahrenheit(25) << " Fahrenheit" << endl;
    cout << "100 Fahrenheit donne " << fahrenheit_to_celsius(100) << " Celsius" << endl;
}
