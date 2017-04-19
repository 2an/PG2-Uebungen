//
//  Renderer.hpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#ifndef Renderer_hpp
#define Renderer_hpp

#include <stdio.h>
#include "Field.hpp"
#include "Stone.hpp"

#define MAX_SCREEN_BUFFER_Y 22
#define MAX_SCREEN_BUFFER_X 12

class Renderer{
private:
    char screen_buffer[22][12];
    Field* field = nullptr;
    Stone* stone = nullptr;
    void screenBufferAdd(Field*);
    void screenBufferAdd(Stone*);
    
public:
    void Render();
    void addObject(Field*);
    void addObject(Stone*);
};

#endif /* Renderer_hpp */
