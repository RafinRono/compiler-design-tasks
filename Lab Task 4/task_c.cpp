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
	string first_word, var;

	pos = sentence.find(" ");
	if(pos != string::npos)
        {
            first_word = sentence.substr(0, pos);
            sentence.erase(0, pos + 1);
        }

    if(isKeyword(first_word))
    {
        if(sentence[sentence.length()-2]=='}')
        {
            int new_pos = sentence.find("(");
            if(new_pos != string::npos)
                {
                    var = sentence.substr(0, new_pos);
                    sentence.erase(0, new_pos + 1);
                }

            if(isValid(var))
            {
                string new_type;
                if(sentence[0]==')')
                {
                    cout<<"Valid function definition"<<endl;
                    return 0;
                }

                sentence+=" ";
                int new_pos = sentence.find(" ");
                if(new_pos != string::npos)
                {
                    new_type = sentence.substr(0, new_pos);
                    sentence.erase(0, new_pos + 1);
                }

                if(isKeyword(new_type))
                {
                    string final_var;
                    int final_pos = sentence.find(")");
                    if(final_pos != string::npos)
                        {
                            final_var = sentence.substr(0, final_pos);
                            sentence.erase(0, final_pos + 1);
                        }

                        if(isValid(final_var))
                            cout<<"valid function definition"<<endl;
                        else
                            cout<<"valid function definition"<<endl;
                }
                else
                    cout<<"invalid argument data type"<<endl;
            }
            else
                cout<<"Invalid identifier"<<endl;
        }
            else
                cout<<"Missing \'}\' at the end."<<endl;
    }
    else
        cout<<"Incorrect data-type."<<endl;
    }

}
