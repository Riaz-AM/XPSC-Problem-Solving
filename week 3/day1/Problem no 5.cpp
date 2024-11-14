 vector<int> firstNegativeInteger(vector<int>& arr, int k) {
        vector<int> result;
        deque<int> negatives;
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            if (arr[i] < 0) {
                negatives.push_back(i);
            }

            if (i >= k - 1) {
                if (!negatives.empty() && negatives.front() < i - k + 1) {
                    negatives.pop_front();
                }
                result.push_back(negatives.empty() ? 0 : arr[negatives.front()]);
            }
        }

        return result;
    }