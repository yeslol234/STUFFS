#include <iostream>
using namespace std;
int main() {
  // Variables
  int tempc, tempf; // Tempatures
  int kelvin; // Other Tempatures
  int mode; // Mode
  // Options
  cout << "Enter a mode\n" << "[1. Celcius To Farenheit]\n" << "[2. Farenheit To Celcius]\n" << "[3. Celcius To Kelvin]\n" << "[4. Farenheit To Kelvin]\n" << "[5. Kelvin To Celcius]\n" << "[6. Kelvin To Farenheit]\n";
  cin >> mode;
  switch (mode) {
    case 1:
    // Celcius To Farenheit
    cout << "Enter a value for Celcius.\n";
    cin >> tempc;
    // Using Formula 
    tempf = (tempc * 9/5) + 32;
    cout << "The converted tempature is " << tempf << "\n";
    break;
    case 2:
    // Farenheit to Celcius
    cout << "Enter a value for Farenheit.\n";
    cin >> tempf;
    // Using Formula
    tempc = (tempf - 32)/1.8;
    cout << "The converted tempature is " << tempc << "\n";
    break;
    case 3:
    // Celcius to Kelvin
    cout << "Enter a value for Celcius.\n";
    cin >> tempc;
    // Using Formula
    tempc = tempc + 273.15;
    cout << "The converted tempature is " << tempc << "\n";
    break;
    case 4:
    // Farenheit to Kelvin
    cout << "Enter a value for Farenheit.\n";
    cin >> tempf;
    // Using Formula
    tempf = (tempf - 32) * 5/9 + 273.15;
    cout << "The converted tempature is " << tempf << "\n";
    break;
    case 5:
    // Kelvin to Celcius
    cout << "Enter a value for Kelvin.\n";
    cin >> kelvin;
    // Using Formula
    kelvin = kelvin - 273.15;
    cout << "The converted tempature is " << kelvin << "\n";
    break;
    case 6:
    // Kelvin to Farenheit
    cout << "Enter a value for Kelvin.\n";
    cin >> kelvin;
    // Using Formula
    kelvin = (kelvin - 273.15) * 9/5 + 32;
    cout << "The converted tempature is " << kelvin << "\n";
    break;
    default:
    // Error Case
    cout << "Error: No such mode exists.\n";

    break;
  }
}
