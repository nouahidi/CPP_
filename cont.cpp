#include <iostream>
#include <vector>
#include <map>

using namespace std;

int calc(string str) {
	int val = str[0] + str[1] + str[2];
	return (val);
}

int main(){
	int n, nb, car, len, flag;
	cin>>n;
	for (int i = 0; i < n; i++) {
		cin>>len;
		cin>>car;
		for (int j = 0; j < len; j++)
			cin>>nb;
		if (car % 2)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
}