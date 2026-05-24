#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) 
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int oprt = 0;
        int covrg = 0;
        for(int i=0; i<n; i++) 
        {
            if(covrg > 0) 
            {
                covrg--;
            } 
            else if(s[i] == 'B') 
            {
                oprt++;
                covrg = k-1;
            }
        }
        cout <<  oprt << endl;
    }
    return 0;
}