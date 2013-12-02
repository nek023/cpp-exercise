#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

bool is_even(int n)
{
    return (n % 2 == 0);
}

int main(int argc, char *argv[])
{
    // Create vector and push 1..10 into it
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i + 1);

    // Create list and copy even numbers from vector
    list<int> l(v.size());
    list<int>::iterator it = copy_if(v.begin(), v.end(), l.begin(), is_even);
    l.resize(distance(l.begin(), it));

    // Show sequence of list
    cout << "List contains:";
    it = l.begin();
    while (it != l.end()) { cout << " " << *it; ++it; }
    cout << endl;

    return 0;
}

