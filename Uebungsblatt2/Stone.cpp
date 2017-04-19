//
//  Stone.cpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#include "Stone.hpp"

int Stone::pos_x(){
    return pos.x;
}

int Stone::pos_y(){
    return pos.y;
}

int Stone::size_x(){
    return size.x;
}

int Stone::size_y(){
    return size.y;
}

char Stone::getBuffer(xy_pair coord){
    return buffer[coord.y][coord.x];
}
