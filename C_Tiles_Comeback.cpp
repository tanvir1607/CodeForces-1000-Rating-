#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int size, k;
        cin >> size >> k;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;
        
        int left = 0, right = size - 1, k_left = k, k_right = k;
        if (vec.front() == vec.back()) k_left = k / 2, k_right = k - k_left;
        while (left < size && k_left)
        {
            if (vec[left] == vec.front()) k_left--;
            left++;
        }
        while (right >= 0 && k_right)
        {
            if (vec[right] == vec.back()) k_right--;
            right--;
        }
        cout << (--left < ++right ? "YES" : "NO") << endl;
    }

    return 0;
}