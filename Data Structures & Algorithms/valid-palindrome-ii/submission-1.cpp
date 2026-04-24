class Solution {
public:
    bool validPalindrome(string s) {
        int l =0;
        int r = s.size()-1;
        string s2;

        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i]))
            {
                s2+=tolower(s[i]);
            }
        }
        string se = s2;
        reverse(s2.begin(),s2.end());
        if(s2==se)
        {
            return(true);
        }

        while(l<r)
        {
            if(s2[l] != s2[r])
            {
                break;
            }
            l++;
            r--;
        }

        string s3= s2;
        string s4 = s2;
        s3.erase(s3.begin()+l);
        string s6 = s3;
        reverse(s6.begin(),s6.end());
        s4.erase(s4.begin()+r);
        string s7 = s4;
        reverse(s7.begin(),s7.end());
        if((s6==s3)||(s7==s4))
        {
            return(true);
        }
        else
        {
            return(false);
        }

        return(true);
    }
};