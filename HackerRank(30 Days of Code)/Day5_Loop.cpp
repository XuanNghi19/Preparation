#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);
    for(int i = 1; i<=10; i++)
    {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    return 0;
}

