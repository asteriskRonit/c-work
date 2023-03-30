#include<iostream>
using namespace std;
class mbll
{
  public:
  string name;
  void print()
  {
   cout << "Name is:"<<name<<"\n";
  }  
  private:
  int d;
  public:
  void setdata(int j)
  {
      d=j;
  }
  int getdata()
  {
      return d;
  }

};
typedef class mbll lp;
int main()
{
   lp obj;
   obj.name="Ronit";
   obj.print();
   obj.setdata(10);
   cout<<obj.getdata()<<"\n";
   return 0;
}
