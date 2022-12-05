#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	string s,inst;
	int ans=0;
	cin>>s>>inst;
	for(int i=0;i<inst.length();i++){
		if(s[ans]==inst[i]){
			ans+=1;
		}
	}
	ans+=1;
	cout<<ans;}
	
