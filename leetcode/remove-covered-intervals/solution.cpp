class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [&](vector<int>&a, vector<int>&b){
            if(a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });
        int start = intervals[0][0];
        int end = intervals[0][1];
        int cnt = 0;

        for(int i=1; i<n; i++){
            if(intervals[i][0]>=start && intervals[i][0]<=end && intervals[i][1]>=start && intervals[i][1]<=end){
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
            }
            else{
                cnt+=1;
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        return cnt+1;
    }
};