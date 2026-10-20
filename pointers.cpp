#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
int main()
{
    int *ptr;
    int playerHealth{100};
    ptr = &playerHealth;
    *ptr = 90;

    cout << *ptr << endl;
    return 0;
}
int main()
{
    int playerHealth{100};
    int &ref{playerHealth};
    ref = 90;
    cout << ref << endl;
    return 0;
}

                        POINTER ARITHMETIC
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    cout << numbers << endl;The name of an array acts as pointer for
    the first element in that array.This is an IN BUILT RULE in C++

    int *ptr{numbers};

    cout << *(ptr + 1) << endl;
    cout << '\n';
    cout << *(ptr + 2) << endl;
    cout << '\n';
    cout << *(ptr + 3) << endl;
    cout << '\n';
    cout << *(ptr + 4) << endl;
    cout << '\n';
    cout << *(ptr + 5) << endl; This will give a garbage value because the array
                                 has only 5 elements

    return 0;
}

int main()
{
    int health{100};
    int *hptr{&health};
    int **hptr2{&hptr};

    cout << hptr << endl;
    cout << *hptr << endl;
    cout << '\n';
    cout << hptr2 << endl;
    cout << *hptr2 << endl;

    return 0;
}
int main()
{
    vector<string> names{"Shadrack", "Mwangi", "John", "Doe"};
    for (const auto &name : names)
    {
        cout << name << endl;
    }

    return 0;
}*/

void addTen(int &a) // calling a function by reference

{
    a += 10;
}

int main()
{
    int initialScore{10};

    addTen(initialScore);

    cout << initialScore << endl;
    return 0;
}