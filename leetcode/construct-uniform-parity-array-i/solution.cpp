class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int oc=0, ec=0;
        for(int i=0; i<n; i++){
            int num = nums1[i];
            int t = 0;
            if(num%2==1) t=1;
            if(t==1) oc++;
            else{
                ec++;
            }
            for(int j=0; j<n; j++){
                if(j==i) continue;
                else{
                    if(t==1 && nums1[j]%2==0){
                        ec++;
                        break;
                    }
                    else if(t==0 && nums1[j]%2==1){
                        oc++;
                        break;
                    }
                }
            }
        }
        return oc==n || ec==n ;
    }
};