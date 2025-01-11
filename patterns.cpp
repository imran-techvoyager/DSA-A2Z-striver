#include <iostream>
#include <iomanip>
using namespace std;

//always write in terms of functions
//since in coding platforms there is
//no int main() instead there are test cases

void print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}

int main()
{

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

int n;
cout<<"enter the number of stars you want to print:"<<endl;
cin>>n;
print1(n);

//this is test case example in cp
// int p;
// cin>>p;
// for (int q = 0; q < p; q++)
// {
//     int r;
//     cin>>r;
//     print1(r);
// }



return 0;
}