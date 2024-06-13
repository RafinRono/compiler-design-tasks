#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int arr[10] = {1, 43, 5, 89, 2, 33, 2, 9, 12, 33};
    float sum = 0, average;

    for (int i=0; i<10; i++)
        sum += arr[i];

    cout<<"Average of the elements: "<<(sum/10)<<endl;
}
