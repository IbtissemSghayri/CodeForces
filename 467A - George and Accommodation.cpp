#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >>n;
    int s,s1,a=0;
    for (int i=0;i<n;i++){
        cin >>s>> s1;
        if (s1-s>=2){
            a++;
        }
    }
    cout <<a<<endl;

    return 0;
}
