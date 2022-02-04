class Solution
{
public:
	pair<int,int> findPair(vector<int> const &nums, int target)
	{
		pair<int,int>p;
		p.first=-1;
		p.second=-1;
		int start=0,end=nums.size()-1;
		int flag1=0,flag2=0;
		while(start<nums.size() && end>=0){
			if(nums[start]==target && flag1==0){
				p.first=start;
				flag1=1;
			}
			if(nums[end]==target && flag2==0){
				p.second=end;
				flag2=1;
			}
			start++;
			end--;

		}
		return p;
	}
};