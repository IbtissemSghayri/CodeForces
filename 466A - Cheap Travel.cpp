#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    if (((n/m)*b + (n%m)*a)<n*a){
        cout << (n/m)*b + (n%m)*a<<endl;
    }
    else {
        cout<<n*a<<endl;
    }

    return 0;
}
