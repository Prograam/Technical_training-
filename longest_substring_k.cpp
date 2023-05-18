//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    unordered_map<char , int > mp;
    int windowstart = 0;
    int maxi = -1;
    for (int windowend = 0 ; windowend < s.size() ; windowend++) {
        mp[s[windowend]]++;
        while ( mp.size() > k) {
            mp[s[windowstart]]--;
            if (mp[s[windowstart]] == 0) {
                mp.erase(s[windowstart]);
            }
        windowstart++;
        }
    if (mp.size() == k) {
        maxi = max(maxi, windowend - windowstart + 1);
    }
    }
    if (maxi == -1 ) {
        return -1;
    }
    else {
        return maxi;
    }
    }
};