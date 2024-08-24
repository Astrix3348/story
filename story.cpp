#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[10];
		for(int i=0; i<10; i++){
			cin >> s[i];
		}
		int count = 0;
		char c[10] = {'c','o','d','e','f','o','r','c','e','s'};
		for(int i=0; i<10; i++){
			if(s[i]!=c[i]){
			   count++;            
			}
		}

		cout << count << endl;

	}

	return 0;
}