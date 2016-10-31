#include <set>
#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;
	int k;

	set<int> s;

	for(int i = 0; i < x; ++i){
		cin >> k;
		s.insert(k);
	}

	cout << s.size();


	return 0;
}