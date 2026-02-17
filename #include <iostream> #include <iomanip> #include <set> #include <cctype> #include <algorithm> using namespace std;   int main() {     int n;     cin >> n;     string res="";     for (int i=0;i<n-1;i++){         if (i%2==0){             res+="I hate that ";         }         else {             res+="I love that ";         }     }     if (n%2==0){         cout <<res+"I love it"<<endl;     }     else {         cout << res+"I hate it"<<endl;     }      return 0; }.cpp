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
    string res="";
    for (int i=0;i<n-1;i++){
        if (i%2==0){
            res+="I hate that ";
        }
        else {
            res+="I love that ";
        }
    }
    if (n%2==0){
        cout <<res+"I love it"<<endl;
    }
    else {
        cout << res+"I hate it"<<endl;
    }

    return 0;
}
