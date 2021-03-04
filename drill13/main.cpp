/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"


int main()
{
    using namespace Graph_lib;

    Point akatsuki {150,150};
    Simple_window win1 {akatsuki,600,400,"my window"};
    Line horizontal {akatsuki,Point{250,150}};
    Line vertical {Point{200,100},Point{200,200}};
    Closed_polyline neesan = {{120,320}, {170,210}, {300,250}, {300,300}, {130,270}};
    neesan.set_fill_color(Color::yellow);
    Open_polyline onichan = {{320,120}, {270,220}, {370,270}, {420,220}};
    onichan.set_color(Color::red);
    Rectangle shinigami{{300,100},100,160};
    shinigami.set_fill_color(Color::black);
    Text Madara{{100,300},"Watashi wa hogake desu"};
    Madara.set_color(Color::dark_magenta);
    Circle kira {{400,100},50};
    kira.set_color(Color::magenta);
    Ellipse yagami {{250,100},50,100};
    //a marks-ok valamiert nem mukodnek
    Image be {{0,0},"madara-san.jpeg"};


    



    
    
    win1.attach(be);
    win1.attach(shinigami);
    win1.attach(horizontal);
    win1.attach(vertical);
    win1.attach(neesan);
    win1.attach(onichan);
    win1.attach(Madara);
    win1.attach(kira);
    win1.attach(yagami);

    win1.wait_for_button();




    

}
