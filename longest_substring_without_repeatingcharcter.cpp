class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int windowstart = 0;
        int windowend;
        int maxi = INT_MIN;
        map<char , int > mp;
        for (windowend = 0 ; windowend < s.size() ;  windowend++) {
            mp[s[windowend]]++;
            cout << mp.size() << endl;
            while(mp.size() != windowend-windowstart +1) {
                mp[s[windowstart]]--;
                if (mp[s[windowstart]] == 0) {
                    mp.erase(s[windowstart]);
                }
            windowstart++;
            }
        maxi = max(maxi,windowend -     windowstart + 1);
        }
        if (s.size() == 0 ) {
            return 0;
        }
        else {
            return maxi;
        }
        
    }
};