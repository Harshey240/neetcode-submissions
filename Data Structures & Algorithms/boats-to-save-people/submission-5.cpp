class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l = 0;
        int r = people.size()-1;
        int sum = 0;
        int ans = 0;
        // int temp = 0;
        while(l<=r)
        {
            // if(people[r]>=limit)
            // {
            //     r--;
            //     ans++;
            //     temp++;
            //     continue;
            // }
            if((people[l]+people[r])==limit)
            {
                ans++;
                l++;
                r--;
            }
            else if((people[l]+people[r])>limit)
            {
                r--;
                ans++;
            }
            else
            {
                l++;
                r--;
                ans++;
            }
        }
        // int rem = people.size()-temp;

        // if(rem%2 == 1)
        // {
        //     ans++;
        // }
        return(ans);
    }
};