#include <iostream>
using namespace std;

double f(double n){
    return (63240*n);
}
int main(int argc, char **argv)
{
    
    double g,e;
    cout<<"Enter the number of light years: ";
    cin>>g;
    e=f(g);
    cout<<g<<" light yaers = "<<e<<" astronomicl units.";
    return 0;
}
