/*write a program that overloads postfix increment operator to work with user-defined objects*/
#include<iostream>
using namespace std;
//class
class count
{
    private:
    int n;
    public:
    count()
    {
        n=0;
    }
    void show()
    {
        cout<<"Value of n = "<<n<<endl;
    }
    count operator ++(int)
    {
        count temp;
        temp.n=n++;
        return (temp);
    }

};
int main()
{
    count c,c1;
    c.show();
    c1=c++;//c.operator++();
    c1.show();
    c.show();
    return 0;
}