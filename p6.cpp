#include<iostream>
using namespace std;
int main()
{
	 int a,area;
	cout<<"1.area of a circle\n 2.area of a rectangle\n 3.area of a triangle\n=";
	cin>>a;
	switch(a)
	{
		case 1:
			{
				int raduis;
					cout<<"raduis of a circle:"<<endl;
			cin>>raduis;
			area=3.14*raduis*raduis;
			cout<<"area of a circle ="<<area;
			break;
			}
			case 2:
				{
					int len, width;
					cout<<"lenght and width of a rectangle:"<<endl;
				cin>>len>>width;
			
				area=len*width;
				cout<<"area of a rectangle="<<area;
				break;
				}
				case 3:
					{
						int base,height;
						cout<<"base and height of a triangle:"<<endl;
						cin>>base>>height;
						area=0.5*base*height;
						cout<<"area of a triangle is="<<area;
						
						break;
						
					}
		default:
        {
		cout<<"quit:";
        }			
	}
	
}
