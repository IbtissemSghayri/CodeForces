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
        int res=0,q=0;
        for (int j=1;j<n+1;j++){
            int a,b;
            cin>>a>>b;
            if (a<=10){
                if (q<b){
                    q=b;
                    res=j;
                }
            }
        }
        cout <<res<<"\n";
    }
    return 0;
}
