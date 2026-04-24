class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        map<char,int> mp1;
        for(int i=0;i<s1.size();i++)
        {
            mp1[s1[i]]++;
        }

        cout<<s1.size()<<endl<<endl;

        for(const auto& m : mp1)
        {
            cout<<m.first<<m.second;
        }
        cout<<endl<<endl;

        int l =0;
        int r = 0;

        map<char,int> mp2;

        while(r<s2.size())
        {
            if((r-l)<s1.size())
            {
                mp2[s2[r]]++;
            }
            else if((r-l)==s1.size())
            {
                if(mp2==mp1)
                {
                    return(true);
                }
                mp2[s2[l]]--;
                if(mp2[s2[l]]==0)
                {
                    mp2.erase(s2[l]);
                }
                mp2[s2[r]]++;
                l++;
            }
            cout<<l<<r<<endl;
            for(const auto& m : mp2)
            {
                cout<<m.first<<m.second;
            }
            cout<<endl;
            r++;

        }

        if(mp2==mp1)
        {
            return(true);
        }

        return(false);
    }
};
