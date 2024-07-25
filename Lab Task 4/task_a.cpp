#include <iostream>
using namespace std;

bool isValid(string str)
{
    return ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z') || (str[0] == '$') || (str[0] == '_'));
}

bool isKeyword(string str)
{
    string keywords[] = {"int", "float", "double", "String", "string", "bool"};

    for(int i=0; i<6; i++)
    {
        if (str == keywords[i])
        {
            return true;
        }
    }
    return false ;
}

int main()
{
    for(int i = 0; i<5; i++)
    {
    cout<<endl;
    string sentence;
    cout<<"Input: ";
    getline(cin,sentence);
    sentence += " ";
	int pos = 0;
	string first_word, second_word;

	pos = sentence.find(" ");
	if(pos != string::npos)
        {
            first_word = sentence.substr(0, pos);
            sentence.erase(0, pos + 1);
        }

    second_word = sentence;

    if(isKeyword(first_word))
    {
        if(sentence[sentence.length()-2]==';')
        {
            if(isValid(second_word))
                cout<<"Valid declaration"<<endl;
            else
                cout<<"invalid identifier"<<endl;
        }
            else
                cout<<"Missing \';\' at the end."<<endl;
    }
    else
        cout<<"Incorrect data-type."<<endl;
    }
}
