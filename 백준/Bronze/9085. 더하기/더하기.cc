#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a,sum=0;
        cin >> a;
        for(int j=0; j<a; j++)
        {
            int s;
            cin >> s;
            sum += s;
        }
        cout << sum <<"\n";
    }
  
    return 0;
}
