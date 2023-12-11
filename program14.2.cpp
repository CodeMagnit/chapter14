/*Write a program that overloads increment operator to work with user-defined objects. The overloaded function should return an object after incrementing the data memeber*/
#include<iostream>
using namespace std;
//Class
class count
{
    private:
    int n;
    public:
    count();
    void show();
    count operator++();
};
count::count()
{
    n=0;
}
void count::show()
{
    cout<<"value of n is = "<<n<<endl;
}
count count::operator++()
{
    count temp;
    temp.n=n+1;
    return temp;
}
int main()
{
    count s;
    s.show();
    ++s;
    s.show();
    return 0;
}