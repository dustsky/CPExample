//
//  main.m
//  CPExample
//
//  Created by dustsky on 2019/9/17.
//  Copyright © 2019 dustsky. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "CCar.hpp"
#include "CDriver.hpp"
#include <iostream>
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        CCar *car = new CCar();
        CDriver *driver = new CDriver();
        driver->modifyCar(car);
        std::cout<<"改装1次后的价格"<<car->getPrice()<<std::endl;
        driver->modifyCar(car);
        std::cout<<"改装2次后的价格"<<car->getPrice()<<std::endl;
        NSLog(@"Hello, World!");
    }
    return 0;
}
