#include<iostream>
#include<Windows.h>
using namespace std;
main(){
	
	Sleep(200);
	cout<<"______                  ______________________"<<endl; 
	cout<<"______even number finder______________________"<<endl;
	Sleep(1000);
	system("cls");
	
	cout<<"enter a number limit ";
	int j;
	cin>>j;
	for(int i=0;i<=j;i++)
	{
		if(i%2==0)
		{
			Sleep(300);
			cout<<"even number"<<endl;
			cout<<i<<endl;
			Sleep(540);
			system("cls");
		}
	}
	for(int p=0;p<=j;p++)
	if(p%2==0){
		cout<<"the even number is "<<p<<endl;
		cout<<endl;
	}else{
		cout<<"the odd number is "<<p<<endl;
		cout<<endl;
	}
	
}
