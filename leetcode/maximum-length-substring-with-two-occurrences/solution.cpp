class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int>mpp;
        int left = 0;
        int len = 0;
        for(int right=0; right<n; right++){
            mpp[s[right]]++;
            while(mpp[s[right]]>2 && left<n){
                mpp[s[left]]--;
                if(mpp[s[left]]==0) mpp.erase(s[left]);
                left++;
            }
            len = max(len, right-left+1);
        }
        return len;
    }
};