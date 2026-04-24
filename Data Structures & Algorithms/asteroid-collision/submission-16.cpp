class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        stack<int> st2;
        for(auto i: asteroids)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else if(st.top()>0 && i<0)
            {
                while(abs(i)>st.top() && st.top()>0)
                {                 
                    st.pop();
                    if(st.empty())
                    {
                        break;
                    }
                } 
                if(st.empty())
                {
                    st.push(i);
                    continue;
                } 
                else if(st.top()<0)
                {
                    st.push(i);
                }
                else if(abs(i)==abs(st.top()))
                {
                    cout<<"Reached here"<<endl;
                    st.pop();
                }
            }
            else
            {
                st.push(i);
            }
        }

        int sz = st.size();
        if(sz == 0)
        {
            ans = {};
            return(ans);
        }

        for(int i=0;i<sz;i++)
        {
            st2.push(st.top());
            st.pop();
        }
        for(int i=0;i<sz;i++)
        {
            ans.push_back(st2.top());
            st2.pop();
        }
        return(ans);

    }
};