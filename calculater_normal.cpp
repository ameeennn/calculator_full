#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"\n\n***************\n\nthis is a calculator version very similar to normal app(not scientific) made by \033[1mMuhammed Ameen M\033[0m\n\ninsta id: ameee.nnn\n*\n*****  read this [important] ^ *********\n\n";
	cout<<'\n';
	float num1,num2,x;
	int choice,option;
	cout<<"enter  two numbers              (( in case of Tfunction enter  second number '0' ,enter in radian))";
	//cout<<"\n  you want to convert degree to radian(Yes=1/No=2)";
	//cout<<'\n';
	//#/cin>>option2;
	//#if(option2==1)
	//#{
	//#	cout<<"enter angle";
	//#	cin>>angle;
	//#	cout<<"angle(rad) is="<<3.14/(180/angle);
	//#}
	cout<<'\n';
	cin>>num1>>num2;
	cout<<"enter opration number : addition(+)= 1 , subtraction(-)= 2 , multiplicatin(*)= 3  , division(/)= 4 ,\n\t\t\t sin = 5 , cos=6 , tan=7 , cosec=8 , sec=9 , cot=10";  //operation selector 
	cout<<"\n";
	cin>>choice;
	if (choice>0&&choice<11)
	{
		switch(choice)
	{
		case 1:   //addition
		  x=num1+num2;
		  cout<<x<<'\n';
		  break;
		case 2:   //subtraction
		  x=num1-num2;
		  cout<<x<<'\n';
		  break;
		case 3:   //multiplication
		  x=num1*num2;
		  cout<<x<<'\n';
		  break;
		case 4:   //division
		  if(num2==0)
		  {
			 //if 2nd no. is 0 it will stop
			 cout<<"dont use 0 as second number";
		  }
		  else{
			  x=num1/num2;
			  cout<<x<<'\n';
		  }
		  break;
	    case 5:
	      cout<<sin(num1+num2)<<'\n';
	      break;
	    case 6:
	      cout<<cos(num1+num2)<<'\n';
	      break;
	    case 7:
	      cout<<sin(num1+num2)/cos(num1+num2)<<'\n';
	      break;
	    case 8:
	      cout<<1/sin(num1+num2)<<'\n';
	      break;
	    case 9:
	      cout<<1/cos(num1+num2)<<'\n';
	      break;
	    case 10:
	      cout<<cos(num1+num2)/sin(num1+num2)<<'\n';
	      break;
		   
	}
	cout<<"do you like to continue (Yes=1/No=2)";
	cout<<'\n';
	cin>>option;
	if(option==1)
	{
		cout<<"\n\nif you want continue with the result.enter first number as the result\n\n";
		main();
	}
	else
	{
		cout<<"thank you , have a nice day";
		return 0;
	}
}
else{
	return 0;
 }
}
		
	
     
    
