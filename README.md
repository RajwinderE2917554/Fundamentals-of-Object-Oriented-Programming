# Fundamentals-of-Object-Oriented-Programming
1.	In the field of programming, Iteration Statements are helpful when we need a specific task in repetition. They’re essential as they reduce hours of work to seconds. An iteration is a sequence of instructions that is continually repeated until a certain condition is reached. As per given statement you need to implement the task using iterations. 
A number is said to be valid if it is divisible by 8. Develop a logic that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. 
Sample Input and Output:
Enter the number
8
Enter the number
16
Enter the number
96
Enter the number
6
Total 3 numbers are valid numbers. 

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
