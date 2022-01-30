class Solution
{
public:
	void sortArray(vector<int> &nums)
	{
		int i=0,j=0;
		for(i=0;i<nums.size();i++){
			for(j=i+1;j<nums.size();j++){
				if(nums[j]<nums[i]){
					int temp=nums[j];
					nums[j]=nums[i];
					nums[i]=temp;
				}
			}
		}
	}
};