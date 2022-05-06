#include <string>
#include <iostream>

using namespace std;

bool IsKPeriodic(string str, int K) {
	if (str.length() == 0 || str.length() % K != 0) return false;

	for (int i = 0; i < K; ++i) {
		for (int j = i + K; j < str.length(); j += K) {
			if (str[j] != str[i]) return false;
		}
	}
	return true;
}

int main()
{
	int arr[]{ 1,2,3,4,5,6 };
	string s{ "abcdabcdabcdabcdabcd" };
	string s1{ "abcabcabcabc" };
	string s2{ "abcabcabcabcab" };
	string s3{ "abababab" };

	cout << IsKPeriodic(s, 4) << endl;
	cout << IsKPeriodic(s1, 3) << endl;
	cout << IsKPeriodic(s2, 2) << endl;
	cout << IsKPeriodic(s3, 1) << endl;

	return 0;
}