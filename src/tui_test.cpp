#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>
#include <string>


using namespace std;
using namespace ftxui;
int main(int argc, char const *argv[])
{
    const string texto = "Hola Mundo";
    Element textElement = text(texto);
    
    Element dibujo = hbox(textElement|border );

    Dimensions Alto = Dimension::Fixed(10);
    Dimensions Ancho = Dimension::Fixed(10);

    Screen pantalla = Screen::Create(Ancho,Alto);
    Render(pantalla,dibujo);
    pantalla.Print();
    cout<<endl;

    return 0;
}
