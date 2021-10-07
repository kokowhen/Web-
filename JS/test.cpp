#include<iostream>
#include<string>
using namespace std;

int test1(int a1)
{
    a1++;
    return a1;
}

int test2(int a2)
{
    ++a2;
    return a2;
}

int main()
{
    int a = 10;
    int result1 = test1(a);
    int result2 = test2(a);
    cout<<"after a++,a = "<<result1<<endl;
    cout<<"after ++a,a = "<<result2<<endl;

    cout<<"after a++,a++ = "<<a++<<endl;
    cout<<"after ++a,++a = "<<++a<<endl;

    system("pause");
    return 0;
}
