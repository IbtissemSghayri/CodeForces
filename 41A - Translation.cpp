#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    string n,s;
    cin >>n>>s;

    int len=n.length();
    int i=0;
    bool ok=true;

    while (ok==true && i<len){
        if (n[i]==s[len-i-1]){
            i++;
        }
        else {
            break;
        }
    }
    if (i==len){
        cout <<"YES"<<endl;
    }
    else {
        cout <<"NO"<<endl;
    }




    return 0;
}
