class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> um1, um2;
        for(int i=0;i<size(s);i++)
        {
            um1[s[i]]++;
        }
        for(int j=0;j<size(t);j++)
        {
            um2[t[j]]++;
        }
        if(um1 == um2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
};
