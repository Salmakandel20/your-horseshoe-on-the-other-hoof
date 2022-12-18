#include <iostream>
#include<set>
using namespace std;

int main(){
	int x;
	  set<int> arr;
	for(int i=0;i<4;i++){
		cin>>x;
		arr.insert(x);
		
		
	}
    cout<<(4-arr.size());
}
