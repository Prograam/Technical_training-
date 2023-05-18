class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mini = INT_MIN;
        int winstart =0;
        int winend =0;
        double winsum =0;

        for (int winend = 0 ; winend < nums.size(); winend++) {
            winsum += nums[winend];
            
            if (k == winend - winstart +1) {
                mini = max(mini, winsum);
                winsum -= nums[winstart];
                winstart +=1;
            }
            
        }
    
        return (mini/k);
    }
};