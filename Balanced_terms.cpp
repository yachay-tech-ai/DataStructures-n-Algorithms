#include <iostream>
#include<stack>
using namespace std;

char tokens[3][2] = { {'{','}'}, {'[',']'}, {'(',')'} };
bool isOpenTerm(char c) {
	for (char* t : tokens) {
		if (*(t + 0) == c) return true;
	}
	return false;
}
bool matches(char open, char close) {
	for (char* t : tokens) {
		if (open == *(t + 0)) {
			if (close == *(t + 1))
				return true;
		}
	}
	return false;
}

bool balanced_terms(string expression) {
	stack<char> terms;
	for (char c : expression) {
		if (isOpenTerm(c)) {
			terms.push(c);
		}
		else {
			if (terms.empty() || !matches(terms.top(), c)) {
				
				return false;
			}
			terms.pop();
		}

	}
	return terms.empty();

}

