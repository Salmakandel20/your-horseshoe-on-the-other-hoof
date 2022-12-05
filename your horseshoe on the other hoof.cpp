#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int x,count=4;
	  vector<int> arr;
	  vector<int>::iterator findItem;
	for(int i=0;i<4;i++){
		cin>>x;
		findItem=find(arr.begin(),arr.end(),x);
		if(findItem==arr.end()) {
		   arr.push_back(x);
		   count-=1;

		}
		
	}
    cout<<count;
}

