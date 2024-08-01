#include <iostream>
using namespace std;
void f(int h, int m){
    cout<<"Time: "<<h<<":"<<m<<endl;
}
int main(int argc, char **argv)
{
    int h,m;
    cout<<"Enter the number of hours: ";
    cin>>h;
    cout<<"Enter the number of minutes: ";
    cin>>m;
    f(h,m);
    return 0;
}
