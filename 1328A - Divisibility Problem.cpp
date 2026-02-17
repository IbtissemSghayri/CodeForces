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
    int a,b;

    for (int i=0;i<n;i++){
        cin >> a;
        cin >> b;
        if (a<=b){
            cout << b-a<<endl;
        }
        else {
            if (a%b==0){
                cout << 0<<endl;
            }
            else {
            cout <<b-(a%b) <<endl;
            }

        }

    }
    return 0;
}
