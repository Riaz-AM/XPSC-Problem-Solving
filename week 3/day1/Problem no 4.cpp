long long maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        long long current_sum = 0, max_sum = 0;

        for (int i = 0; i < k; ++i) {
            current_sum += arr[i];
        }
        max_sum = current_sum;

        for (int i = k; i < n; ++i) {
            current_sum += arr[i] - arr[i - k];
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }