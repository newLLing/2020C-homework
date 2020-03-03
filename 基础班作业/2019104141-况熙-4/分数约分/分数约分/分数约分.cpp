
#include<iostream>

using namespace std;


int main()
{
    int a, b;
    cout<<("Please input a,b(a<b):"); 
    cin >> a;
    cin >> b;
    int i; int j;
    for ( i= 1; i <= a; i++)
    {
        
        if (a % i == 0 && b % i == 0)
            j = i;
            
    }
  cout<< (a /j )<<"/"<< (b /j);  
}

 