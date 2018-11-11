#include<iostream>
#include "routeFinder.h"
using namespace std;

int main()
{ Graph G;
	initGraph(G);
	string src,dest;
	int s,d,i=1;
	int ch=0;
	while(ch!=2)
	{
		cout<<"**Enter your choice**"<<endl;
		cout<<"1.Ride Now \n2.Exit "<<endl;
		cout<<"**Your choice "<<" ";
		cin>>ch;
		G.makeFalse();
		if(ch==1)
		{
			i=1;
			for(auto it=places.begin();it!=places.end();it++,i++)
			{
				cout<<i<<"."<<*it<<endl;

			}

			cout<<"* ENTER PICK-UP POINT"<<endl;
			cin>>s;
			i=1;
			for(auto it=places.begin();it!=places.end();it++,i++)
			{
				cout<<i<<"."<<*it<<endl;
			}
			cout<<"* ENTER DROP POINT"<<endl;
			cin>>d;
			src=places.at(s-1);
			dest=places.at(d-1);
			cout<<"**PICK UP LOCATION :"<<src<<endl;
			cout<<"**DROP AT :         "<<dest<<endl;
			
			double distance=G.findDist(dest,src);
			if(distance==-1)
			{
				cout<<"Sorry..Can't find place"<<endl;
				return -1;
			}
			cout<<distance<<endl;
			double cost=findFare(distance);
			cout<<"** Your bill"<<endl;
			cout<<"** Rupees   "<<cost<<endl;
		}
	}

}
