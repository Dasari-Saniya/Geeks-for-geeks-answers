class Solution {
  public:
    int maxCharGap(string &s) {
        // code here
         map<char, int> mp;
        int ans = -1;
        int i = 0;
        for(auto x: s){
             
            if (!mp.empty() && mp.find(x)!= mp.end()){
                int t = i - mp[x] - 1;
                ans = max(ans, t);
            }
            else{
                mp[x] = i;
            }
            i++;
        }
        
    // debug
    //   for (auto itr : mp) {
    //         cout << itr.first << " " << itr.second << endl;
    //     }
        
        return ans;
    }
};