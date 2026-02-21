#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;

//accepted at first try <3 pure joy

int main()
{
    int n,b,a ;
    cin >> n;
    cin >>a;
    int j=1,res=1;
    for (int i=0;i<n-1;i++){
        cin >>b;
        if (a<=b){
            j++;
            res=max(res,j);
        }
        else {
            j=1;
        }
        a=b;
    }

    cout <<res<<endl;


    return 0;
}
