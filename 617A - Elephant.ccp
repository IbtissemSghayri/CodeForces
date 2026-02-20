#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    int n,res=0;
    cin >> n;
    res=n/5;
    n=n%5;
    res+=n/4;
    n=n%4;
    res+=n/3;
    n=n%3;
    res+=n/2;
    n=n%2;


    if (n>0){
        res++;
    }

    cout << res<<endl;



    return 0;
}
