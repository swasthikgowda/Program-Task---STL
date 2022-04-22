#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector;

    for (int i = 1; i < 6; i++)
    {
        myvector.push_back(i);
    }

    // myvector.insert(myvector.begin(), 0);

    cout << "Elements in My Vector are ..!" << endl;
    for (auto it = myvector.begin(); it != myvector.end(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;


    cout << "Elements in My Vector in Reverse Order..!" << endl;
    for (auto it = myvector.rbegin(); it != myvector.rend(); it++)
    {
        cout << " " << *it;
    }
    cout << endl;
    

    auto it = myvector.begin();
    myvector.erase(it + 4);

    cout << "After Deleting the Element From 1st Position..!" << endl;
    for (auto it = myvector.rbegin(); it != myvector.rend(); it++)
    {
        cout << " " << *it;
    }

    return 0;
}