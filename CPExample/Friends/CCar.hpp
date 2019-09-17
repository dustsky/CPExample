//
//  CCar.hpp
//  CPExample
//
//  Created by dustsky on 2019/9/17.
//  Copyright © 2019 dustsky. All rights reserved.
//

#ifndef CCar_hpp
#define CCar_hpp

#include <stdio.h>
#include "CDriver.hpp"

class CCar {
public:
    int getPrice();
private:
    int price;
    friend int mostExpensiveCar(CCar cars[],int total);
    friend void CDriver::modifyCar(CCar *pCar);
};

#endif /* CCar_hpp */
