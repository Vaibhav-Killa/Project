#include<iostream>
using namespace std;
int main()
{
	int choice;
	float num1,num2,num3,num4,num5;
	float tot1=0,tot2=0,tot3=0,tot4=0,tot5=0;
	cout<<"Please Select The Designated Number For Items To Add in Stock";
	cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ";
	cout<<"5-Adhesive for AAC Blocks ,6 to Exit";
	cin>>choice;
	while(choice!=6)
	{
	switch(choice)
	{
		case 1:
			cout<<"Add Quantity In Metric Tons :- ";
			cin>>num1;
			tot1=tot1+num1;
			cout<<"Total Quantity of Black wire Available :- "<<tot1<<"Tons"<<endl;
			break;
			case 2:
				cout<<"Add Quantity in kg :- ";
				cin>>num2;
				tot2=tot2+num2;
				cout<<"Total Quantity of Wire Nails Available :- "<<tot2<<"kg"<<endl;
				break;
				case 3:
					cout<<"Add Quantity in kg :- ";
					cin>>num3;
					tot3=tot3+num3;
					cout<<"Total Quantity of Shuttering Sheet Available :- "<<num3<<"kg"<<endl;
					break;
					case 4:
						cout<<"Add Quantity in Cubic meter (85pcs=1cm):- ";
						cin>>num4;
						tot4=tot4+num4;
						cout<<"Total Quantity of AAC Blocks Available :- "<<tot4<<"cm"<<endl;
	         			break;
						case 5:
							cout<<"Add Quantity in No. of Bags :- ";
							cin>>num5;
							tot5=tot5+num5;
							cout<<"Total Quantity of Adhesive Available :- "<<tot5<<"bag"<<endl;
							break;
							case 6:
								cout<<" You have exited it"<<endl;
								break;
}
	cout<<"Please Select The Designated Number For Items To Add in Stock";
	cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ,5-Adhesive for AAC Blocks ,6-Exit";
	cin>>choice;	
}
 int enquiry;
    cout<<"Do You Want To Proceed For Billing ?";
    cout<<"Type 1 if you want to procced or else type 0 if you want to add more quantity of items :";
    cin>>enquiry;
    while(enquiry!=1)
    {
    cout<<"Please Select The Designated Number For Items To Add in Stock";
	cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ";
	cout<<"5-Adhesive for AAC Blocks ,6 to Exit";
	cin>>choice;
    while(choice!=6)
    {
    	switch(choice)
	{
		case 1:
			cout<<"Add Quantity In Metric Tons :- ";
			cin>>num1;
			tot1=tot1+num1;
			cout<<"Total Quantity of Black wire Available :- "<<tot1<<"Tons"<<endl;
			break;
			case 2:
				cout<<"Add Quantity in kg :- ";
				cin>>num2;
				tot2=tot2+num2;
				cout<<"Total Quantity of Wire Nails Available :- "<<tot2<<"kg"<<endl;
				break;
				case 3:
					cout<<"Add Quantity in kg :- ";
					cin>>num3;
					tot3=tot3+num3;
					cout<<"Total Quantity of Shuttering Sheet Available :- "<<num3<<"kg"<<endl;
					break;
					case 4:
						cout<<"Add Quantity in Cubic meter (85pcs=1cm):- ";
						cin>>num4;
						tot4=tot4+num4;
						cout<<"Total Quantity of AAC Blocks Available :- "<<tot4<<"cm"<<endl;
	         			break;
						case 5:
							cout<<"Add Quantity in No. of Bags :- ";
							cin>>num5;
							tot5=tot5+num5;
							cout<<"Total Quantity of Adhesive Available :- "<<tot5<<"bag"<<endl;
							break;
							case 6:
								cout<<" You have exited it"<<endl;
								break;
			}
			cout<<"Please Select The Designated Number For Items To Add in Stock";
	cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ";
	cout<<"5-Adhesive for AAC Blocks ,6 to Exit";
	cin>>choice;
    }
    cout<<"Do You Want To Proceed For Billing ?";
    cout<<"Type 1 if you want to procced or else type 0 if you want to add more quantity of items :";
    cin>>enquiry;
	}
	float items,qun1,qun2,qun3,qun4,qun5;
	float press,rate1,rate2,rate3,rate4,rate5;
	float amt1=0,amt2=0,amt3=0,amt4=0,amt5=0;
    string name;
    cout<<"Press 1 to continue press 2 to exit";
    cin>>press;
    while(press!=2)
    {
    cout<<"Enter The Name of The Customer :- ";
    cin>>name;
    cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ";
	cout<<"5-Adhesive for AAC Blocks ,6 to Exit";
    cout<<"Select The Item :- ";
    cin>>items;
    while(items!=6)
    {
    	if(items==1)
    {
    	cout<<"Total Stock Available :- "<<tot1<<endl;
    	cout<<"Enter The quantity Purchased (in tons):- ";
    	cin>>qun1;
    	cout<<"Enter The Rate of The Black wire (in tons):- ";
    	cin>>rate1;
    	amt1=amt1+qun1*rate1;
    	tot1=tot1-qun1;
	}
	else if(items==2)
	{
		cout<<"Total Stock Available :- "<<tot2<<endl;
    	cout<<"Enter The quantity Purchased (in kg):- ";
    	cin>>qun2;
    	cout<<"Enter The Rate of The Black wire (in kg):- ";
    	cin>>rate2;
    	amt2=amt2+qun2*rate2;
    	tot2=tot2-qun2;
	}
	else if(items==3)
	{
		cout<<"Total Stock Available :- "<<tot3<<endl;
    	cout<<"Enter The quantity Purchased (in kg):- ";
    	cin>>qun3;
    	cout<<"Enter The Rate of The Black wire (in kg):- ";
    	cin>>rate3;
    	amt3=amt3+qun3*rate3;
    	tot3=tot3-qun3;
    }
    else if(items==4)
	{
		cout<<"Total Stock Available :- "<<tot4<<endl;
    	cout<<"Enter The quantity Purchased (in cm):- ";
    	cin>>qun4;
    	cout<<"Enter The Rate of The Black wire (in cm):- ";
    	cin>>rate4;
    	amt4=amt4+qun4*rate4;
    	tot4=tot4-qun4;
	}
	else if(items==5)
	{
		cout<<"Total Stock Available :- "<<tot5<<endl;
    	cout<<"Enter The quantity Purchased (per bag):- ";
    	cin>>qun5;
    	cout<<"Enter The Rate of The Black wire (per bag):- ";
    	cin>>rate5;
    	amt5=amt5+qun5*rate5;
    	tot5=tot5-qun5;
	}
	cout<<"1-Black Wire ,2-Wire Nails ,3-Shuttering Sheets ,4-AAC Blocks ";
	cout<<"5-Adhesive for AAC Blocks ,6 to Exit";
    cout<<"Select The Item :- ";
    cin>>items;
	}
	cout<<"Your Total bill :- "<<qun1*rate1+qun2*rate2+qun3*rate3+qun4*rate4+qun5*rate5<<endl;
	cout<<"Press 1 to See the items press 2 to exit";
    cin>>press;
	}
	cout<<"Thank You For purchasing !!"<<endl;
	return 0;
}
