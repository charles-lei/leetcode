/*
Given two strings s and t, write a function to determine if t is an anagram of s.

For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.

Note:
You may assume the string contains only lowercase alphabets.*/
#include "leetcodeC.h"
bool isAnagram(char* s, char* t)
{
	unsigned int a[52] = {0};
	int i = 0;
	if (s == NULL && t == NULL) return true;
	while (*s != '\0' &&  *t != '\0')
	{
		a[*s - 'a']++;
		a[*s - 'a' + 26]++;
		s++;
		t++;
	}
	if (*s == '\0' &&  *t != '\0' || *s != '\0' &&  *t == '\0')
		return false;
	for (i = 0; i < 26; i++)
	{
		if (a[i] != a[i+26])
		{
			return false;
		}
	}
	return true;
}