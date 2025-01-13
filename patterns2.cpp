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

//better way is to run loop of character
void printp(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A'+i; ch++)
        {
            cout<<ch<<" ";
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

//better way is to run loop of character
void printpp(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A'+ (n-i-1); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

void print16(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A'+ i;
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

void print17(int n){
    for (int i = 0; i < n; i++)
    {
        //space
    for (int l = 0; l <= n-i-1; l++)
    {
        cout<<" ";
    }
    
    //char
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for (int k = 1; k <= (2*i)+1; k++)
    {
        cout<<ch;
        if (k<=breakpoint)
        {
            ch++;
        }
        else{
            ch--;
        }
        
    }
    
    //space
    for (int j = 0; j <= n-i-1; j++)
    {
        cout<<" ";
    }

    cout<<endl;
    }
    
    
}

void print18(int n){
      for(int i = 0; i < n; i++){
              for(char ch = 'E'- i; ch <= 'E'; ch++){
                cout<<ch<<" ";
              }
              cout<<endl;
      }

}

void print19(int n){
      for (int i = 0; i < n; i++)
      {
        //stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        
        //space
        for (int j = 1; j <= 2*i; j++)
        {
            cout<<" ";
        }
        
        //stars
        for (int k = n-i; k >= 1; k--)
        {
            cout<<"*";
        }
        cout<<endl;

      }
      for (int i = 1; i <= n; i++)
    {
        //stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        //space
        for (int j = 0; j < 2*n-2*i; j++)
        {
            cout<<" ";
        }
        //stars
        for (int k = i; k >= 1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
// void print19_1(int n){
//     for (int i = 1; i <= n; i++)
//     {
//         //stars
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         //space
//         for (int j = 0; j < 2*n-2*i; j++)
//         {
//             cout<<" ";
//         }
//         //stars
//         for (int k = i; k >= 1; k--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
    
// }

void print20(int n){
    for (int i = 1; i <= n; i++)
    {
        //stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        //space
        for (int k = 1; k <= 2*n-2*i; k++)
        {
            cout<<" ";
        }
        //space
        for (int l = i; l >=1 ; l--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}
void print20_1(int n){
    for (int i = 1; i <= n-1; i++)
    {
         for (int j = 1; j <= n-i; j++)
         {
            cout<<"*";
         }
         for (int k = 1; k <= 2*i; k++)
         {
            cout<<" ";
         }
         for (int l = n-i; l >= 1; l--)
         {
            cout<<"*";
         }
         cout<<endl;
         
    }
    
}
void print20ex(int n){
    int space = 2*n-2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        //stars
        int stars = i;
        if (i>n)
        {
            stars = 2*n-i;
        }
        
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
        //spaces
        for (int k = 1; k <= space; k++)
        {
            cout<<" ";
        }
        //stars
        for (int l = stars; l >= 1; l--)
        {
            cout<<"*";
        }
        cout<<endl;
        if (i<n)
        {
            space -= 2;
        }
        else{
            space += 2;
        }
        
        
    }
    
}

void print21(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }

            cout<<endl;
        
    }
    

}

void print22(int n){
      for (int i = 0; i < 2*n-1; i++)
      {
        for (int j = 0; j < 2*n-1; j++)
        {
           int top = i;
           int left = j;
           int right = 2*n-2 -j;
           int bottom = 2*n-2 - i; 
           cout<<(n - min(min(top,bottom), min(left, right)));
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
// printp(n);
// print15(n);
// printpp(n);
// print16(n);
// print17(n);
// print18(n);
// print19(n);
// print19_1(n);
// print20(n);
// print20_1(n);
// print20ex(n);
// print21(n);
// print22(n);

return 0;
}