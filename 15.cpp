// Find the next lexicographically
// greater permutation of a word

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	bool val
		= next_permutation(s.begin(),
						s.end());
	if (val == false)
		cout << "Not Possible"
			<< endl;
	else
		cout << s << endl;
	return 0;
}

