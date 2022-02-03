class Solution
{
public:
	int findRotationCount(vector<int> const &nums)
	{
		int ans=0,min=99999;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i]<min){
				min=nums[i];
				ans=i;
			}
		}
		return ans;
	}
};