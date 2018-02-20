#include<iostream.h>
#include<conio.h>
void main()
{
 int Lc,Uc;
 char c;
 cout<<"Enter the number"<<endl;
 cin>>c;
 Lc=(c='a'||c='e'||c='i'||c='o'||c='u');
 Uc=(c='A'||c='E'||c='I'||c='o'||c='U');
 if(Lc||Uc)
 cout<<"Vowel";
 else
 cout<<"Consonant";
 return 0;
 }
