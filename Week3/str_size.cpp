// str_size.cpp

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	// 
	cout << "Enter all words, then EOF: ";

	// input
	string word;
	string max = "";
	string min = "";
	while (cin >> word)
	{
		if (min.size() == 0) min = word; // 초기화
		if (max.size() == 0) max = word; // 초기화

		// check the size
		if (word.size() < min.size()) min = word;
		else if (word.size() > max.size()) max = word;
	}

	// print
	cout <<
		"Min word: " << min << endl << "size: " << min.size() << endl <<
		"Max word: " << max << endl << "size: " << max.size() << endl;

	return 0;
}