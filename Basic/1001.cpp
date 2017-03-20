#include<iostream>
using namespace std;

void cal(int n){
	static int count=0;
	if(n==1){
		cout<<count;
	}
	else{
		if(n%2==0){
			count++;
			cal(n/2);
			
		}
		else{
			count++;
			cal((3*n+1)/2);
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	
	
	cal(n);
	
	return 0;
}
