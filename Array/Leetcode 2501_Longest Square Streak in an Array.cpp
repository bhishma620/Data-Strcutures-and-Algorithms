class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
       unordered_set<int> s;

        for(auto n: nums) s.insert(n);
        for(auto n: nums) {  
            long long t = n;
            int c = -1;
            while(s.find(t) != s.end()){
                c++;
                s.erase(t);
                t = t*t;
            }
            ans = max(ans, c);
        }
        return ans<1?-1:ans+1;
    }
    
};
