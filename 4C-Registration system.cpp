#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;



//Time limit exceeded on test 7









int main()
{
    int n;
    cin >> n;
    string tab[n];
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        if (find(tab,tab+i,a)!=tab+i){
            int k=0;
            string res;
            for (int j=0;j<i;j++){
                if (tab[j]==a){
                    k++;
                }
            }
            res=a+to_string(k);

            cout << res << endl;
        }
        else {
            cout << "OK"<<endl;
        }
        tab[i]=a;
    }

    return 0;
}
