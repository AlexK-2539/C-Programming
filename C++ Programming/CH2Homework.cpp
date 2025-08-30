/* CH2Homework.cpp
C++ Programming */

// Created by Alex Keeling

#include <iostream>
using namespace std;

int main()
{
    int num1; //user inputs number
    float num2; //user inputs number
    char ranChar; //random character indentifier
    
    //Getting num1 from user input
    cout <<"Please select a number greater than 0, then press enter: "<< endl;
    cin >> num1;
    cout <<"You have entered the number: "<< num1 << endl;
    
    //Getting num2 from user input
    cout <<"Please select a second number greater than 0, to include two numbers after the decimal (ex. 2.39)" << endl;
    cout <<"Continue by pressing the enter key" << endl;
    cin >> num2;
    cout <<"You have entered the number: " << num2 << endl;
    
    //Calling character variable to module
    cout <<"Type a random letter and press enter: " << endl;
    cin >> ranChar;
    cout <<"You have chosen -" << ranChar << "- as your character" << endl;
    int asciiValue = ranChar;
    cout <<"The ASCII value for the chosen character is: " << asciiValue << endl;
    
    //using the bool function to say its true that it is hot outside
    bool is_hot_outside = true;
    cout <<"The weather during the day in Alabama is hot outside: " << is_hot_outside << endl;
    
    // Utilizing the const function
    const float totalNum = num1 + num2;
    cout <<"The total from the entered numbers equals: " << totalNum << endl;
    
    return 0;
}
