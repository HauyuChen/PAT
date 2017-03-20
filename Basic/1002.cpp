#include<iostream>
using namespace std;

void pron(int n){
	switch(n){
		case 0:	cout<<"ling";	break;
		case 1:	cout<<"yi";	break;
		case 2:	cout<<"er";	break;
		case 3:	cout<<"san";	break;
		case 4:	cout<<"si";	break;
		case 5:	cout<<"wu";	break;
		case 6:	cout<<"liu";	break;
		case 7:	cout<<"qi";	break;
		case 8:	cout<<"ba";	break;
		case 9:	cout<<"jiu";	break;
	}
}

int main(){
	string s;
	cin>>s;
	int temp;
	int sum = 0;
	int a[100];
	int cnt = 0;
	
	int len = s.length();
	for(int i=0;i<len;i++){
		temp = s[i]-'0';
		sum += temp;
	}
	
	if(sum==0){
		pron(sum);
		return 0;
	}
	while(sum!=0){
		a[cnt++] = sum%10;
		sum = sum/10;
	}
	for(int i=cnt-1;i>=0;i--){
		pron(a[i]);
		if(i!=0){
			cout<<" ";
		}
	}
	
	return 0;
}
