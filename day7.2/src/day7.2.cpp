#include<cstring>
#include <iostream>
using namespace std;
class Exception {
private:
	string msg;
public:
	Exception(string msg) {
		this->msg = msg;
	}
	string getmsg(void) {
		return this->msg;
	}
};
class Array {

private:
	int size;
	int *arr;

public:
	Array(void) {
		this->size = 0;
		this->arr = NULL;

	}

	Array(int size) {
		this->size = size;
		this->arr = new int[this->size];
	}

	Array(const Array &other) {
		this->size = 10;
		this->arr = new int[this->size];
		memcpy(this->arr, other.arr, this->size * sizeof(int));
	}

	int& operator[](int index) {
		if (index >= 0 && index < size)
			return this->arr[index];
		throw Exception("Array index out of bound exception\n");
	}

	~Array(void) {
		if (this->arr != NULL) {
			delete[] this->arr;
			this->arr = NULL;

		}
	}
	friend istream& operator>>(istream &cin, Array &other);
	friend ostream& operator<<(ostream &cout, Array &other);
};

istream& operator>>(istream &cin, Array &other) {
	for (int index = 0; index < other.size; ++index) {
		cout << "enter the element:\n";
		cin >> other.arr[index];
	}
	return cin;
}
ostream& operator<<(ostream &cout, Array &other) {
	for (int index = 0; index < other.size; ++index) {
		cout << other.arr[index] << endl;

	}
	return cout;
}

int main() {

	Array a1(20);
	Array a100(a1);

	cin >> a1;
	cout << a1;
	cout << a100;
	return 0;
}

int main2() {

	Array a1 = (4);
	cin >> a1;
	a1[1] = 200;
	a1[2] = 20;
	int element = a1[2];
	cout << element << endl;
	return 0;
}

int main1() {

	Array a1 = (4);

	cin >> a1;

	int element = a1[2];
	cout << element << endl;

	return 0;
}
