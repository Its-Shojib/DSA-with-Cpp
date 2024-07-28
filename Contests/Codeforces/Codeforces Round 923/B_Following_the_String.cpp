#include <iostream>
#include <string>

using namespace std;

string reconstruct_string(const int* a, int n) {
    string s(n, ' ');
    int cnt[n] = {0}; // Store character frequencies
    int prefix_sum[n] = {0}; // Store prefix sums of frequencies

    // Precompute prefix sums
    prefix_sum[0] = cnt[0];
    for (int i = 1; i < n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + cnt[i];
    }

    // Find the last unique character
    int last_uniq = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (cnt[i] == 0) {
            last_uniq = i;
            break;
        }
    }

    // If all characters are duplicates, reconstruction is impossible
    if (last_uniq == -1) {
        return "Reconstruction impossible";
    }

    char ch = 'a'; // Start with 'a'
    s[last_uniq] = ch;
    cnt[last_uniq] = 1; // Mark used character

    // Fill remaining characters, ensuring uniqueness
    for (int i = last_uniq + 1; i < n; ++i) {
        int start_j = i - a[i];
        while (prefix_sum[i] - prefix_sum[start_j] > 0 || ch == s[i - a[i]]) {
            ch = ch + 1;
            cnt[i] = 1; // Mark used character
        }
        s[i] = ch;
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string result = reconstruct_string(a, n);
        cout << result << endl;
    }

    return 0;
}
