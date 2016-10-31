#include <vector>
#include <iostream>

using namespace std;

int main(){

	int x;
	cin >> x;
	int k;

	vector<int> s;

	for(int i = 0; i < x; ++i){
		cin >> k;
		s.push_back(k);
	}

	for(vector<int>::iterator i = s.begin(); i!=s.end(); ++i){
		cout << *i << " ";
	}


	return 0;
}