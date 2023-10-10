#include <iostream>
using namespace std;
main()
{
    int a,i ;
    cout<<"enter a number:";
    cin>>a;
    i=1;
    do
    {
        cout<<a<<"x"<<i<<"= "<<i*a<<endl;
        i++;
    }while(i<=20);
}
