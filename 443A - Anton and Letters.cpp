#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <algorithm>
using namespace std;


int main()
{
    string s;
    getline (cin,s);
    set <string> jdid;
    int len =s.length();


    for (int i=0;i<len;i++){
        if ('a'<=s[i] && s[i]<='z'){
            jdid.insert(string(1,s[i])); //conversion ml char ll string de s[i] kima fl conversion lokhra wakt nzido +'0'
        }
    }

    cout <<jdid.size()<<endl;


    return 0;
}
