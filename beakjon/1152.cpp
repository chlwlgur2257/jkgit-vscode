#include<iostream>
#include<string>
using namespace std;

int main()
{
	string n;
	getline(cin, n);
	int count = 1;
	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == ' ')
		{
			count++;
		}
	}
	if (n[0] == ' ')
	{
		count--;
	}
	if (n[n.length()-1] == ' ')
	{
		count--;
	}
	cout << count;
}