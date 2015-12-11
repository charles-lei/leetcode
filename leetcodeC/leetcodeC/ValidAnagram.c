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
	unsigned int a[26];
	unsigned int b[26];
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		a[i] = 0;
		b[i] = 0;
	}
	while (s != NULL && *s != '\0')
	{
		a[*s - 'a']++;
		s++;
	}
	while (t != NULL && *t != '\0')
	{
		b[*t - 'a']++;
		t++;
	}
	for (i = 0; i < 26; i++)
	{
		if (a[i] != b[i])
		{
			return false;
		}
	}
	return true;
}