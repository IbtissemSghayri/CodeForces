#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int n;
    cin >>n;
    int a,res=1;
    for (int i=0;i<n;i++){
        cin >> a;
        int b=sqrt(a)+1;
        res=1;
        for (int j=1;j<b;j++){
            if (a%j==0){
                res++;
            }
        }
        if (res==3){
            cout <<"YES"<<endl;
        }
        else {
            cout <<"NO"<<endl;
        }

    }



    return 0;
}
