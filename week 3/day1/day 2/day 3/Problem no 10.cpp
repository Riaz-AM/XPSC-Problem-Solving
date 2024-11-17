int search(string pat, string txt) {
        int n = txt.size();
        int k = pat.size();
        
        if (k > n) return 0;

        vector<int> v1(26, 0), v2(26, 0);

        for (char c : pat) v1[c - 'a']++;

        int count = 0;

        for (int i = 0; i < n; i++) {
            v2[txt[i] - 'a']++;
            if (i >= k) {
                v2[txt[i - k] - 'a']--;
            }
            if (v2 == v1) {
                count++;
            }
        }

        return count;
    }