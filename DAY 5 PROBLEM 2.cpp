class Solution
{
public:
	pair<int, int> findFloorAndCeil(vector<int> const &nums, int x)
	{
		pair<int, int> p;
		int min = -99999;
		int max = 99999;
		p.first = -1;
		p.second = -1;
		for (int i = 0; i <nums.size(); i++)
		{
			if (nums[i] > min && nums[i] <= x)
			{
				min=nums[i];
				p.first= nums[i];
			}

			if (nums[i] < max && nums[i] >= x)
			{
				max=nums[i];
				p.second= nums[i];
			}
		}
		return p;
	}