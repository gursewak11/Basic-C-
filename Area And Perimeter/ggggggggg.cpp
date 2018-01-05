#include<iostream.h>
#include<conio.h>
int re();
int sq();
int ci();
int pa();
int tr();
int cal();
int fact();
void main()
{
int x;
	cout<<"Enter your choice\n1.Rectangle\n2.Squre\n3.Circle\n4.Pallogram\n5.Trangle\n6.Calculator\n7.Factorial\n";
	cin>>x;
	cout<<"Your choice is:"<<x;

			switch(x)
			{
			case 1: re();
			break;
			
			case 2: sq();
			break;
			
			case 3: ci(); 
			break;
			
			case 4: pa();
			break;
			
			case 5: tr();
			break;
			
			case 6: cal();
			break;
	
			case 7: fact();
			break;
					
			default:cout<<"Wrong Choice";
			break;
		
}
int getch();
}



int re()
{cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Rectangle.\n\n";
	int d;
	float a,b,c;
	
	
	cout<<"Enter Length of a Rectangle in m:\n";
	cin>>a;
	
	cout<<"Enter Breath of a Rectannglein m:\n";
	cin>>b;
	
	cout<<"\n\n\n\n";
	
	cout<<"Enter Your Choice:\n1.Area.\n2.Perimeter.\n";
	cin>>d;
	
	if (d==1)
	{
		c=(a*b);
	}
	else if (d==2)
	{
		c=(a+a+b+b);		
	}
	else
	{
		cout<<"Wrong Choice."; 
	}
	cout<<c<<""<<"m."<<endl;
	
	char z;
	cout<<"\n\n\nThank You.\n Please give a Remark.";
	cin>>z;
	cout<<"Your Remark:"<<z;
	int getch();
}

int sq()
{cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Square.\n\n";
		int d;
		float a,c;
	
	
	cout<<"Enter side of a Square in m:\n";
	cin>>a;
	
	cout<<"\n\n\n\n";
	
	cout<<"Enter Your Choice:\n1.Area.\n2.Perimeter.\n";
	cin>>d;
	if (d==1)
	{
		c=(a*a);
	}
	else if (d==2)
	{
		c=(a*4);		
	}
	else
	{
		cout<<"Wrong Choice."; 
	}
	cout<<c<<""<<"m."<<endl;

	char z;
	cout<<"\n\n\nThank You.\n Please give a Remark.";
	cin>>z;
	cout<<"Your Remark:"<<z;
	int getch();
}

int ci()
{cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Circle.\n\n";
			int d;
			float a,c;
	
	cout<<"Enter radius of a Circle in m:\n";
	cin>>a;
	
	cout<<"\n\n\n\n";
	
	cout<<"Enter Your Choice:\n1.Area.\n2.Perimeter.\n";
	cin>>d;
	if (d==1)
	{
		c=(3.14*a*a);
	}
	else if (d==2)
	{
		c=(2*3.14*a);		
	}
	else
	{
		cout<<"Wrong Choice."; 
	}
	cout<<c<<""<<"m."<<endl;
	
	char z;
	cout<<"\n\n\nThank You.\n Please give a Remark.";
	cin>>z;
	cout<<"Your Remark:"<<z;
	int getch();
}

int pa()
{	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Pallogram.\n\n";
	float a,h,c,b;
	int d;
	
	
	cout<<"Enter Hight of a Pallogram in m:\n";
	cin>>a;
	
	cout<<"Enter Breath of a Pallogram m:\n";
	cin>>h;
	
	cout<<"Enter Side of a Pallogram m:\n";
	cin>>b;
	cout<<"\n\n\n\n";
	
	cout<<"Enter Your Choice:\n1.Area.\n2.Perimeter.\n";
	cin>>d;
	
	if (d==1)
	{
		c=(a*h);
	}
	else if (d==2)
	{
		c=(a+a+b+b);		
	}
	else
	{
		cout<<"Wrong Choice."; 
	}
	cout<<c<<""<<"m."<<endl;
	
	char z;
	cout<<"\n\n\nThank You.\n Please give a Remark.";
	cin>>z;
	cout<<"Your Remark:"<<z;
	int getch();
}

int tr()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Trangle.\n\n";
	int d;
	float h,b,c,a,e;
	
	cout<<"Enter side 1 of a trangle in m:\n";
	cin>>a;
	
	cout<<"Enter side 2 of a trangle in m:\n";
	cin>>e;
	
	
	cout<<"Enter base of a trangle in m:\n";
	cin>>b;
	
	cout<<"Enter hight of a trangle m:\n";
	cin>>h;
	
	cout<<"\n\n\n\n";
	
	cout<<"Enter Your Choice:\n1.Area.\n2.Perimeter.\n";
	cin>>d;
	
	if (d==1)
	{
		c=(.5*h*b);
	}
	else if (d==2)
	{
		c=(a+b+e);		
	}
	else
	{
		cout<<"Wrong Choice."; 
	}
	cout<<c<<""<<"m."<<endl;
	
	char z;
	cout<<"\n\n\nThank You.\n Please give a Remark.";
	cin>>z;
	cout<<"Your Remark:"<<z;
	int getch();
}
int cal()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Calculator.\n\n";
	float a,b,sum,subtract,divide,multiply,s,sb,d,m;
char option;
	cout<<" Enter first number:\n"; 
	cin>>a;
	
	cout<<" Enter secound no:\n"; 
	cin>>b;	
	
	cout<<"Chose on of the following:-\n"<<endl;

	cout<<"Sum(s)\n"<<endl;
	cout<<"Subtract(a)\n"<<endl;
	cout<<"Multiply(m)\n"<<endl;
	cout<<"Divide(d)\n"<<endl;
	cin>>option;
if(option == 's') 
	{
	sum=(a+b);
	cout<<sum;
	}
else if(option == 'a') 
	{
	subtract=(a-b);
	cout<<subtract;
	}
else if(option == 'm') 
	{
	multiply=(a*b);
	cout<<multiply;
	}
else if(option == 'd') 
	{
	divide=(a/b);
	cout<<divide;
	}
else 
	{
	cout<<":p";
	}
int getch();
}
int fact()
{
	long a,i,c=1;
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nYour choice is Factorial.\n\n";
		cout<<"Enter a number to know its Factorial(!) \n";
		cin>>a;
		for (i=a;i>=1;i--)
		{ 
			c=c*i;
			
		}
		cout<<"\nYour numbers factorial is:"<<c<<"\n";
		int getch();
}
