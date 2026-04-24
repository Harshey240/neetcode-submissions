class Solution {
public:
    int numDecodings(string s) {
        int sz = s.size();
        if(s[0]=='0')
        {
            return(0);
        }

        int n1 = 1; 
        int n2 = 1;

        for(int i=1;i<sz;i++)
        {
            string chr = s.substr(i-1, 2);
            int c = stoi(chr);

            int temp;
            if(s[i] == '0' || s[i-1] == '0')
            {
                if(c>26 || c == 0)
                {
                    return(0);
                }
                if(s[i-1] == '0')
                {
                    temp = n2;
                }
                else
                {
                    temp = n1;
                }         
            }
            else if(c<=26)
            {
                temp = n1+n2;
            }
            else
            {
                temp = n2;
            }
            n1=n2;
            n2=temp;
        }

        return(n2);
    }
};
