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
    int s,mn,mx;
    cin >> s;
    mn=s;
    mx=s;
    int res=0;
    for (int i=1;i<n;i++){
        cin >>s;
        if ((min(mn,s)==s &&mn!=s)  || (max(mx,s)==s && mx!=s)){
            res++;
            mn=min(mn,s);
            mx=max(mx,s);
        }
    }

    cout << res << endl;


    return 0;
}
