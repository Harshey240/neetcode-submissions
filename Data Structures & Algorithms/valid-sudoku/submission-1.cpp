class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> row;
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                row[board[i][j]]++;
                if(row[board[i][j]]>1)
                {
                    return(false);
                }
            }
        }

        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> col;
            for(int j=0;j<9;j++)
            {
                if(board[j][i] == '.')
                {
                    continue;
                }
                col[board[j][i]]++;
                if(col[board[j][i]]>1)
                {
                    return(false);
                }
            }
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                unordered_map<char,int> sqr;
                for(int k=0;k<3;k++)
                {
                    for(int l=0;l<3;l++)
                    {
                        int r = (3*i)+k;
                        int c = (3*j)+l;
                        if(board[r][c] == '.')
                        {
                            continue;
                        }
                        sqr[board[r][c]]++;
                        if(sqr[board[r][c]]>1)
                        {
                            return(false);
                        }
                    }
                }
            }
        }

        return(true);
    }
};
