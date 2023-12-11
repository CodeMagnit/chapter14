/* Write a program that overloads increment operator to work with user defined objects*/

#include<iostream>
using namespace std;
/*class*/
class increment
{
    private:
    int n;
    public:
    increment()
    {
        n=0;
    }
    void show();
    void operator++();
};
void increment::show()
{
    cout<<"Value of N "<<n<<endl;
}
void increment::operator++()
{
    n++;
}
/*Main Function*/
int main()
{
    increment s;
    s.show();
    ++s;
    s.show();
    return 0;
}