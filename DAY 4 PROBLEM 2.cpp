
class Solution
{
public:
	vector<int> merge(vector<int> const &X, vector<int> const &Y)
	{
		vector<int>v;
		int i=0,j=0;
		while(i<X.size() && j<Y.size())
		{
			if(X[i]<Y[j]){
				v.push_back(X[i]);
				i++;
			}
			else{
				v.push_back(Y[j]);
				j++;
			}
		}
		while(i<X.size())
		{
			v.push_back(X[i]);
			i++;
		}
		
		while(j<Y.size())
		{
			v.push_back(Y[j]);
			j++;
		}
		return v;
	}
};