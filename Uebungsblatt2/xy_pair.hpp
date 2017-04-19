//
//  xy_pair.hpp
//  Tetris
//
//  Created by Tuan Ngo on 18.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#ifndef xy_pair_hpp
#define xy_pair_hpp

#include <stdio.h>
#include <iostream>

struct xy_pair{
    int x;
    int y;
    
    xy_pair(int y, int x)
    {
        if(x >= 0 || y >= 0)
        {
            this->x = x;
            this->y = y;
        }
        else
        {
            std::cout << "Bitte keine negativen Werte für x und y" << std::endl;
        }

    }
};


#endif /* xy_pair_hpp */
