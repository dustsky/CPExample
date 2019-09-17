//
//  CDriver.cpp
//  CPExample
//
//  Created by dustsky on 2019/9/17.
//  Copyright © 2019 dustsky. All rights reserved.
//

#include "CDriver.hpp"
#include "CCar.hpp"

void CDriver::modifyCar(CCar* pCar)
{
    pCar->price += 1000;  //汽车改装后价值增加
}
