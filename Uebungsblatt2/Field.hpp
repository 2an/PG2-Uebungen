//
//  Field.hpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#ifndef Field_hpp
#define Field_hpp

#include <stdio.h>
#include "xy_pair.hpp"

class Field{
private:
    char buffer[22][12] = {
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)186 ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,(char)186 },
        { (char)200 ,(char)205 ,(char)205 ,(char)205 ,(char)205 ,(char)205,
            (char)205 ,(char)205 ,(char)205 ,(char)205 ,(char)205 ,(char)188 } };
    
//    Stone* currStone = nullptr;
//    Stone* nexStone = nullptr;
    xy_pair pos = {0, 0};
    xy_pair size = {22, 12};
    
public:
    
    Field(){};
    ~Field(){};
    
    int     pos_x();
    int     pos_y();
    int     size_x();
    int     size_y();
    char    getBuffer(xy_pair);
};

#endif /* Field_hpp */
