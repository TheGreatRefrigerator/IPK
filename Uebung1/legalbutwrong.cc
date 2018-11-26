#include <iostream>
#include <string>
using namespace std;

int main(){
	int n = 10;
	int sum = 0;
	for (int j = 1; j <= n; j++) {
		sum += j;
	}
	cout << sum << endl;
	cout << "should equal" << endl;
	cout << 10+9+8+7+6+5+4+3+2+1 << endl;
	return 0;
}
