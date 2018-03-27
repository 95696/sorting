#include<iostream>
using namespace std;
class rect
{

    int l,b,a;
public:
    void area()
    {

        cout<<"enter l&b";
        cin>>l>>b;
        a=l*b;
        cout<<"area="<<a;
    }
};
int main()
{

    rect *p;
    p=new rect();
   p->area;
    delete p;
}
