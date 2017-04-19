//
//  Stone.hpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#ifndef Stone_hpp
#define Stone_hpp

#include <stdio.h>
#include "xy_pair.hpp"

class Stone{
private:
    char buffer[4][4] = { { ' ',' ',' ',' ' },
                         { ' ',' ',' ',' ' },
                         { ' ','X','X',' ' },
                         { ' ','X','X',' ' } };
    xy_pair pos = {0,0};
    xy_pair size = {4,4};
    
public:
    
    Stone(){};
    ~Stone(){};
    
    int     pos_x();
    int     pos_y();
    int     size_x();
    int     size_y();
    char    getBuffer(xy_pair);
};

#endif /* Stone_hpp */
