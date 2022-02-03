class Solution
{
public:
	int findIndex(vector<int> const &nums, int target)
	{
		int start=0, mid=0, end=nums.size()-1,flag=0,ans=0;
		while(start<=end){
			mid=(start+end)/2;
			if(nums[mid]>target){
				end=mid-1;
			}
			else if(nums[mid]<target){
				start=mid+1;
			}
			else if(nums[mid]==target){
				flag=1;
				ans=mid;
			}
		}
		if(flag==1){
			return mid;
		}
		else{
			return -1;
		}
	}
};
