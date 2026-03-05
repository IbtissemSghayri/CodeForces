#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin >>t;
    for  (int i=0;i<t;i++){
        int score=0;
        int res=0,score1,score2,colonne;
        for (int k=1;k<11;k++){
            string x;
            cin>>x;
            for (int p=0;p<10;p++){
            if (x[p]=='X'){
                colonne=p+1;
                score1=min(colonne,11-colonne);
                score2=min(k,11-k);
                res+=min(score1,score2);
            }
        }
        }
        cout <<res<<"\n";
    }
    return 0;
}
