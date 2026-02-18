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
    int a,b,c;
    for (int i=0;i<n;i++){
        cin >> a>>b>>c ;
        if (a==b+c || b==a+c || c==b+a){
            cout << "YES" << endl;
        }
        else {
            cout << "NO"<< endl;
        }
    }


    return 0;
}
