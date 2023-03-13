#include "bits/stdc++.h"
using namespace std;


int main() {
    int t; cin >> t;
    while(t--)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        int l=s.size();
        string s1;
        string s2;
        for(int i=0; i<l; i++)
        {
            if(i%2==0) s1.push_back(s[i]);
            else s2.push_back(s[i]);
        }
        cout << s1 << " " << s2 << endl;
    } 
    return 0;
}