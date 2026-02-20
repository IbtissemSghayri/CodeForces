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
    int res=0;
    if (n%5==0){
        res=n/5;
    }
    else if (n%4==0){
        res=n/4;
    }
    else if (n%3==0){
        res=n/3;
    }
    else if (n%2==0){
        res=n/4;
    }
    else if (n%2==0){
        res=n/2;
    }
    else if (n==1){
        res=1;
    }



    else {
    while (n >=5){
        res+=n/5;
        n=n%5;
    }
    while (n>=4){
        res+=n/4;
        n=n%4;
    }
    while (n>=3){
        res+=n/3;
        n=n%3;
    }
    while (n>=2){
        res+=n/2;
        n=n%2;
    }
    if (n==1){
        res++;
    }

    }
    cout << res<<endl;



    return 0;
}
