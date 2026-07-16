class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int>frq;
        int len = 0;
        int left = 0;
        for(int i=0; i<n; i++){
            // if(s[i]==' ')continue;
            frq[s[i]]++;
            while(left<n && frq[s[i]]>1){
                frq[s[left]]--;
                left++;
            }
            len = max(len, i-left+1);
        }
        len = max(len, n-left);
        return len;
    }
};