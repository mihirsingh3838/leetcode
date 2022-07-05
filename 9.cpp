class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long newNum=0;
        long long y=0;
        
        while(temp>0)
        {
            y= temp%10;
            temp=temp/10;
            newNum= (newNum*10)+y;
        }
        
        if(newNum==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};