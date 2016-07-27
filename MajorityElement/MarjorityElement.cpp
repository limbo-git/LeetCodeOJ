#include <vector>
using namespace std;
#define SUCCESS_EXIT 0;

class Solution
{
public:
	// Moore Voting Algorithm
	int marjorityElement(vector<int>& nums)
	{
		int a = nums[0] - 1, count = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (count == 0 || a == nums[i]) count++, a = nums[i];
			else count--;
		}
		return a;
	}

	// sort
	int majorityElement(vector<int>& nums)
	{
		sort(nums.begin(), nums.end());
		return nums[nums.size() / 2];
	}

	// bit Counting
	int majorityElement(vector<int>& nums)
	{
		int len = sizeof(int) * 8, size = nums.size();
		int count = 0, mask = 1, ret = 0;
		for (int i = 0; i < len; ++i)
		{
			count = 0;
			for (int j = 0; j < size; ++j)
				if (mask & nums[j]) count++;
			if (count > size / 2) ret |= mask;
			mask <<= 1;
		}
		return ret;
	}

};

int
main(int argc, char** argv)
{
	return SUCCESS_EXIT;
}