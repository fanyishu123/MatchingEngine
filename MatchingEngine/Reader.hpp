//
//  Reader.hpp
//  MatchingEngine
//
//  Created by Shane Carey on 9/13/15.
//  Copyright © 2015 Shane Carey. All rights reserved.
//

#ifndef Reader_cpp
#define Reader_cpp

#include <string>
#include <fstream>

#include "Order.hpp"

class Reader {
public:
    Order *nextOrder();
    
};

#endif /* Reader_cpp */
