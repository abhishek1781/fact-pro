#include<iostream>
using namespace std;
int fact(int d){
	if(d>1)
	return d*fact(d-1);
	else
	return 1;
}
int main(){
int a,s;
cout<<"plz enter any number";
cin>>a;
s=fact(a);
cout<<"factorial is "<<s<<endl;
return 0;
}

