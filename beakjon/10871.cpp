#include<iostream>
using namespace std;

int main()
{
   int a, b,c[100];
   cin >> a>>b;
   for (int i = 0; i < a; i++)
   {
      cin >> c[i];
      if (c[i] < b)
      {
         cout << c[i] << " ";
      }
   }
}