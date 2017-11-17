#include <iostream>

using namespace std;

int square(int);

int main()
{
    int number;
    cout << "Enter the number: "<< endl;
    cin >> number;

    cout << "Square of the number: " << square(number) << endl;
    return 0;
}

int square(int number){
    return number*number;
}
