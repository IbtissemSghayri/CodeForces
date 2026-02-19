#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    set <int> neuf;
    neuf.insert(a);
    neuf.insert(b);
    neuf.insert(c);
    neuf.insert(d);
    cout <<4-neuf.size()<<endl;

    return 0;
}
