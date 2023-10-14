#include "std_lib_facilites.h"

void reverse_r(vector <int>& v);
vector<int> reverse_v(vector<int> v);
void print(vector<int> v);

int main()
{
	vector<int> numbers;
	for (int x; cin >> x;)
		numbers.push_back(x);
	print(numbers);

	vector<int> reverse;

	reverse = reverse_v(numbers);
	print(reverse);

	reverse_r(numbers);
	print(numbers);



	return 0;
}

void reverse_r(vector <int>& v)
{
	int n = v.size() - 1;
	int temp;
	for (int i = 0; i < (n + 1) / 2; i++)
	{
		temp = v[i];
		v[i] = v[n - i];
		v[n - i] = temp;

	}
}

vector<int> reverse_v(vector<int> v)
{
	int n = v.size() - 1;
	vector<int> rev = v;
	for (int i = 0; i < (n + 1) / 2; i++)
		swap(rev[i], rev[n - i]);
	return rev;
}

void print(vector<int> v)
{
	for (int x : v)
		cout << x << " ";
	cout << endl;
}