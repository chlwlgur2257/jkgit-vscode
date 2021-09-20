#include<iostream>
#include<string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int sum=0;
    int s[26]= { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };

    for (int i = 0; i < n.length(); ++i) {
		int index = n[i] - 65;
		sum += s[index];
	}
 
	cout << sum << endl;



}