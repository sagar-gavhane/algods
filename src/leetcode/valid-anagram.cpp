// https://leetcode.com/problems/valid-anagram/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isAnagram(string s, string t)
{
  if (s.length() != t.length())
    return false;

  vector<int> counts(26, 0);
  int n = s.length();

  for (int i = 0; i < n; i++)
  {
    counts[s[i] - 'a']++;
    counts[t[i] - 'a']--;
  }

  for (int i = 0; i < 26; i++)
  {
    if (counts[i])
      return false;
  }

  return true;
}

int main()
{
  bool result = isAnagram("anagram", "nagaram");
  cout << result << endl;
}
