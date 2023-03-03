// Write a program that given integers h and m such that 0 ≤ h < 24 and 0 ≤ m < 60 
// representing the expected train time arrival and a non negative integer d representing a delay in minutes, 
// prints the updated arrival time in the format “HH:MM”

#include<iostream>
using namespace std;

int main(){
    int hours, minutes, delay; // 0 ≤ h < 24, 0 ≤ minutes < 60 an delay d ≥ 0
    cin >> hours >> minutes >> delay;

    // Add the delay to the minutes.
    minutes += delay;
    // Convert hours to valid format “HH:MM”.
    hours += minutes/60;
    hours %= 24;
    minutes %= 60;   
  
    cout << hours/10 << hours%10 << ':' << minutes/10 << minutes%10 << endl;
}