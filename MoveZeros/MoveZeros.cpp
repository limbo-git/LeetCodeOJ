#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	void moveZeroes(vector<int>& nums)
	{
		size_t length = nums.size();
		size_t i = length - 1;
		while (i != -1)
		{
			if (nums[i] == 0)
			{
				size_t t = i;
				for (size_t j = i + 1; j != length; j++)
				{
					if (nums[j] != 0)
					{
						int temp = nums[t];
						nums[t] = nums[j];
						nums[j] = temp;
						t = j;
					}
				}
			}
			i--;
		}

	}
};

int main()
{

}