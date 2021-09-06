#include<iostream>
using namespace std;

void toh(int n, int s, int d, int h) {
	int count = 0;
	if(n == 1) {
        cout << "move disk " << n << " from rod " << s << " to rod " << d << endl;
        count++;
        return;
    }
    toh(n-1, s, h, d);
    cout << "move disk " << n << " from rod " << s << " to rod " << d << endl;
    count++;
    toh(n-1, h, d, s);
    return;
}
int main()
 {
	int T;
	cin >> T;
	    int n;
	    cin >> n;
	    int s = 1;
	    int h = 2;
	    int d = 3;
	    int coount = 0;
	    toh(n, s, d, h);
	    cout << coount << endl;

	return 0;
}