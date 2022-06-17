// Password_Generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Created By Joseph Lawson

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Generator() {
    char password[] = "abcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num;
    char user_input;
    bool choice = true;

    while (choice == true) {
        cout << endl;
        cout << "Password Generator\n";
        cout << "*******************\n";
        cout << "Enter the length of password: ";
        cin >> num;
        cout << endl;
        srand(time(0));

             // Generating and printing out a random password according to specified length...
        cout << "Generated Password: ";
        for (int i = 0; i < num; i++) {
            cout << password[rand() % sizeof(password)];
        }
        cout << endl;
            // Program will continue to run until user presses 'n' to end the program...
        cout << "Press n to exit the program or press any other key to continue...";
        cin >> user_input;
        if (user_input == 'n') {
            choice = false;
        }
    }
}
int main()
{
    Generator();
    return 0;
}
