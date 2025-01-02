#include <iostream>
#include <string>
using namespace std;

class BuckyClass {
public:
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private:
	string name;

};

int main()
{
	BuckyClass bo;
	bo.setName("Sir Bucky Wallace");
	cout << bo.getName();
	return 0;
}