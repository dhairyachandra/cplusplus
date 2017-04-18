/* Q.   	Imagine a tollbooth with a class called toll Booth.
            The two data items are a type unsigned int to hold the total number of cars,
            and a type double to hold the total amount of money collected. A constructor initializes both these to 0.
            A member function called payingCar(), increments the car total and adds 050 to the cash total.
            Another function, called nopayCar(), increments the car total but ads nothing to the cash total.
            Finally, a member function called display the two totals.
            Include a program to test this class.
            This program should allow the user to push one key to count a paying car and another to count a nonpaying car.
            Pushing the ESC Key should cause the program to print out the total cars and total cash and then exit. */


#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
using namespace std;
char ESC=27;
class tollbooth
{
   public:
       unsigned int car;
       double money;

       tollbooth()
       {
           car=0;
           money=0;
       }

       void paying_car()
       {
           car+=1;
           money+=50;
       }

       void nopaying_car()
       {
           car+=1;
       }

       void display()
       {
           cout<<"\n\n\t\tNumber of Cars \t\t:\t"<<setw(2)<<setfill('0')<<car;
           cout<<"\n\n\t\tTotal Money Collected\t:\tINR "<<money<<"\n\n";
       }
};
 int main()
{
    tollbooth ob;
    char ch;
    cout<<"\n 1 Enter 1 for Paying Car.\n 2 Enter 0 for Non Paying Car.\n 3 Enter ESCAPE KEY to print the total. \n\n";
    do
    {
        cout<<"\n Enter your choice\t: ";
        ch=getche();

        if(ch=='1')
        {
            ob.paying_car();
        }
        else if(ch=='0')
        {
            ob.nopaying_car();
        }
        else if(ch!=ESC)
        {
            cout<<"\n\n\t\tWrong Choice Entered";
        }

    }while(ch!=ESC);

    ob.display();
       return 0;
}
