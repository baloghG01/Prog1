/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include <iostream>

using namespace std;

struct B1
    {
    	virtual void vf() {cout<<"B1::vf"<<endl;}
    	void f() {cout<<"B1::f"<<endl;}
    	virtual void pvf()=0;
    };

 struct D1:B1
 {
 	virtual void vf() {cout<<"D1::vf"<<endl;}
 	void f(){cout<<"D1::f"<<endl;}
 	
 };

 struct D2:D1
 {
 	void pvf() {cout<<"D2::pvf"<<endl;}
 };



  struct B2
  {
  	virtual void pvf()=0;
  };

  struct D21:B2
  {
  	string asd="Je mange une orange";
  	void pvf() {cout<<asd<<endl;}

  };

  struct D22:B2
  {
  	int dsa=1000-7;
  	void pvf() {cout<<dsa<<endl;}
  };


  void f(B2& b) {b.pvf()};

int main()
{
    
    B1 b1;
    b1.f();
    b1.vf();
    D1 d1;
    d1.vf();
    d1.f();

    cout<<endl;

    B1& bref{d1};
    bref.vf();
    bref.f();

    cout<<endl;

    D2 d2;
    d2.f();
    d2.vf();
    d2.pvf();

    cout<<endl;

    D21 d21;
    d21.pvf();

    cout<<endl;

    D22 d22;
    
    d21.f();
    d22.f();





    



    return 0;
}
