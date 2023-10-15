// Exercise 13

#include "std_lib_facilites.h"

vector<int> countLetters(vector<string> v);
void findMinMax(vector<string> v, vector<int> c, string& sh, string& lon);

int main()
{

	vector<string> words = { "hello","hi","exit","test","testing" };
	for (string x : words)
		cout << x << " ";
	cout << endl;

	vector<int> count = countLetters(words);
	for (int x : count)
		cout << x << " ";
	cout << endl;

	string shortest;
	string longest;
	findMinMax(words, count, shortest, longest);
	cout << "The longest string is: " << longest << endl;
	cout << "The shortest string is: " << shortest << endl;

	sort(words.begin(), words.end());
	cout << "First string: " << words[0] << endl;
	cout << "Last string: " << words[words.size() - 1] << endl;

	return 0;
}

vector<int> countLetters(vector<string> v)
{
	vector<int> count;
	for (int i = 0; i < v.size(); i++)
		count.push_back(v[i].size());
	return count;
}

void findMinMax(vector<string> v, vector<int> c, string& sh, string& lon)
{
	int min = c[0];
	int max = c[0];
	int i = 0, j = 0;

	for (int k = 0; k < c.size(); k++)
	{
		if (c[k] > max)
		{
			max = c[k];
			i = k;
		}
		if (c[k] < min)
		{
			min = c[k];
			j = k;
		}
	}
	sh = v[j];
	lon = v[i];
}