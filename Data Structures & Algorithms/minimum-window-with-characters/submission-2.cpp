class Solution {
public:
    string minWindow(string s, string t) {

        string temp;
        string ans = "";

        int l = 0;
        int r = 0;

        map <char,int> mpt;
        for(int i=0;i<t.size();i++)
        {
            mpt[t[i]]++;
        }

        map<char,int> mps;
        map<char,int> mpsact;

        while(r<s.size())
        {
            temp += s[r];
            if(mpt.find(s[r]) != mpt.end())
            {
                mpsact[s[r]]++;
                if(mps[s[r]]<mpt[s[r]])
                {
                    mps[s[r]]++;
                }
            }
            if(mpt == mps)
            {
                if(mpt.find(s[l])!=mpt.end())
                {
                    mpsact[s[l]]--;
                    mps[s[l]] = min(mps[s[l]],mpsact[s[l]]);
                }
                l++;
                mps[s[r]]--;
                mpsact[s[r]]--;
                r--;
                if(ans == "" || temp.size()<ans.size() )
                {
                    ans = temp;
                }
                temp.erase(temp.size()-1,1);
                

                temp.erase(0,1);
            }
            for(const auto& pair: mps)
            {
                cout<<pair.first<<' '<<pair.second<<endl;
            }
            cout<<temp<<' '<<ans<<endl;
            r++;
        }
        cout<<endl;
        cout<<l<<' '<<r<<endl<<endl;
        while(l<s.size())
        {
            cout<<endl<<l<<endl<<endl;
            if(mpt == mps)
            {   
                if(ans == "" || temp.size()<ans.size() )
                {             
                    ans = temp;      
                }          
            } 
            if(mpt.find(s[l])!=mpt.end())
            {
                mpsact[s[l]]--;
                mps[s[l]] = min(mps[s[l]],mpsact[s[l]]);
            }  
            for(const auto& pair: mps)
            {
                cout<<pair.first<<' '<<pair.second<<endl;
            }
            
            temp.erase(0,1);   
            cout<<temp<<' '<<ans<<endl;         
            l++;
            
        }
        return(ans);
    }
};
