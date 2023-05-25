#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	// declare value_type for priority queue
	priority_queue<string>::value_type AString;

	// Declares priority_queue
	priority_queue<string> q2;

	// here AString acts as a variable of string data type
	AString = "geeks for geeks";
	cout << "The value_type is AString = " << AString << endl;
    q2.push(AString);
	AString = "abc";
	q2.push(AString);
	AString = "dgf";
	q2.push(AString);
	AString = "dhi";
	q2.push(AString);

	cout << "Value stored in priority queue are :" << endl;
	while (!q2.empty()) {
		cout << '\t' << q2.top();
		q2.pop();
	}

	return 0;
}

// This code is modified by Susobhan Akhuli
