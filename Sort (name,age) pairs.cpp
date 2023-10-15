#include "std_lib_facilites.h"

void printNameAge(vector<string> n, vector<double> a);
int findIndex(string name, vector<string> sorted);
void sortAge(vector<string> name, vector<string> sName, vector<double> age, vector<double>& sAge);

int main()
{
	vector<string> name;
	cout << "Enter names of people: " << endl;
	for (string n; cin >> n;)
	{
		if (n == "|")
			break;
		name.push_back(n);
	}

	int N = name.size();
	cout << "You entered " << N << " names." << endl;

	vector<double> age;
	double a;
	for (int i = 0; i < N; i++)
	{
		cout << "Enter the age of " << name[i] << ": " << endl;
		cin >> a;
		age.push_back(a);
	}
	cout << endl;

	cout << "Before sorting: " << endl;
	printNameAge(name, age);

	cout << endl;
	vector<string> sortedName = name;
	sort(sortedName.begin(), sortedName.end());

	vector<double> sortedAge = age;
	sortAge(name, sortedName, age, sortedAge);
	cout << "After sorting: " << endl;
	printNameAge(sortedName, sortedAge);


	return 0;
}

void printNameAge(vector<string> n, vector<double> a)
{
	for (int i = 0; i < n.size(); i++)
		cout << "(" << n[i] << "," << a[i] << ")" << endl;
}

void sortAge(vector<string> name, vector<string> sName, vector<double> age, vector<double>& sAge)
{
	int curP;
	int prevP;
	string n;

	for (int i = 0; i < name.size(); i++)
	{
		prevP = i;
		curP = findIndex(name[i], sName);
		sAge[curP] = age[prevP];
	}
}

int findIndex(string name, vector<string> sorted)
{
	for (int i = 0; i < sorted.size(); i++)
	{
		if (sorted[i] == name)
			return i;
	}
}
