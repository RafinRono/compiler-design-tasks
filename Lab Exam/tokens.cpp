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

bool isValid(string text)
    {
        if((text[0]>='a' && text[0]<='z') || (text[0]>='A' && text[0]<='Z') || (text[0]=='_') || (text[0]=='&') || (text[0]=='$'))
            return true;
        else
            return false;
    }

int main()
{
    ifstream inputFile("program.txt");

    string text, t;
    while(getline(inputFile, text))
    {
        t = t+text;
    }

    cout<<t<<endl<<endl;

    int keySize = 8;
    string keywords[keySize] = {"cout", "print", "cin", "String", "endl", "main()", "bool", "int"};
    cout<<"Keywords: ";

    for(int i=0; i<keySize; i++)
    {
        if (t.find(keywords[i]) != string::npos)
        {
           cout<<keywords[i]<<", ";
        }
    }
    cout<<endl;

    string tokens[] = {"(", ")", ";"};
    cout<<"tokens: ";

    for(int i=0; i<3; i++)
    {
        if (t.find(tokens[i]) != string::npos)
        {
           cout<<tokens[i]<<", ";
        }
    }

    integer(t);
    cout<<endl;

    cout<<"operators: ";
    string operators[6] = {"+", "-", "*", "/","=", "=="};
    for(int i=0; i<6; i++)
    {
        if (t.find(operators[i]) != string::npos)
        {
           cout<<operators[i]<<", ";
        }
    }
    cout<<endl;

    string datatype[5] = {"string", "char", "bool", "int", "float"};

    for(int i=0; i<5; i++)
    {
        if (t.find(datatype[i]) != string::npos)
        {
            int index = t.find(datatype[i]);
            if(isValid(t.substr(index+1+datatype[i].length(), 3)))
               cout<<(t.substr(index+1+datatype[i].length(), 2))<<" is valid"<<endl;
            else
                cout<<t.substr(index+1+datatype[i].length(), 2)<<" is not valid"<<endl;
        }
    }

}
