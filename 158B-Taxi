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
    int un=0 , deux=0, trois=0,quatre=0;
    for (int i=0;i<n;i++){
        int c;
        cin >> c;
        if (c==1){
            un++;
        }
        if (c==2){
            deux++;
        }
        if (c==3){
            trois++;
        }
        if (c==4){
            quatre++;
        }
    }

    int res=quatre+trois;
    int nb1=0;
    if (trois<un){
        nb1=un-trois;
    }

    if (deux%2==0){
        res+=deux/2;
        if (nb1%4 ==0){
            res+=nb1/4;
        }
        else {
            res+=nb1/4 + 1;
        }
    }
    else {
        res+=deux/2 +1;
        nb1=nb1-2;
        if (nb1>0){
            res+=(nb1+3)/4;
        }
    }
    
    cout <<res << endl;


    return 0;
}
