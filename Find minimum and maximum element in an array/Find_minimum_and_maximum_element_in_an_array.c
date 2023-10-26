//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}
// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int A[], long long int N) {
        struct pair result;

    // Initialize min and max with the first element of the array
    result.min = A[0];
    result.max = A[0];

    // Iterate through the array to find the minimum and maximum
    for (int i = 1; i < N; i++) {
        if (A[i] < result.min) {
            result.min = A[i];
        } else if (A[i] > result.max) {
            result.max = A[i];
        }
    }

    return result;

}