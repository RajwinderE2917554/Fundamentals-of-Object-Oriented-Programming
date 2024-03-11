#include<iostream>
using namespace std;
class num{
	public:
		num(){
			int num,valid=0;
			cout<<"Enter the number ";
			cin>>num;
			while(num%8==0){
				valid++;
				cout<<"Enter the number "<<endl;
				cin>>num;
			}
			
			cout<<"\nTotal "<<valid<<"numbers are valid numbers.";
		}
};

int main(){
	num var;
}