#include <set>
#include <iostream>

using namespace std;

int main(){


	string line;

	getline(cin, line);
	set<char> s;
	s.insert('.');
	s.insert(',');
	s.insert(';');
	s.insert(':');
	s.insert('!');
	s.insert('?');

	int cnt = 0;

	for(int i = 0; i < line.length(); ++i){
		if(s.find(line[i]) != s.end()){
			cnt++;
		}
	}

	cout << cnt;

	return 0;

}