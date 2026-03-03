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
    int res=0;
    for (int i=0;i<q;i++){
        res=0;
        int b,j=0;
        cin>>b;
        while (tab[j]<=b && j<n){
            res++;
            j++;
        }

        cout <<res<<endl;
    }



    return 0;
}
