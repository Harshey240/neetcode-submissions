class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int sz1 = word1.size();
        int sz2 = word2.size();
        int sz = min(sz1,sz2);
        string s;
        for(int i=0;i<sz;i++)
        {
            s+=word1[i];
            s+=word2[i];
        }
        if(sz1>sz2)
        {
            s+= word1.substr(sz,sz1-sz2);
        }
        else
        {
            s+= word2.substr(sz,sz2-sz1);
        }
        return(s);
    }
};