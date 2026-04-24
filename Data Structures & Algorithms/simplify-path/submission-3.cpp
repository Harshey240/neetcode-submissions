class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        string ans = "";
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='/')
            {
                if(s.empty())
                {
                    s.push("");
                }                
                else if(s.top()=="..")
                {
                    s.pop();
                    if(!s.empty())
                    {
                        s.pop();
                    }
                    s.push("");
                    continue;
                }
                else if(s.top()==".")
                {
                    s.pop();
                    s.push("");
                }
                else if(s.top() != "")
                {
                    s.push("");
                }
            }
            else
            {
                s.top() += path[i];
            }
        }

        if(s.top()=="..")
        {
            s.pop();s.pop();
        }
        else if(s.top()==".")
        {
            s.pop();
        }
        if(s.empty())
        {
            ans = "/";
            return(ans);
        }

        int sz = s.size();
        while(!s.empty())
        {
            ans = "/" + s.top() + ans;
            s.pop();
        }
        int asz = ans.size();
        if(asz!=1 && ans[asz-1]=='/')
        {
            ans = ans.substr(0, asz-1);
        }
        return(ans);       

    }
};