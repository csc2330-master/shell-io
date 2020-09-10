#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

int main(int argc, char* argv[]){
	int number;
	cout << "Number: ";
	cin >> number;
	if (number <= 0){
		cerr << "You dummy no negativity in my presence" << endl;
		return 1;
	}
	for (int i = 0; i < number; i++)
		cout << i << endl;

	return 0;
}
