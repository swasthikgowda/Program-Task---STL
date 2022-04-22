#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<string, int> mymap;

    mymap.insert({"jack", 5});
    mymap.insert({"ashk", 5});
    mymap.insert({"jack", 3});
    mymap.insert({"swas", 2});
    mymap.insert({"mark", 9});

    cout << "Displaying My Map..!" << endl;

    for (auto it = mymap.begin(); it != mymap.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }


    cout << "After Erase.! Displaying map in reverse order..!" << endl;
    
    mymap.erase("jack");

    for (auto it = mymap.rbegin(); it != mymap.rend(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}