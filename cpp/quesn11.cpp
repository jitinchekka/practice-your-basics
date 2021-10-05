//11.Write a program that accepts a sentence and calculate the number of upper case letters and lower case letters
//Jitin CS20B1075
#include <iostream>
using namespace std;
void solve()
{
	string s;
	int i = 0, lCount = 0, uCount = 0;
	cin >> s;
	while (i != s.length())
	{
		if ((int)s[i] >= 65 && (int)s[i] <= 90)
		{
			uCount++;
		}
		else if ((int)s[i] >= 97 && (int)s[i] <= 122)
		{
			lCount++;
		}
		i++;
	}
	cout << "Lower case = " << lCount << " Upper count = " << uCount << endl;
}
int main()
{
	solve();
	return 0;
}
