/* Created by Alex Keeling
 Ch. 3 Homework */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string month;
    string year;
    // Getting user input of the Month and Year
    cout << "Please enter the Month you wish to track financial data for" << endl;
    cin >> month;
    cout << "Please enter the year of the chosen month you wish to track financial data for" << endl;
    cin >> year;
    cout << "You have chosen the month " << month << " and year " << year << " to collect data on. Let's get started!!" << endl;
    
    // Created variables and assigned them as floats to gather data on the cent value of money spent
    float elec, h20, gas, misc;
    
    // Beginning cycle of asking user for input on the dollar amounts spent for each of the variables
    cout << "Enter the amount spent on electricity for during " << month << " of " << year << endl;
    cin >> elec;
    cout << "Enter the amount spent on water for the " << month << " of " << year << endl;
    cin >> h20;
    cout << "Enter the amount spent on gas during the " << month << " of " << year << endl;
    cin >> gas;
    cout << "Enter the amount spent on any other exspenses that occured during " << month << " of " << year << endl;
    cin >> misc;
    
    // Outputting user input then giving a total for the month
    float tot_exp = elec + h20 + gas + misc;
    
    cout << month << " " << year << " " << "Utilities" << endl;
    cout << "Electricity" << setw(10) << "Water" << setw(8) << "Gas" << setw(15) << "Addtl/Misc" << setw(10) << "Total" << endl;
    cout << setprecision(2) << fixed;
    cout << "$" << elec << setw(11) << "$" << h20 << setw(5) << "$" << gas << setw(3) << "$" << misc;
    cout << setw(11) << "$" << tot_exp << endl;
    
    return 0;
}
