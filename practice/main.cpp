#include <iostream>

using namespace std;

string fullName(string, string);

int main()
{
    string firstName;
    string lastName;

    cout << "Enter first name: "<< endl;
    cin >> firstName;
    cout << "Enter last name: "<< endl;
    cin >> lastName;

    cout << "Your full name is: " << fullName(firstName, lastName) << endl;
    return 0;
}

string fullName(string firstName, string lastName){
    return firstName+ " " +lastName;
}
