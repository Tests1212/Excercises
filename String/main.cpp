#include <iostream>
#include <string>

using namespace std;

void excercise_1(void);
void excercise_2(void);
void excercise_3(void);
void excercise_4(void);
void excercise_5(void);
void excercise_6(void);
void excercise_7(void);
void excercise_8(void);
void excercise_9(void);
void excercise_10(void);

int main(int, char**)
{
    excercise_4();

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

void excercise_2(void)
{
    string test = "W3resource";
    cout << test << endl;

    for(int i = 0; i < test.length(); i++)
    {
        if(test.at(i) == 90)
            test.at(i) = 65;

        else if(test.at(i) == 122)
            test.at(i) = 97;

        else
            test.at(i) = test.at(i)+1;
    }

    cout << test << endl;
}

void excercise_3(void)
{
    string test = "cpp string exercises";

    cout << test << endl;

    if(test.at(0) >= 97 && test.at(0) <= 122)
        test.at(0) -= 32;

    for(int i = 1; i < test.length(); i++)
    {
        if(test.at(i-1) == 32)
        {
            if(test.at(i) >= 97 && test.at(i) <= 122)
                test.at(i) -= 32;
        }
    }
    cout << test << endl;
}

void excercise_4(void)
{
    string test = "C++ is a general-purpose programming lanquage.";

    cout << test << endl;
    int counter = 0;
    int max_length = 0;
    int position = 0;

    for(int i = 0; i < test.length(); i++)
    {
        if((test.at(i) >= 65 && test.at(i) <= 90) || (test.at(i) >= 97 && test.at(i) <= 122))
        {
            counter++;
        }
        else
        {
            if(counter > max_length)
            {
                max_length = counter;
                position = i - max_length;
            }
            counter = 0;
        }
    }

    cout << "The largest word is: ";
    for(int i = 0; i < max_length; i++)
        cout << test.at(position++);

    cout << endl;
}

void excercise_5(void)
{

}

void excercise_6(void)
{

}

void excercise_7(void)
{

}

void excercise_8(void)
{

}

void excercise_9(void)
{

}

void excercise_10(void)
{

}