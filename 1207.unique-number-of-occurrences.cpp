class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ct;
        int count=0;
        sort(arr.begin(), arr.end());
        int i=0;
        
        while(i<arr.size())
        {
            count=1;
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i +=count;
            ct.push_back(count);
        }
        sort(ct.begin(), ct.end());
        
        for(int i=0; i<ct.size()-1; i++)
        {
            if(ct[i]==ct[i+1])
            {
                return false;
            }
        }
        return true;
    }
};