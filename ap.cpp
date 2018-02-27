#include <iostream.h>
using namespace std;
int main()
{
	double a, d, n,i,sum,j;
  cout <<"Enter starting value ";
	cin >> a;
	cout <<"Enter difference ";
	cin >> d;
	cout <<"Enter a term ";
	cin >> n;
	cout<<endl;
  while (i=1,i<=n,i++)
  {
      while (a<=n)
     {        
        a=a+d;
        cout<<a<<" , "; 
     } 

}
return 0;
}
