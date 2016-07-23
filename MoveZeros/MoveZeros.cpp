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

	// recommand funcation
	void moveZeros(vector<int>& nums)
	{
		size_t totalZeroes = 0;
		for (size_t i = 0; i != nums.size(); i++) 
		{
			// calc total Zeroes numbers
			if (nums[i] == 0)
				totalZeroes++;
			else
				nums[i - totalZeroes] = nums[i]; // modify non-zero number put head of the vector
		}
		for (size_t i = nums.size() - totalZeroes; i != nums.size(); i++)
		{
			nums[i] = 0; // put 0 into tail of the vector;
		}
	}
};

int main()
{

}