//
//  Field.cpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#include "Field.hpp"


int Field::pos_x(){
    return pos.x;
}

int Field::pos_y(){
    return pos.y;
}

int Field::size_x(){
    return size.x;
}
int Field::size_y(){
    return size.y;
}

char Field::getBuffer(xy_pair coord){
    return buffer[coord.y][coord.x];
}
