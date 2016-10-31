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

	for(set<int>::iterator i = s.begin(); i!=s.end(); ++i){
		cout << *i << " ";
	}


	return 0;
}