#include <iostream>
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        cout<<"an alphabet";
    else
        cout<<"not an alphabet";

    return 0;
}
