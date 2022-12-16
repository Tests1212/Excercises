#include <iostream>
#include <string>

using namespace std;

void excercise_1(void);

int main(int, char**)
{
    excercise_1();


    return 0;
}

void excercise_1(void) // reverse string
{
    string test = "w3resource";
    string tmp = test;

    for(int i = 0; i < test.length(); i++)
    {
        tmp.at(i) = test.at(test.length() - 1 - i);
    }

    cout << test << "\n";
    cout << tmp << "\n";
}