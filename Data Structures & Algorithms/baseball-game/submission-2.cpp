class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ans;
        int sum = 0;
        for(int i=0;i<operations.size();i++)
        {
            
            if(operations[i] == "+")
            {
                int tp = ans.top();
                ans.pop();
                int tp2 = ans.top();
                int sm = tp+tp2;
                ans.push(tp);
                ans.push(sm);
                sum += sm;
            }
            else if(operations[i] == "C")
            {
                sum -= ans.top();
                ans.pop();
            }
            else if(operations[i] == "D")
            {
                int temp = ans.top();
                ans.push(temp*2);
                sum += temp*2;
            }
            else
            {
                int x = stoi(operations[i]);
                ans.push(x);
                sum += x;
            }
        }
        return(sum);
    }
};