#include<iostream>
using namespace std; 
int main(){
long amount,total,n,wd;
	char ch;
	cout<<"Enter Your Amount ";
	cin>>amount;
	total = amount;
	do{
		cout<<"Enter 1 for Withdrawa \n";
		cout<<"Enter 2 check balance \n";
		cout<<"Enter your choice : ";
		cin>>n;
		switch(n){
			case 1:
				cout<<"\nHow Much amount do you want to withdrawa";
				cin>>wd;
				if(wd<=total){
					cout<<"\nPlease wait.!!  \nYour Transaction is being processing ";
					total=amount-wd;
					cout<<"\nThank's for doing your Transcation :)";
				}
				else
				{
					cout<<"Sorry !!! you do not have enough credit :(\n";
					cout<<"Thank's for useing this Atm :)";
				}
			case 2:
				cout<<"\nYour Total balance is : "<<total;
				break;
		}
		cout<<"\nDo you want to do another transcation .?? Y/N";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
}
