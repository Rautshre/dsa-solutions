class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n1 = series1.size();
        int n2 = series2.size();
        vector<vector<int>> ans;
        int ind1 = 0, ind2 = 0;
        while(ind1<n1 && ind2<n2){
            int t1 = series1[ind1][0];
            int t2 = series2[ind2][0];
            int v1 = series1[ind1][1];
            int v2 = series2[ind2][1];
            int t = min(t1, t2);
            ans.push_back({t, v1+v2});
            if(t1<t2){
                ind1++;
            }
            else if(t2<t1){
                ind2++;
            }
            else{
                ind1++;
                ind2++;
            }
        }
        while(ind1<n1){
            ans.push_back(series1[ind1]);
            ind1++;
        }
        while(ind2<n2){
            ans.push_back(series2[ind2]);
            ind2++;
        }

        return ans;
    }
};