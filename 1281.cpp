class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, pro=1;
        int i;
        while(n>0)
        {
            i= n%10;
            sum = sum+i;
            pro= pro*i;
            n= n/10;
        }
        return pro-sum;
    }
};