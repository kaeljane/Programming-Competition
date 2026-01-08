int subarraysDivByK(vector<int>& nums, int k) {
    long long qt = 0;
    vector<long long> pref(nums.size());
    partial_sum(nums.begin(), nums.end(), pref.begin());
    unordered_map<long long, long long> freq;
    freq[0] = 1;
    for (long long i=0;i<nums.size();i++) {
        long long r = pref[i] % k;
        if (r<0) r+=k;

        qt += freq[r];
        freq[r]++;
    }
    return qt;
}