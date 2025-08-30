/* CH2Homework.cpp
C++ Programming */

// Created by Alex Keeling

#include <iostream>
using namespace std;

int main()
{
    int num1; //user inputs number
    float num2; //user inputs number
    char ranChar = 'T'; //random character
    
    //Getting num1 from user input
    cout <<"Enter an number greater than 0: "<< endl;
    cin >> num1;
    cout <<"You have entered the number: "<< num1 << endl;
    
    //Getting num2 from user input
    cout <<"Please enter a second number greater than 0, to include two numbers after the decimal (ex. 2.39)" << endl;
    cin >> num2;
    cout <<"You have entered the number: " << num2 << endl;
    
    //Calling character variable to module
    cout <<"The chosen character is: " << ranChar << endl;
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
