#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool palindrome(string str)
{
	stack<char>StackedString;
	int len = str.length();
	for(int i = 0; i < len; i++) {StackedString.push(str[i]);}

	for(i = 0; !StackedString.empty(); i++)
	{
		if(StackedString.top() != str[i]) return false;
		StackedString.pop();
	}
	return true;
}

int main()
{
	string str;
	cout << "enter str: ";
	getline(cin, str);
	if(palindrome(str)) cout << "palindrome";
	else cout << "!palindrome";

	return 0;
}
