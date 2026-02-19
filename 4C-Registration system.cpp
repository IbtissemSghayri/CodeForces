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
    string tab[n];
    for (int i=0;i<n;i++){
        tab[i]="";
    }

    string a;
    for (int i=0;i<n;i++){
        cin >> a;
        if (find(tab,tab+n,a)!=tab+n){
            int j=i, k=0;
            while (a.find (tab[j])!=0){
                j++;
                k++;
            }
            if (k==1){
                a+=k+'0';
            }
            else {
                a+=k-1+'0';
            }

            cout << a << endl;
        }
        else {
            cout << "OK"<<endl;
        }
        tab[i]=a;
    }

    return 0;
}
