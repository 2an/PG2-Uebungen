//
//  Renderer.cpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#include "Renderer.hpp"
#include <iostream>

//Private
void Renderer::screenBufferAdd(Field* feld){
    for (int y = 0; y < feld->size_y(); y++) {
        for (int x = 0; x < feld->size_x(); x++) {
            screen_buffer[y + feld->pos_y()][x + feld->pos_x()] = feld->getBuffer({y, x});
        }//screen_buffer füllen
    }
}

void Renderer::screenBufferAdd(Stone* stein) // fehlt noch bissl was, bei pos_x von stein muss noch geprüft werden ob er schon am Ende des Spielfeld angekommen ist oder pos_x nicht größer als 7 erlauben.
{
    char c = -70;
    for (int y = 0; y < stein->size_y(); y++)
    {
        for (int x = 0; x < stein->size_x(); x++)
        {
            if (screen_buffer[y + stein->pos_y()][x + stein->pos_x()] == c)
            {
                screen_buffer[y + stein->pos_y()][x + stein->pos_x() + 1] = stein->getBuffer({y, x});
            }
//            else if(stein->pos_x() >= 7)
//            {
//                TODO:     std::cout <<"Das mag ich ned" << std::endl;
//            }
            else
            {
                screen_buffer[y + stein->pos_y()][x + stein->pos_x()] = stein->getBuffer({y, x});
            }
        }//Stein hinzufügen an der stelle pos_y und pos_x
    }
}

//Public:
void Renderer::Render(){
    
    screenBufferAdd(field);
    screenBufferAdd(stone);
    
    for (int y = 0; y < MAX_SCREEN_BUFFER_Y; y++) {
        for (int x = 0; x < MAX_SCREEN_BUFFER_X; x++) {
            std::cout << screen_buffer[y][x];
        }
        std::cout << std::endl;
    }
}

void Renderer::addObject(Field* feld){
    this->field = feld;
}

void Renderer::addObject(Stone* stein){
    this->stone = stein;
}
