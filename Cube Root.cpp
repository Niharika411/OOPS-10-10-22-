#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int num;
    cout<<"Input a number : ";
    cin>>num;
    if(num<0)
    {
    	cout<<"INVALID INPUT";
	}
	else
	{
    cout<<"The cube root of the function is " <<cbrt(num);
    }
}
