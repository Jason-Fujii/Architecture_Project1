//
// Created by Jason Fujii.
//1/7/2020
//Project 1
//CMPSCI-122 Assembly/Architecture

#include <iostream>
using namespace std;

#include "Project1.h"
#include <cmath>
#include <iomanip>

//Example 2.6
int first()
{
    const int bonus = 10;
    int num1, num2, div, remain;
    cout << "Please enter the first number (Any number)" << endl;
    cin >> num1;
    cout << "Please enter the second number (A base number: 0-9)" << endl;
    cin >> num2;

    while(num1 > 0)
    {
        cout << num1%num2 << endl;
        num1 /= num2;
    }

    return 0;
}//end first
//DONE

//Example 2.10
int second()
{
    const int base2 = 2;
    const int base3 = 3;
    const int base8 = 8;
    const int base10 = 10;
    const int base16 = 16;
    int num;
    cout << "Enter one of these numbers:" << endl;
    cout << "2, 3, 8, 10, 16" << endl;
    cin >> num;

    if(num == base2)
        cout << pow(base2,0) << " " << pow(base2,1) << " " << pow(base2,2)
        << " " << pow(base2,3) << " "<< endl;
    else if(num == base3)
        cout << pow(base3,0) << " " << pow(base3,1) << " " << pow(base3,2)
        << " " << pow(base3,3) << " "<< endl;
    else if (num == base8)
        cout << pow(base8,0) << " " << pow(base8,1) << " " << pow(base8,2)
        << " " << pow(base8,3) << " " << endl;
    else if(num == base10)
        cout << pow(base10,0) << " " << pow(base10,1) << " " << pow(base10,2)
        << " " << pow(base10,3) << " " << endl;
    else if(num == base16)
        cout << pow(base16,0) << " " << pow(base16,1) << " " << pow(base16,2)
        << " "  << pow(base16,3) << " " << endl;
    else
        cout << "That is not a valid input." << endl;
    return 0;
}//end second
//DONE

//Example 2.12
int third()
{
    int guess;
    cout << "Pick a number from 0-15." << endl;
    cin >> guess;

    switch(guess)
    {
        case 0: cout << "0 in decimal is " << hex  << uppercase << 0 << " in hexadecimal" << endl; break;
        case 1: cout << "1 in decimal is " << hex << uppercase << 1 << " in hexadecimal" << endl; break;
        case 2: cout << "2 in decimal is " << hex << uppercase << 2 << " in hexadecimal" << endl; break;
        case 3: cout << "3 in decimal is " << hex << uppercase << 3 << " in hexadecimal" << endl; break;
        case 4: cout << "4 in decimal is " << hex << uppercase << 4 << " in hexadecimal" << endl; break;
        case 5: cout << "5 in decimal is " << hex << uppercase << 5 << " in hexadecimal" << endl; break;
        case 6: cout << "6 in decimal is " << hex << uppercase << 6 << " in hexadecimal" << endl; break;
        case 7: cout << "7 in decimal is " << hex << uppercase << 7 << " in hexadecimal" << endl; break;
        case 8: cout << "8 in decimal is " << hex << uppercase << 8 << " in hexadecimal" << endl; break;
        case 9: cout << "9 in decimal is " << hex << uppercase << 9 << " in hexadecimal" << endl; break;
        case 10: cout << "10 in decimal is " << hex << uppercase << 10 << " in hexadecimal" << endl; break;
        case 11: cout << "11 in decimal is " << hex << uppercase << 11 << " in hexadecimal" << endl; break;
        case 12: cout << "12 in decimal is " << hex << uppercase << 12 << " in hexadecimal" << endl; break;
        case 13: cout << "13 in decimal is " << hex << uppercase << 13 << " in hexadecimal" << endl; break;
        case 14: cout << "14 in decimal is " << hex << uppercase << 14 << " in hexadecimal" << endl; break;
        case 15: cout << "15 in decimal is " << hex << uppercase << 15 << " in hexadecimal" << endl; break;
        default: cout << "This is not a valid entry." << endl;
    }
    return 0;
}//end third
//DONE

//2.13
int fourth()
{
    int power2 = 8;
    int result = 0;
    char num;
    cout << "Enter a 4 digit number" << endl;
    cout << "The number can only consist of 0's and 1's" << endl;
    cout << "Following the number should be a \"*\"" << endl;
    cin >> num;
    while(num != '*')
    {
        if(num == '1')
            result += power2;
        power2 /= 2;
        cin >> num;
    }
    cout << "That's " << result << " in decimal" << endl;
    return 0;
}//end fourth
//DONE

