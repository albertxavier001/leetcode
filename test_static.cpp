#include <iostream>
#include <vector>

using namespace std;

class C {
public:
	void f(int i) {
		static std::vector<int> v;
		v.push_back(i);
		cout << "push_back " << i << endl;
		for (auto e : v) {
			cout << e << " ";
		}
		cout << endl;
	}
};

int main () {
	C c;
	c.f(0);
	c.f(1);
	c.f(2);
	cout << "f.size = " << C::v.size() << endl;
	return 0;
}