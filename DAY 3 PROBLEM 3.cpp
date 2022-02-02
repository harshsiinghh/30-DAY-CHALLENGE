class Solution
{
public:
	void rearrange(vector<int> &nums)
	{
		vector<int>v;
		for(int i=0;i<nums.size();i++)
		{
			if(i=0){
				v.push_back(0);
				nums.erase(nums.begin()+0);
			}
			if(nums[i]==0)
			{
				v.push_back(0);
				nums.erase(nums.begin()+i);
			}
		}
		nums.insert(nums.end(),v.begin(),v.end());
	}
};