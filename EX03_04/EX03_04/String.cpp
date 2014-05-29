#include<iostream>
#include<string>
using namespace std;

string sort(string &s){
	for (int i = s.length() - 1; i >= 1; i--)
	{
		char currentMax = s[0];
		int currentMaxPlace = 0;

		for (int j = 1; j <= i; j++)
		{
			if (currentMax < s[j])
			{
				currentMax = s[j];
				currentMaxPlace = j;
			}
		}

		if (currentMaxPlace != i)
		{
			s[currentMaxPlace] = s[i];
			s[i] = currentMax;
		}
	}

	return s;
}

int main(){
	string s;
	cout << "Enter a string s: ";
	cin >> s;

	cout << "The sorted string is " << sort(s) << endl;

	return 0;
}