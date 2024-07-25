#include <iostream>
using namespace std;

bool isOperator(string s)
{
    string operators[] = {"+", "-", "*", "/", "="};

    for(int i=0; i<5; i++)
    {
        if (s.find(operators[i]) != string::npos)
           return true;
    }
    return false;
}

int main()
{
    string expr, last_state, new_state;
    cout<<"Input: ";
    getline(cin, expr);

    int pos = expr.find(" ");
    string word = expr.substr(0, pos);
    expr.erase(0, pos + 1);

    if(isOperator(word))
    {
        cout<<"expression has started with an operator"<<endl;
    }
    else
    {
        last_state = "number";
        bool isValid;
        int pos = 0;
        while ((pos = expr.find(" ")) != string::npos)
        {
            string word = expr.substr(0, pos);
            expr.erase(0, pos + 1);


            if(isOperator(word))
                new_state = "operator";
            else
                new_state = "number";

            if(new_state != last_state)
                isValid = true;
            else
                isValid = false;

            last_state = new_state;
        }

        if(isValid)
            cout<<"Valid Expression"<<endl;
        else
            cout<<"Invalid."<<endl;
        }

}
