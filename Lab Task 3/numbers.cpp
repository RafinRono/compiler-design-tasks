#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

void integer(string t)
{
    string integers[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    for(int i=0; i<10; i++)
    {
        if (t.find(integers[i]) != string::npos)
        {
           cout<<integers[i]<<", ";
        }
    }
}

int main()
{
    ifstream inputFile("program1.txt");

    string text, t;
    while(getline(inputFile, text))
    {
        t = t+text;
    }

    cout<<t<<endl<<endl;

    cout<<"integers: ";
    integer(t);
    cout<<endl;

    string delimiters[5] = {"(", ")", ";", ".", ","};
    cout<<"delimiters: ";

    for(int i=0; i<5; i++)
    {
        if (t.find(delimiters[i]) != string::npos)
        {
           cout<<delimiters[i]<<", ";
        }
    }
    cout<<endl;

    cout<<"Real numbers: ";
    integer(t);
    for(int i=0; i<1; i++)
    {
        if (t.find(".") != string::npos)
        {
            int index = t.find(".") != string::npos;
            cout<<t.substr(index-1, 5);
        }
    }

    cout<<endl;
}
