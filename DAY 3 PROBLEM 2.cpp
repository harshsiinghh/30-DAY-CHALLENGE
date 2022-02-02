class Solution
{
public:
	int findMaxSubarraySum(vector<int> const &nums)
	{
		int currsum=0;
		int maxsum=-999999;
		for(int i=0;i<nums.size();i++){
			currsum+=nums[i];
			if(currsum>maxsum)
			{
				maxsum=currsum;
			}
			if(currsum<0)
			{
				currsum=0;
			}
		}
		return maxsum;
	}
};