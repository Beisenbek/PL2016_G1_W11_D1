#include <set>
#include <iostream>
#include <ctype.h>

using namespace std;

int main(){

	string line;
	getline(cin,line);

	set<char> s;

	for(int i = 0; i < line.length(); ++i){
		if(isdigit(line[i])){
			s.insert(line[i]);
		}
	}

	if(!s.empty()){
		for(set<char>::iterator it = s.begin(); it != s.end(); ++it){
			cout << *it;
		}
	}else{
		cout << "NO";
	}


	return 0;
}