#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x ,check;
    float y,z;
    cout<<"enter acc bal.";
    cin>>y;
    cout<<"enter withdraw.";
    cin>>x;
    check = x%5;
    if(x>0 && x<=2000 && y>=0 && y<=2000 && x<y && check == 0){
        z=y-0.50-x;
        cout<<fixed<<setprecision(2)<<z;        
    }
    else if(x>y){
        cout<<fixed<<setprecision(2)<<y;
    }
    else if(check != 0){
        cout<<fixed<<setprecision(2)<<y;
    }
    else
    {
        exit(0);
    }
    return 0;
}