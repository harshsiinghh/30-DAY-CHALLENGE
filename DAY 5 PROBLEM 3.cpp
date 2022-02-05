class Solution
{
public:
	int countOnes(vector<int> const &nums)
	{
		int count = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 1)
			{
				count++;
			}
		}

		return count;
	}
};