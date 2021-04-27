#include <iostream>
#include <vector>

using namespace std;

template<typename T>
struct S
{
	S() {}

	S(T t)
	: val(t)
	{}

	S& operator=(const T& newValue) { val = newValue; return *this; }
	istream operator>>(T t) { cin >> val; }

	void set(T t) { val = t; }
	const T& get() const { return val; }

	T& getRef() {return val;}

private:
	T val;
};


template<typename T>
const T& get(S<T>& s)
{
	return s.get();
}


template<typename T>
void read_val(T& v)
{
	cin >> v;
}



int main()
{
	setlocale(LC_ALL,"HUN");
	S<int> szam;
	cout << "Irjon be egy számot!: "; read_val(szam.getRef());
	cout << szam.get() << endl;

	S<char> karakter;
	cout << "Irjon be egy karaktert!: "; read_val(karakter.getRef());
	cout << karakter.get() << endl;

	S<double> boszam;
	cout << "Irjon be egy nem egész számot!: "; read_val(boszam.getRef());
	cout << boszam.get() << endl;

	S<string> szoveg;
	cout << "Enter string: "; read_val(szoveg.getRef());
	cout << szoveg.get() << endl;

	S<vector<int>> vectory(vector<int>(10, 19));
	cout << "Irjon be 10 számot!: ";
	for (int i = 0; i < 10; ++i)
		read_val(vectory.getRef()[i]);
	for (int i : vectory.get())
		cout << i << ", ";

	cout << endl;

	}
