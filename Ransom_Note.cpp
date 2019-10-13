#include<iostream>
#include<unordered_map>
#include<stdio.h>
#include<sstream>

using namespace std;

unordered_map<string,int> get_frequencies(const string str) {

	unordered_map<string, int> wordFreq;
	stringstream s(str);
	string word;

	while (s >> word) {
		wordFreq[word]++;
	}

	return wordFreq;
}



bool compare(string note, string magazine) {

	unordered_map<string, int> noteFreq;
	unordered_map<string, int> magFreq;

	noteFreq = get_frequencies(note);
	magFreq = get_frequencies(magazine);

	for (auto it = noteFreq.begin(); it != noteFreq.end(); ++it) {
		auto it2 = magFreq.find(it->first);
		if (it2 == magFreq.end() || magFreq[it->first] < it->second) return false;
	}

	return true;

}
