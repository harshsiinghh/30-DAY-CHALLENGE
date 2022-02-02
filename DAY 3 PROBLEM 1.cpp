class Solution
{
public:
	int findMaxSubarraySum(vector<int> const &nums)
	{
		int sum=0,sum1=-999999;
		for(int i=0;i<=nums.size();i++)
		{
			for(int j=i;j<nums.size();j++)
			{
				for(int k=i;k<=j;k++){
					sum+=nums[k];
				}
				if(sum>sum1){
					sum1=sum;
				}
				sum=0;
			}
		}
		return sum1;
	}
};

