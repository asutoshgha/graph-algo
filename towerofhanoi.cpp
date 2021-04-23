#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,int from, int to,int aux){
	if(n == 1){
		cout<<from<<" "<<to<<"\n";
		return;
	}
	towerofhanoi(n-1,from,aux,to);
	cout<<from<<" "<<to<<"\n";

	towerofhanoi(n-1,aux,to,from);
}
int main(){

	int n;
	cin>>n;
	long long res=1<<n;
	cout<<res-1<<"\n";
	towerofhanoi(n,1,3,2);
}
