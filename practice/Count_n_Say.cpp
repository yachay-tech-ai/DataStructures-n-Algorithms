#include <iostream>
using namespace std;

string countNsay(int n) {

	// base cases
	if (n == 1) return "1";
	if (n == 2) return "11";

	string str = "11";
	for (int i = 3; i < n + 1; i++) {

		str += 'd';
		int count = 1;
		string term = "";

		int len = str.length();

		for (int j = 1; j < len; j++) {

			if (str[j] != str[j - 1]) {
				term += count + '0';
				term += str[j - 1];
				count = 1;
			}
			else count++;

		}
		str = term;

	}
	return str;
}