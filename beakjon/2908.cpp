#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int j = stoi(a);
	int k = stoi(b);
	if (j > k)
	{
		cout << j;
	}
	else
	{
		cout << k;
	}
}