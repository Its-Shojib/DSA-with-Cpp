// Its_Shojib
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 100005
#define ll long long
// #define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
long long fact[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, index = -1;
    int array[10] = {10, 20, 12, 33, 43, 15, 6, 70, 78, 59};
    sort(array, array + 10);
    int size = sizeof(array) / sizeof(array[0]);
    int low = 0;
    int high = size - 1;
    cout << "Enter The number:" << endl;
    cin >> x;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
        {
            index = mid;
            break;
        }
        else if (array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (index == -1)
        cout << "Number not found in array." << endl;
    else
        cout << "Number found at index: " << index << endl;

    return 0;
}