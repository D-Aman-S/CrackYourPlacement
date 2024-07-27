#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    int maxScore(vector<int> &cp, int k)
    {

        int n = cp.size();

        vector<int> pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {

            pref[i] = pref[i - 1] + cp[i - 1];
        }

        int d = n - k;

        int sum = accumulate(cp.begin(), cp.end(), 0);
        cout << sum;
        int ms = INT_MAX;

        for (int i = 0; i <= n - d; i++)
        {

            int tms = pref[d + i] - pref[i];

            ms = min(ms, tms);
        }

        return sum - ms;
    }
};
int main()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}