#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    vector<int> nums(n);
    long long total_sum = 0;
    long long min_odd = LLONG_MAX;
 
    for (int i = 0; i < n; ++i) 
    {
        cin >> nums[i];
        total_sum += nums[i];
        if (nums[i] % 2 != 0) 
        {
            min_odd = min(min_odd, (long long)nums[i]);
        }
    }
 
    if (total_sum % 2 == 0) 
    {
        cout << total_sum << endl;
    } 
    else 
    {
        if (min_odd != LLONG_MAX) 
        {
            cout << total_sum - min_odd << endl;
        } 
        else 
        {
            cout << 0 << endl;
        }
    }
 
    return 0;
}