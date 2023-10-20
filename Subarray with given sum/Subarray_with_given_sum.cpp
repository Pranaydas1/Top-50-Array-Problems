//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here

        vector<int> result;
        int left = 0;
        int right = 0;
        int sum = 0;

        // If the target sum is zero, we can't create a subarray, so return -1
        if (s == 0)
        {
            result.push_back(-1);
            return result;
        }
        else
        {
            while (right < n)
            {
                sum += arr[right];

                while (sum > s)
                {
                    sum -= arr[left];
                    left++;
                }

                if (sum == s)
                {
                    result.push_back(left + 1);
                    result.push_back(right + 1);

                    return result;
                }
                right++;
            }
        }

        result.push_back(-1);
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends