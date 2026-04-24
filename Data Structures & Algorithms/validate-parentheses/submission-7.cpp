class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> um = {{'}','{'},{']','['},{')','('}};
        // if(s.size()%2 != 0)
        // {
        //     return(false);
        // }
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                if(st.size()==0)
                {
                    return(false);
                }
                else
                {
                    if(st.top()!=um[s[i]])
                    {
                        return(false);
                    }
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(st.size()!=0)
        {
            return(false);
        }
        return(true);
    }
};
