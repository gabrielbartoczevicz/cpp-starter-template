#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Henlo", "from", "C/C++", "project", "template!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
}