//program to print pattern using static object
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;

    public:
        String()
        {
            str = new char[20];
        }

        String(int iSize)
        {
            str = new char[iSize];
        }
        ~String()
        {
            delete []str;
        }
        void Accept()
        {
            cout<<"Enter the string"<<endl;
            cin>>str;
        }
        void Display()
        {
            cout<<"String is :"<<endl;
        }

};
  
int main()
{
    String sobj(30);
    //String sobj();
    sobj.Accept();
    sobj.Display();

    return 0;
}