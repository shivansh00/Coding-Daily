class Solution {
public:
    vector<string> summaryRanges(vector<int>& arr) {
        int n = arr.size();
        vector<string> ans;
        
        for(int j, i = 0; i < n; i++) {
            j = i;
            while(j + 1 < n && arr[j + 1] == arr[j] + 1)
                j++;
            
            if(j > i)
                ans.push_back(to_string(arr[i]) + "->" + to_string(arr[j]));
            else
                ans.push_back(to_string(arr[i]));
            
            i = j;
        }        
        return ans; 
    }
};
