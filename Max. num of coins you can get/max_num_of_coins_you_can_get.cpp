class Solution {
public:
    int maxCoins(vector<int>& v) {
        sort(v.begin(), v.end()); // ascending sort
        reverse(v.begin(), v.end());
        int res=0;
        for(int i=1;i<v.size()-(v.size()/3);i+=2){
            res += v[i];
        }
        return res;
    }
};