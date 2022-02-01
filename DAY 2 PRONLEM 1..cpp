class Solution
{
public:
	pair<int,int> findPair(vector<int> const &nums, int target)
	{
	int i=0,j=0,flag=0;
	pair<int,int> p;
    for(i=0;i<nums.size();i++){
      for(j=i+1;j<nums.size();j++){

          if(nums[i]+nums[j]==target){
          	p.first=nums[i];
          	p.second=nums[j];
          	return p;
             flag=1;
            }
		}
    }
    if(flag==0){
    	p.first=-1;
    	p.second=-1;
    	return p;
    }
}
};
