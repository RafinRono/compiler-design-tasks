#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string firstName, lastName, fullName;

    cout<<"Enter first name: ";
    cin>>firstName;
    cout<<"Enter last name: ";
    cin>>lastName;

    //fullName = firstName + " " + lastName;

    cout<<"Full name: "<<(firstName + " " + lastName)<<endl;
}
