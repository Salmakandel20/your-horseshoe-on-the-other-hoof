#include <iostream>
#include<set>
using namespace std;

int main(){
	int x,count=4;
	  set<int> arr;
	for(int i=0;i<4;i++){
		cin>>x;
		arr.insert(x);
		
		
	}
    cout<<(4-arr.size());
}
