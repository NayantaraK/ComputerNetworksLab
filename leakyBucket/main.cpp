#include <iostream>

using namespace std;

int main()
{
    int buffer;
    int rate;
    cout<<"\nEnter buffer size and output rate\n";
    cin>>buffer;
    cin>>rate;
    int ip;
    int cap=buffer;
    while(1){
        cout<<"\nEnter input rate:";
        cin>>ip;
        if(ip>cap)
            cout<<"Exceeds capacity\n";

        else {
            cap=cap-ip;
        if(buffer-cap<rate)
            cout<<"Output of "<<buffer-cap<<"\n";
        else{
            cap=cap+rate;
            cout<<"Output of "<<rate<<"\n";
            cout<<"In Buffer:"<<(buffer-cap);
        }

        }
    }
}
