//
//  CCar.cpp
//  CPExample
//
//  Created by dustsky on 2019/9/17.
//  Copyright © 2019 dustsky. All rights reserved.
//

#include "CCar.hpp"

int mostExpensiveCar(CCar cars[], int total) {
    int tmpMax = -1;
    for (int i = 0; i<total; ++i)
        if (cars[i].price > tmpMax)
            tmpMax = cars[i].price;
    return tmpMax;
}

int CCar::getPrice() {
    return this->price;
}
