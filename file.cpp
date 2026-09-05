#include<iostream>
using namespace std;
class B;
class A
{
    int x;
   public : 
    A(){
        x = 10;
        
    }
    friend void swap(A &,B &);
    void display()
    {
        cout<<"A = "<<x<<endl;
    }

};
class B
{
    int y;
    public:
    B(){
        y = 20;

    }
    friend void swap(A &,B &);
    void display()
    {
        cout<<"B = "<<y<<endl;

    }
};
void swap(A &a,B &b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;

}
int main()
{
A obj1;
B obj2;

cout<<" BEFORE SWAP "<<endl;
obj1.display();
obj2.display();

swap(obj1,obj2);
cout<<" AFTER SWAP"<<endl;
obj1.display();
obj2.display();

return 0;
}