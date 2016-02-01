#include <iostream>

#define var 123
using namespace std;

int main() {

	int list[10];
	int* p;


	/*p = list;

	for (int x = 1; x <= 10; x++)
	{
		*p = x;
		p++;
		cout << &p << endl;
	}*/






	cout << var;






	int x;
	cout << "Type in a numebr to finish" << "\n";
	cin >> x;

	return 0;
}

class A{

public:
	A(int x) { y = x; }
	int get(int x)  { add(x); return y; }
	void add(const int x)  { y = y + x; }
private:
	int y;
};