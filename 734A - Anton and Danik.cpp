#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >>n;
    string s;
    cin >> s;
    int a=0,d=0;
    for (int i=0;i<n;i++){
        if (s[i]=='D'){
            d++;
        }
        else if (s[i]=='A'){
            a++;
        }
    }
    if (a<d){
        cout << "Danik"<<endl;
    }
    else if (d<a){
        cout << "Anton"<<endl;
    }
    else {
        cout << "Friendship"<<endl;

    }
    return 0;
}
