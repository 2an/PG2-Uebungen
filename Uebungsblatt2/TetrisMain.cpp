//
//  main.cpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#include <iostream>
#include "Renderer.hpp"
#include "Field.hpp"
#include "Stone.hpp"


int main(int argc, const char * argv[]) {

    //Die Objekte erstellen
    Field feld;
    Stone stein;
    Renderer render;
    
    //Objekte den Renderer übergeben
    render.addObject(&feld);
    render.addObject(&stein);
    
    //Zeichnenfunktion vom Renderer
    render.Render();
    
    return 0;
}
