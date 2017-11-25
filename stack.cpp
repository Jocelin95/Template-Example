#include "stack.h"
#include<iostream>
#include <string>
using namespace std;

int main() {
	stack<int> digits;
	stack<string> names;

	/*test push method*/
	digits.push(1);
	digits.push(2);
	digits.push(3);
	digits.push(4);
	digits.push(5);
	digits.push(6);
	
	names.push("1.Sandy");
	names.push("2.SpongeBob");
	names.push("3.Patrick");
	names.push("4.Squidward");
	names.push("5.Mr.Krabs");
	names.push("6.Gary");

	cout << digits.pop() << endl;
	cout << digits.pop() << endl;
	cout << digits.pop() << endl;
	cout << digits.pop() << endl;
	cout << endl;
	cout << names.pop() << endl;
	cout << names.pop() << endl;
	cout << names.pop() << endl;
	cout << names.pop() << endl;
	return 0;
}
