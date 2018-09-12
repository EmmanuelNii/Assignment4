#include <iostream>
using namespace std;
int fun(int no1, int no2);
int main()
{
    int no1, no2;
    cout<<" G.C.D. finder\n";
    cout<<"---------------\n";
    cout<<"Enter two numbers: \n";
    cin>>no1>>no2;
    
    cout<<"The G.C.D. of "<<no1<<" and "<<no2<<" is "<<fun(no1, no2);
    
    return 0;
}

int fun(int no1, int no2)
{
    while(no2 != 0)
       return fun(no2, no1 % no2);
    if(no2 == 0)
       return no1;
}