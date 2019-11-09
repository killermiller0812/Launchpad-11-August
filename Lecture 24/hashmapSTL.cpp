#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

	unordered_map<string,int> m;

	m.insert(make_pair("US",12));
	m.insert(make_pair("UK",123));
	m.insert(make_pair("India",140));
	m.insert(make_pair("Pak",120));

	m["Mango"] = 70;

	pair<string,int> p("New Country",156);
	m.insert(p);

	for(auto node:m){
		cout<<node.first<<" "<<node.second<<endl;
	}

	return 0;
}