#include<iostream>
using namespace std;
class publication
{
    public:
    string a;
    float x;
    void getData()
    {
        cout<<"Please Enter Title and Price"<<endl;
        cin>>a>>x;
    }
        void putData()

    {
        cout<<"Name of book = "<<a<<endl;
        cout<<"Price of the book = "<<x<<endl;
    }

};
class book: public publication
{
   public:
   int y;
    void getData()
    {
        publication::getData();
        cout<<"Please Enter Page count"<<endl;
        cin>>y;
    }
        void putData()

    {
        publication::putData();
        cout<<"The total page of the book = "<<y<<endl;
    }

};
class tape: public publication
{
    public:
  float z;
    void getData()
    {
        cout<<"Please Enter Playing time"<<endl;
        cin>>z;
    }
        void putData()

    {
        cout<<"The phaying time of the tape = "<<z<<" "<<"minutes"<<endl;
    }


};

int main()
{
    book obj;
    obj.getData();
    tape ob;
    ob.getData();
    obj.putData();
    ob.putData();
    return 0;

}
