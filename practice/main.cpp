#include <iostream>

using namespace std;

string fullName(string, string);
string comment(int);
int square(int);

int main()
{
    string firstName;
    string lastName;
    int age;
    int number;

    cout << "Enter first name: "<< endl;
    cin >> firstName;
    cout << "Enter last name: "<< endl;
    cin >> lastName;

    cout << "Your full name is: " << fullName(firstName, lastName) << endl;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << comment(age) << endl;

    cout << "Enter the number: "<< endl;
    cin >> number;

    cout << "Square of the number: " << square(number) << endl;
    return 0;
}


int square(int number){
    return number*number;
}

string comment(int age){
    if(age < 27){
        return "You're a millennial";
    }
    return "You're getting old";
}
