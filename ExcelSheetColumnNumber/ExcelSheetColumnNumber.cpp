#include<string>
using namespace std;
#define SUCCESS_EXIT = 0;

class Solution
{
public:
	int titleToNumber(string s)
	{
		int ret = 0;
		size_t s_len = s.length();
		for (auto i = s_len - 1; i != -1; i--) 
		{
			int x = s[i] - 'A' + 1;
			int base = 1;
			for (auto b = s_len - 1; b != i; b--) 
			{
				base *= 26;
			}
			ret += x * base;
		}
		return ret;
	}

	// recommand algorithms
	int titleToNumber(string s)
	{
		int ret = 0;
		for (auto i = 0; i != s.length(); i++) 
		{
			ret = 26 * ret + (s.at(i) - 'A' + 1);
		}
		return ret;
	}
};

int
main(int args, char** argv)
{
	return SUCCESS_EXIT;
}