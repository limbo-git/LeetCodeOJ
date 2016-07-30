#include <vector>
using namespace std;

class Solution 
{
public:
	bool containsDuplicate(vector<int>& nums)
	{
		bool ret = false;
		// must sort the nums !!! I think it
		sort(nums.begin(), nums.end());
		size_t n_len = nums.size();
		if (n_len < 2) return ret;
		int last = n_len - 1;
		for (auto iter = 0; iter != n_len; iter++)
		{
			// just let the current and it's next equal !!! stupid
			if (nums[iter] == nums[iter + 1])
				return true;
		}
		return ret;
	}
};