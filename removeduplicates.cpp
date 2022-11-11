class Solution
 {
public:
    int removeDuplicates(vector<int>& nums) 
    {
      set<int> s;
      int ans=0;
      for(int i=0;i<nums.size();i++){
          s.insert(nums[i]);
      }  
      nums.clear();
     
          for(auto value:s){
              nums.push_back(value);
          }
      
      ans=s.size();
        return ans;
    }
};
