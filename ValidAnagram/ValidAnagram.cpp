#include<string>
using namespace std;


class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		int letterMap[26];
		for (int i = 0; i < 26; i++)
		{
			letterMap[i] = 0;
		}
		int s_len = s.size();
		for (int i = 0; i < s_len; i++)
		{
			letterMap[s[i] - 'a']++;
		}
		int t_len = t.size();
		for (int i = 0; i < t_len; i++)
		{
			letterMap[t[i] - 'a']--;
		}
		for (int i = 0; i < 26; i++) 
		{
			if (letterMap[i] != 0)
				return false;
		}
		return true;
	}
};


int main()
{
	return 0;
}