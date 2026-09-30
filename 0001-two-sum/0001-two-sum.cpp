class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size();
        int front=0,back=n-1;
        vector<pair<int,int>>nums;
        for(int i=0;i<n;i++){
            nums.push_back({num[i],i});
        }
        sort(nums.begin(),nums.end());
        while(front<back){
            if(nums[front].first+nums[back].first==target){
                return {nums[front].second,nums[back].second};
            }
            else if(nums[front].first + nums[back].first > target){
                back--;
            }
            else{
                front++;
            }
        }
        return {};
    }
};