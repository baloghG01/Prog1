#include "Simple_window.h"
#include "Graph.h"

using namespace Graph_lib;

int main()
{
	Point beginning {100,100};
	int win_x=800, win_y=1000;

	Simple_window win (beginning,win_x,win_y,"Christmas");

	int grid_x=100;
	int grid_y=100;

	Lines grid;

	for(int x=grid_x;x<win_x;x+=grid_x)
	{
		grid.add(Point{x,0},Point(x,win_y-200));
	}

	for(int y=grid_y;y<win_y;y+=grid_y)
	{
		grid.add(Point{0,y},Point(win_x,y));
	}	

	win.attach(grid);

	Vector_ref<Graph_lib::Rectangle> reds;

	for(int i=0;i<8;i++)
	{
		reds.push_back(new Rectangle {Point{i*100,i*100}, 100, 100});
		reds[i].set_fill_color(Color::red);
		win.attach(reds[i]);
	}

	Image h1 {Point{400,100}, "tms.jpeg"};
	win.attach(h1);
	Image h2 {Point{600,300}, "tms.jpeg"};
	win.attach(h2);
	Image h3 {Point{100,400}, "tms.jpeg"};
	win.attach(h3);
	Image h4 {Point{300,600}, "tms.jpeg"};
	win.attach(h4);

	Image jack {Point{0,0}, "jaks.jpeg"};
	win.attach(jack);

	win.wait_for_button();

	int rows_done=0;
	while(true)
	{
		for(int i=0;i<7;i++)
		{
			jack.move(100,0);
			win.wait_for_button();
		}
		if(rows_done==7)
		{
			rows_done=0;
			jack.move(-700,-700);
		}
		else
		{
			jack.move(-700,100);
			rows_done++;
		}
		win.wait_for_button();
	}
	

	win.wait_for_button();
}