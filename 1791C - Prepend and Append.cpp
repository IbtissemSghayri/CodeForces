#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin >>t;

    for  (int i=0;i<t;i++){
        int n;
        cin >>n;
        string a;
        cin>>a;
        bool test=true;

        while (test==true && !a.empty()){
            int b=a.length();
            if ((a[0]=='0' && a[b-1]=='1')||(a[0]=='1' && a[b-1]=='0')){
                a.erase(0,1);
                a.pop_back();
            }
            else {
                test=false;
            }
        }
        cout <<a.length()<<"\n";

    }

    return 0;
}
