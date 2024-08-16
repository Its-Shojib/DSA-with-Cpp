//Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
#define endl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
long long fact[N];


int minSegmentLength(int n, string s) {
    int minLen = INT_MAX;
    int start = -1, end = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }
    if (start == -1) {
        return 0;
    }

    minLen = end - start + 1;
    return minLen;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int result = minSegmentLength(n, s);
        cout << result << endl;
    }

    return 0;
}


