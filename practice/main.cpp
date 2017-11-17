#include <iostream>

using namespace std;

string fullName(string, string);\
string comment(int);

int main()
{
    string firstName;
    string lastName;
    int age;

    cout << "Enter first name: "<< endl;
    cin >> firstName;
    cout << "Enter last name: "<< endl;
    cin >> lastName;

    cout << "Your full name is: " << fullName(firstName, lastName) << endl;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << comment(age) << endl;

    return 0;
}

string fullName(string firstName, string lastName){
    return firstName+ " " +lastName;
}

string comment(int age){
    if(age < 27){
        return "You're a millennial";
    }
    return "You're getting old";
}
