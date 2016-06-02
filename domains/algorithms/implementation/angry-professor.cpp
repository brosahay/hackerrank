#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int T,N,K;
	cin>>T;
	int tmp,count,flag;
	while(T--){
		N=K=0;
		cin>>N>>K;
		count=tmp=0;
		flag=1;
		while(N--){
			cin>>tmp;
			if(tmp<=0)
				count++;
			if(count==K){
				flag=0;
			}
		}
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
}