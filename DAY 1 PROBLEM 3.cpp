class Solution
{
public:
	pair<int,int> findPair(vector<int> const &nums)
	{
		
		int i=0,ans=0, max=-9999, p1=0,p2=0;
		pair<int,int>p;
		
		if(nums.size()==0 || nums.size()==1){
			p.first=-1;
			p.second=-1;
			return p;
		}
		
		for(i=0;i<nums.size();i++){
			for(int j=i+1;j<nums.size();j++){
				ans=nums[i]*nums[j];
				if(ans>max){
					max=ans;
					p1=i;
					p2=j;
				}
			}
		}
		p.first=nums[p1];
		p.second=nums[p2];
		return p;
	}
	
};