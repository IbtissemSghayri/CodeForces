#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int n,q;
    cin >>n;

    int tab[n];
    for  (int i=0;i<n;i++){
        int a;
        cin >>a;
        tab[i]=a;
    }
    sort (tab,tab+n);


    cin >>q;
    for (int i=0;i<q;i++){
        int b,j=0;
        cin>>b;
        int res=upper_bound(tab,tab+n,b)-tab;

        cout <<res<<"\n";
    }



    return 0;
}
