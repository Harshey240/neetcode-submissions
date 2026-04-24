class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size()-1;
        int m = (l+r)/2;
        while(l<r)
        {
            int m = (l+r)/2;
            if(target>matrix[m][0])
            {
                l = m+1;
            }
            else if(target<matrix[m][0])
            {
                r = m-1;
            }
            else
            {
                return(true);
            }
        }

        if(target<matrix[l][0])
        {
            l=l-1;
        }

        if(l==-1)
        {
            return(false);
        }

        cout<<l<<" "<<r<<endl;

        int row = l;
        l = 0;
        r = matrix[row].size()-1;
        m = (l+r)/2;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(target>matrix[row][m])
            {
                l = m+1;
            }
            else if(target<matrix[row][m])
            {
                r = m-1;
            }
            else
            {
                return(true);
            }
            cout<<m<<" "<<l<<" "<<r<<endl;
        }        

        return(false);

    }
};
