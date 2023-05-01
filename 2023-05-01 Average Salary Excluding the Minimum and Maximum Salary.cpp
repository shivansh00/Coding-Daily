class Solution {
public:
    double average(vector<int>& salary) {
        int mini= *min_element(salary.begin(), salary.end());
        int maxi= *max_element(salary.begin(), salary.end());
        int sum= accumulate(salary.begin(), salary.end(), 0);
        sum-= (mini+maxi);
        double avg= sum/double(salary.size()-2);
        return avg;
    }
};
