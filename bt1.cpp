#include <iostream.h>
using namespace std;
int max(int x, int y )
{
	if (x > y)
	return x;
	else 
	return y;
}
int main()
  { 
    system("color A");
    tt:int a,b,c,d;
    system("cls");
    cout<<"Moi nhap a: ";cin>>a;
    cout<<"Moi nhap b: ";cin>>b;
    cout<<"Moi nhap c: ";cin>>c;
    cout<<"Moi nhap d: ";cin>>d; 
	cout<<"So lon nhat trong 4 so la: "<<max(max(a,b),max(c,d))<<endl;   
    char tl;
	cout<<"\nBan co muon tiep tuc khong (y/n) ?";
	cin>>tl;
	if ((tl=='y')||(tl=='Y')) goto tt;
	cout<<"\n";
}





