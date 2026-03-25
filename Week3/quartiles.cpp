// quartile.cpp
/*
	25% -> print
	50%(median) -> print
	75% -> print
*/
#include <iostream>
#include <vector>
#include <algorithm> // sort()

using namespace std;

typedef vector<int>::size_type vec_sz;

int main(void)
{
	// Explain program
	cout << "Enter all values, then EOF: ";

	vector<int> val;
	int in;

	while (cin >> in)
	{
		val.push_back(in);
	}

	// Check the error
	vec_sz size = val.size();
	if (size == 0)
	{
		cout << "No values. Try again!" << endl;
		
		return 1;  // Error
	}

	// Sort
	sort(val.begin(), val.end());

	vec_sz q1 = size / 4;
	vec_sz q2 = size / 2;
	vec_sz q3 = size / 4 * 3;

	int q1_val, q2_val, q3_val;
	q1_val = size % 4 = 0 ? (val[q1] + val[q1 - 1]) / 2 : val[q1];
	q1_val = size % 2 = 0 ? (val[q2] + val[q2 - 1]) / 2 : val[q2];
	q1_val = 3 * size % 4 = 0 ? (val[q3] + val[q3 - 1]) / 2 : val[q3];

	cout <<
		"Q1: " << q1_val << endl <<
		"Q2(중앙값): " << q2_val << endl <<
		"Q3: " << q3_val << endl;

	return 0;
}