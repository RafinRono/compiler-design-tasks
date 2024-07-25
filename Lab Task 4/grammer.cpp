#include<iostream>
using namespace std;

bool checkSentence(string str)
{
    int len = str.length();

    if (str[0] < 'A' || str[0] > 'Z')
		return false;

    if (str[len - 1] != '.')
		return false;

    int prev_state = 0, curr_state = 0, index = 1;

    while(str[index])
    {
        if (str[index] >= 'A' && str[index] <= 'Z')
			curr_state = 0;

        else if (str[index] == ' ')
			curr_state = 1;

        else if (str[index] >= 'a' && str[index] <= 'z')
			curr_state = 2;

        else if (str[index] == '.')
			curr_state = 3;

        if (prev_state == curr_state && curr_state != 2)
			return false;

		if (prev_state == 2 && curr_state == 0)
			return false;

        if (curr_state == 3 && prev_state != 1)
			return (str[index + 1] == '\0');

		index++;
        prev_state = curr_state;
    }
    return false;
}

int main()
{
    string str[] = { "I aim to study machine learning.",
					"I am a student.",
					"My Name is Rafin",
					"I am not much of a fan of movies/dramas.",
					"Greetings. have a nice day.",
					"I like video games.",
					" A test sentence."};

    int str_size = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < str_size; i++)
        checkSentence(str[i])? cout<<"\""<<str[i]<<"\""<<" is correct \n" : cout<<"\""<<str[i]<<"\""<<" is incorrect \n";
}
