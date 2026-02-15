#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int lucky (string n,int len){
    int res=0;
    for (int i=0;i<len;i++){
        if (n[i]=='4' || n[i]=='7'){
            res++;
        }
    }
    return res;
}



int main()
{
    string n;
    cin >> n;
    int len=n.length();
    int s=lucky(n,len);
    string n1=to_string(s);
    int l=n1.length();
    if (lucky(n1,l)==l){
        cout <<"YES"<< endl;
    }
    else {
        cout << "NO"<<endl;
    }

    return 0;
}
