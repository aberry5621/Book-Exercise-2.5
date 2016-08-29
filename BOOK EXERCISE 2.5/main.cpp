//
//  main.cpp
//  BOOK EXERCISE 2.5
//
//  Created by ax on 8/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  TIP CALCULATOR
//
/*
    Program reads the subtotal and gratuity rate
    then computes the gratuity and total
    e.g.: user enters 10 and 15% gratuity rate
    program displays $1.5 as tip
*/


#include <iostream>
using namespace std;

int main() {
    
    // Program Title
    cout << "Tip Calculator\n";
    
    // data storage
    double subtotal = 0.0;
    double gratuity_rate = 0.0;
    double gratuity = 0.0;
    double total = 0.0;
    
    // I
    // read input of subtotal and gratuity rate
    cout << "Enter the subtotal and gratuity rate: ";
    cin >> subtotal >> gratuity_rate;
    
    // P
    // calculate tip: multiply subtotal by gratuity rate (divide by 100 to get %)
    gratuity = subtotal * (gratuity_rate / 100);
    total = subtotal + gratuity;
    
    // O
    // output tip
    cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;
    
    return 0;
}
