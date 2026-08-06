int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int x : nums) result ^= x;   // a^a=0, a^0=a
    return result;
}