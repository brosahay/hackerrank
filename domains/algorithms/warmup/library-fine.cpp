#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int actual_d,actual_m,actual_y;
	int expected_d,expected_m,expected_y;
	cin>>actual_d>>actual_m>>actual_y;
	cin>>expected_d>>expected_m>>expected_y;
	int rate=15,sum=0;
	if(actual_y>expected_y){
		sum=10000;
	}
	else
	{
		if(expected_m==actual_m){
			if(actual_d>expected_d){
				sum=15*(actual_d-expected_d);
			}
		}
		else if(actual_m>expected_m && actual_y==expected_y){
			sum=500*(actual_m-expected_m);
		}
	}
	cout<<sum<<endl;
	return 0;
}
