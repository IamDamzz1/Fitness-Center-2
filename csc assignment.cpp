#include <iostream>
using namespace std;

int main ()
{
	string memberStatus, gender;
	int id, ic, age;
	
	do
	{
		cout<<"Do you have a membership? (Yes/No):";
	    cin>>memberStatus;
        if (memberStatus=="Yes"||memberStatus=="yes")
        {
		  	cout<<"Enter membership ID: ";
			cin>>id;
	    }
	
	    else if (memberStatus=="No"||memberStatus=="no")
	    {
			cout<<"Please register.\n";
			cout<<"Identity card: ";
			cin>>ic;
			cout<<"Gender (Male/Female): ";
			cin>>gender;
			cout<<"Age: ";
			cin>>age;	
	    }	
	    
	    else
	    {
	    	cout<<"Please re-enter !\n";
		}
	}while(memberStatus!="Yes"&&memberStatus!="yes"&&memberStatus!="No"&&memberStatus!="no");
	
	return 0;	
	
}
