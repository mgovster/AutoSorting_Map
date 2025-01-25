#include <iostream>
#include <list>
#include <map>

using namespace std;


template <class X> class my_comp_class {
public:
	bool operator()(const list<X>*& l1, const list<X>*& l2) {
		return *l1.size > * l2.size;
	}
};
template <class X> class my_c1 {
public:
	bool operator()(const pair<int, string>& p1, const pair<int, string>& p2) {
		return p1.first > p2.first;
	}
};
template <class X> class my_cc {
public:
	bool operator()(const X& f, const X& g) const {
		return f > g;
	}
};



int main() {
	//my_cc<int> my_comp_class;
	//map<string, int, my_cc<int>> DB1{ {"one",1} };
	//my_cc<int> gg;
	map<int, string, my_cc<int>> DB{ {3,"paul"}, {4,"bob"}, {2, "yosef"}, {8,"Hermione"} };
	for (auto i : DB) {
		cout << i.first << ", " << i.second << endl;
	}

	
	getchar();
	return 0;
}
