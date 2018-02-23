#include
using namespace std;
int main()
{
   int n, sum=0;
   cout<<"Enter the num"<<endl;
   cin>>n;
   if(n>=0)
   {
   int i=1;
     while(i<=n)
     {
	 sum=sum+i;
	 i++;
     }
     cout<<"Sum of first n natural numbers is: "<<sum;
   }
   }
   else
   {
   cout<<"the value is zero";
   }
  return 0;
  }
