class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1)
        {
            return(n);
        }
        if(n == 2 || n == 3)
        {
            return(n-1);
        }
        int a = 0;
        int b = 1;
        int c = 1;
        int sum;
        for(int i=3;i<=n;i++)
        {
            sum = a+b+c;
            a = b;
            b = c;
            c = sum;
        }
        return(sum);
    }
};