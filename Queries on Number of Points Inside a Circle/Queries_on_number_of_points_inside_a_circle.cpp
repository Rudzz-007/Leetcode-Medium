#include <vector>  
#include <cmath> 

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>count;
        for(int i=0;i<queries.size();i++){
            int l=0;
            for(int j=0;j<points.size();j++){
                int dx = points[j][0] - queries[i][0];  
                int dy = points[j][1] - queries[i][1];

                if(dx*dx + dy*dy <= queries[i][2] * queries[i][2])  //circle check
                    l++;
            }
            count.push_back(l);
        }   
        return count;
    }
};