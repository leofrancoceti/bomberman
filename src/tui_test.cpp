#include <ftxui/component/animation.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <experimental/random>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    int fotograma = 0;
    string reset;

    while (true)
    {
        /* code */
        int r = std::experimental::randint(0,255);
        int g = std::experimental::randint(0,255);
        int b = std::experimental::randint(0,255);

        Element personaje = spinner(21,fotograma);

        //INSTRUCCIONES PARA COLORES ESPECIFICOS
        //Decorator colorFondo = bgcolor(Color::Blue1);
        //Decorator colorTexto = color(Color::Red1);*/

        //ISNTRUCCIONES PARA COLORES RANDOMIZADOS RGB
        Decorator colorFondo = bgcolor(Color::RGB(r,g,b));
        Decorator colorTexto = color(Color::RGB(b,r,g));

        
        Element dibujo = border({
            hbox(personaje) | colorFondo 
        })| colorTexto ;


        Dimensions Alto = Dimension::Fixed(10);
        Dimensions Ancho = Dimension::Full();

        Screen pantalla = Screen::Create(Ancho,Alto);

        Render(pantalla,dibujo);
        pantalla.Print();
        reset = pantalla.ResetPosition();
        cout<<reset;
        this

        cout<<reset;

        fotograma++;

        this_thread::sleep_for(0.1s);
    }
    


    return 0;
}