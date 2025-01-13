#include <iostream>
#include <iomanip>
using namespace std;

void print2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}

void print3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
}

void print4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        
        cout<<endl;
    }
    
}

void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        int y = (n-i)+1;

        for (int j = 0; j < y; j++)
        {
           cout<<"* ";
        }
        
        cout<<endl;
    }
    
}
void print6(int n){
    for (int i = 1; i <= n; i++)
    {
        int y = (n-i)+1;

        for (int j = 1; j <= y; j++)
        {
           cout<<j<<" ";
        }
        
        cout<<endl;
    }
    
}

void print7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }

}

//this doesnt work
// void print8(int n){
//     for(int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<"* ";
//             n--;
//         }
        
//         cout<<endl;
//     }
// }

void print9(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < (2*n)-(2*i)-1; j++)
        {
            cout<<"*";
        }
        

        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
    
        cout<<endl;

    }
}

void print10(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int star = i;
        if (i>n)
        {
            star = 2*n-i;
        }
        
        for (int j = 1; j <= star; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    
}

void print11(int n){
    for(int i = 0; i < n; i++){
        int start = 1;
        if (i%2==0)
        {
            start = 1;
        }
        else{
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
        
    }
}

void print12(int n){
    for (int i = 1; i <= n; i++)
    { 
       //number
      for (int j = 1; j <= i; j++)
      {
        cout<<j;
      }
      
       //space
       int space = 2*(n-i);
      for (int j = 1; j <= space; j++)
      {
        cout<<" ";
      }
      

       //number  
       for (int j = i; j >= 1; j--)
      {
        cout<<j;
      }
      cout<<endl;
    }
    

}

void print13(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}

void print14(int n){
    
    for (int i = 0; i < n; i++)
    {
        char alphabet = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
        
    }
    
}
void print15(int n){
    
    for (int i = 0; i < n; i++)
    {
        char alphabet = 'A';
        for (int j = 0; j < n-i; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
        
    }
    
}


int main()
{

int n;
cin>>n;
// print2(n);
// print3(n);
// print4(n);
// print5(n);
// print6(n);
// print7(n);
// print8(n);
// print9(n);
// print10(n);
// print11(n);
// print12(n);
// print13(n);
// print14(n);
// print15(n);
// print16(n);

return 0;
}