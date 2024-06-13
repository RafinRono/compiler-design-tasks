#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream File("students.txt", ios::app);

    int count;
    cout<<"Enter student count: ";
    cin>>count;

    for(int i = 0; i<count; i++)
    {
        string name;
        float marks;

        cout<<"Enter name of student-"<<i+1<<": ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter mark of "<<name<<": ";
        cin>>marks;
        File << name<<" - "<<marks<<endl;
    }

    cout<<"Data inserted successfully to 'student.txt'"<<endl<<endl;

    ifstream inputFile("students.txt");

    string text;
    while(getline(inputFile, text))
        cout<<text<<endl;
}
