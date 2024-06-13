#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   char operators[5] = {'+', '-', '*', '/','='};
    while(1){
    string input;
   cout<<"Input: ";
   //cin.ignore(1);
   getline(cin,input);

   if(input[0]=='/' && input[1]=='/')
    cout<<"This is a single line comment"<<endl;

   else if(input[0]=='/' && input[1]=='*' && input[input.length()-2] == '*' && input[input.length()-1] == '/' && input[2]!='/')
    cout<<"This is a multi line comment"<<endl;

   else
    cout<<"This is not a comment"<<endl;
    cout<<endl;
     }
}
