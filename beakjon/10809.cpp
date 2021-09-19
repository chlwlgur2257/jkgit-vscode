#include<iostream>
#include<string>
using namespace std;

int main()
{
	string n;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	cin >> n;

	for (int i = 0; i < alpha.length(); i++)
	{
		cout << (int)n.find(alpha[i])<<" ";
	}
}