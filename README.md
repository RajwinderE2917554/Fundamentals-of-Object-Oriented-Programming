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
------------------------------------------------
Coder Name: Happy Yadav
#include <iostream>
using namespace std;
class divisible
{
    int n;

public:
    static int count;
    static int count2;
    void get()
    {

        while (n % 8 == 0)
        {
            cout << "enter the number " << count2 << ":" << endl;
            cin >> n;
            count2++;
            if(n%8==0){
            count++;
            }
            if (n % 8 != 0)
            {
                break;
            }
        }
    }

    void display()
    {
        cout << "You entered "<<count2-1<<" numbers out of which " << count<<" numbers are divisble by 8" << endl;
    }
};
int divisible::count = 0;
int divisible::count2 = 1;
int main()
{
    divisible d;
    d.get();
    d.display();

    return 0;
}
