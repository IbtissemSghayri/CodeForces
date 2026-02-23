#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    long long n;
    cin >>n;
    if (n%2==0){
        cout <<n/2<<endl;
    }
    else {
        cout <<(n-1)/2 -n <<endl;
    }

    return 0;
}
