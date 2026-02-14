#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c=0,cap=0;
    int s,e;

    for (int i=0;i<n;i++){
        cin >>s >>e;
        c=c-s+e;
        cap=max(cap,c);
    }
    cout << cap << endl;


    return 0;
}
