#include "std_lib_facilites.h"

void reverse_r(vector <string>& v);
vector<string> reverse_v(vector<string> v);
void print(vector<string> v);

int main()
{
	vector<string> words;
	for (string x; cin >> x;)
		words.push_back(x);
	print(words);

	vector<string> reverse;

	reverse = reverse_v(words);
	print(reverse);

	reverse_r(words);
	print(words);



	return 0;
}

void reverse_r(vector <string>& v)
{
	int n = v.size() - 1;
	string temp;
	for (int i = 0; i < (n + 1) / 2; i++)
	{
		temp = v[i];
		v[i] = v[n - i];
		v[n - i] = temp;

	}
}

vector<string> reverse_v(vector<string> v)
{
	int n = v.size() - 1;
	vector<string> rev = v;
	for (int i = 0; i < (n + 1) / 2; i++)
		swap(rev[i], rev[n - i]);
	return rev;
}

void print(vector<string> v)
{
	for (string x : v)
		cout << x << " ";
	cout << endl;
}