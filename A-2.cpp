#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> myset;

    myset.insert("Swasthik");
    myset.insert("Sathvick");
    myset.insert("Koushik");
    myset.insert("Ashik");
    myset.insert("Koushik");
    myset.insert("Sathvick");

    cout << "Elements in the set are : ";

    for (auto i = myset.begin(); i != myset.end(); i++)
    {
        cout << *i << "  ";
    }
}