#include <iostream> 
using namespace std; 

double fun(double n){ 
    return (1.8*n)+32; 
} 

int main() 
{ 
    double c,f; 
    cout<<"Please enter a Celsius value : "; 
    cin>>c; 
    f=fun(c); 
    cout<<c<<" degrees Celsius is "<<f<<" degrees Fahrenheit."<<endl; 
    return 0; 
} 
