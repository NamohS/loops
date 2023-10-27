#include <iostream>

using namespace std;
main()
    {
        int input,output;
        output=0;
        cin>>input;
        while(input>0)
        {
        if(input&1)
        {output=output+1;
        
        }
        input=input>>1;
        }
        cout<<output<<endl;

    }
