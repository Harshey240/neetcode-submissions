class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans;
        stack<int> temp;

        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                int n1 = temp.top();
                temp.pop();
                int n2 = temp.top();
                temp.pop();
                temp.push(n1+n2);
            }
            else if(tokens[i]=="*")
            {
                int n1 = temp.top();
                temp.pop();
                int n2 = temp.top();
                temp.pop();
                temp.push(n1*n2);
            }
            else if(tokens[i]=="-")
            {
                int n1 = temp.top();
                temp.pop();
                int n2 = temp.top();
                temp.pop();
                temp.push(n2-n1);
            }
            else if(tokens[i]=="/")
            {
                int n1 = temp.top();
                temp.pop();
                int n2 = temp.top();
                temp.pop();
                temp.push(n2/n1);
            }
            else
            {
                temp.push(stoi(tokens[i]));
            }
        }
        return(temp.top());
    }
};
