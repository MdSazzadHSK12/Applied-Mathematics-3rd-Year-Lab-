/* Md.Sazzad Hossen Sakib
Student Id: 2111028170
Department of Applied Mathematics 
University Of Rajshahi */

//Program No 01 (Bisection)
//Solve the equation 3*x-cos(x)-1=0

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

#define t 0.000001

double f(double x)
{
	return 3*x-cos(x)-1;
}

void Bisection(double a,double b)
{
	if(f(a)*f(b)>=0)
	{
		cout<<"The equation has no root betwee the interval. "<<endl;
		cout<<endl;
	}
	else if(f(a)*f(b)<0)
	{
		//find root of equation
		double c=(a+b)/2.0;
		
		if(f(c)==0)
		{
			cout<<"The root of the equation is = "<<c<<endl;
			cout<<endl;
		}
		else
		{
			while(fabs(a-b)>=t)
			{
				if(f(a)*f(c)<0)
			    b=c;
		    	else if(f(b)*f(c)<0)
	    		a=c;
	    		c=(a+b)/2.0;
			}
			cout<<"The root of the equation = "<<c<<endl;
		    cout<<endl;
		}
	}
}

int main()
{
	cout.precision(3);
	cout.setf(ios::fixed);
	cout<<"Finding root using Bisection Method : "<<endl;
	cout<<endl;
	
	int z;
	double a,b;
	
	T:
		cout<<"Enter the interval [a,b] for the bisection method : "<<endl;
		cin>>a>>b;
		cout<<endl;
		
		Bisection(a,b);
		
	cout<<"Do you want to calculate again?If yes press 1 otherwise 0:"<<endl;
    cin>>z;
    if(z==1)
    goto T;
    
    return 0;
}
