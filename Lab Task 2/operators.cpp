#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   char operators[5] = {'+', '-', '*', '/','='};

   string input;
   cout<<"Input: ";
   //cin>>input;
    getline(cin, input);

   int count=0;
   for(int i = 0; i<input.length(); i++)
   {
       for(int j=0; j<5; j++)
       {
            if (input[i]==operators[j])
            {
                count++;
                cout<<"Operator-"<<count<<": "<<operators[j]<<endl;
            }

       }
   }
}
