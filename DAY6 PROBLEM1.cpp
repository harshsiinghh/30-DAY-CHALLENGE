/*

Given an integer array, find the maximum product of its elements among all its subsets.

Input : [-6, 4, -5, 8, -10, 0, 8]
Output: 15360
Explanation: The subset with the maximum product of its elements is [-6, 4, 8, -10, 8]

Input : [4, -8, 0, 8]
Output: 32
Explanation: The subset with the maximum product of its elements is [4, 8]

Input : []
Output: 0

*/

class Solution
{
public:
	int findMaxProduct(vector<int> const &nums)
	{
		int maxe = -99999, zerocnt = 0;
		int maxp = 1;
		int flag=0,count0=0;
		if(nums.size()==0){
			maxp=0;
		}
		if(nums.size()==1){
			maxp=nums[0];
		}
		
		for (int i = 0; i < nums.size(); i++)
		{
			if(nums[i]==0){
				count0++;
			}
			if (nums[i] < 0)
			{
				zerocnt++;
				maxe = max(maxe, nums[i]);
			}
		}
		if(zerocnt==1 && count0>0 && (nums.size()-zerocnt)==count0){
			maxp=0;
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (zerocnt % 2 == 0)
			{
				if (nums[i] == 0)
				{
					maxp = maxp * 1;
				}
				else
				{
					maxp = maxp *nums[i];
				}
			}
			else
			{
				if (nums[i] == 0)
				{
					maxp = maxp * 1;
				}
				else if (nums[i] == maxe && flag==0)
				{
					maxp = maxp * 1;
					flag=1;
				}
				else
				{
					maxp = maxp *nums[i];
				}
			}
		}

		return maxp;
	}
	};