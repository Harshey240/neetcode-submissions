class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {    
        int sz1 = triangle.size();   
        for(int i=1;i<sz1;i++)
        {
            int sz = triangle[i].size();
            triangle[i][0] += triangle[i-1][0];
            for(int j=1;j<(sz-1);j++)
            {
                triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
            }
            triangle[i][sz-1] += triangle[i-1][sz-2];
        }
        int ans = *min_element(triangle[sz1-1].begin(), triangle[sz1-1].end());
        return(ans);
    }
};