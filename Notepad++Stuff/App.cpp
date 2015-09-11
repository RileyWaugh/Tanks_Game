#include "App.h"

App::App(sf::RenderWindow& fwindow)	//basic counstructor for App. App must be given a reference to a RenderWindow which it will send all over the place
{
	window = &fwindow;				//setting a pointer to a renderwindow
}

void App::setup()					//initialize all objects
{


}

void App::setMousePosition(sf::Vector2i fmousePosition) //sets mouse position from int main
{
	mousePosition = fmousePosition;
	
}

void checkEvents(Event& fevent)
{
	
	switch (fevent.type)
	{
		case sf::Event::Closed:
		{
			window->close();
			break;
		}
		case sf::Event::MouseMoved:
		{
			mousePosition = sf::Vector2i(event.mouseMove.x, event.mouseMove.y);
			break;
		}
		case sf::Event::MousButtonPressed:
		{
			if(fevent.mouseButton.button == sf::Mouse::Left)
			{
				MouseDataHelpers[0] = CLICKED;
			}
			if(fevent.mouseButton.button == sf::Mouse::Right)
			{
				MouseDataHelpers[1] = CLICKED;
			} 
			
		}
		
		
		
		
		
	}

	
}


void App::update()					//update all objects and menus
{


}

void App::draw()					//draw all objects
{


}

void App::getMouseData()			//retrieve mouse data
{

	MouseDataHelpers[2] = 0;
}

void App::getKeyboardData()			//retrieve keyboard data
{


}

void App::doPerFrame()				//do the above four functions every update cycle
{
	getKeyboardData();
	getMouseData();
	update();
	draw();
}