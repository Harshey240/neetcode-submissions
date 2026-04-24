class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        stack<int> st;
        stack<string> temp;
        string temp2 = "";

        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                string num = "";
                int idx = i;
                while(isdigit(s[idx]))
                {
                    num += s[idx];
                    idx++;
                }
                st.push(stoi(num));
                i=idx-1;
                continue;
            }
            else if(s[i]=='[')
            {
                temp.push("");
            }
            else if(s[i]==']')
            {
                string t2 = "";
                for(int j=0;j<st.top();j++)
                {
                    t2 += temp.top();
                }   
                temp.pop();
                temp.push(t2); 
                st.pop();
                if(st.empty())
                {
                    ans += temp.top();
                    temp.pop();
                }
                else
                {
                    while(temp.size()!=st.size())
                    {
                        string t7 = temp.top();
                        temp.pop();
                        temp.top() += t7;
                    }
                }
            }
            else
            {
                if(!temp.empty())
                {
                    temp.top() += s[i];
                }
                else
                {
                    ans += s[i];
                }
            }                       
        }
        return(ans);
    }
};