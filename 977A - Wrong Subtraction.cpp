#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    int n,k,l=0;
    cin >>n>>k;
    while (l<k){
        if (n%10!=0){
            n=n-1;
            l++;
        }
        else if (n%10==0){
            n=n/10;
            l++;
        }
    }
    cout <<n<<endl;

    return 0;
}
