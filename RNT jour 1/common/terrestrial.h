//
// Created by josur on 14/05/2025.
//

#ifndef TERRESTRIAL_H
#define TERRESTRIAL_H

#include <iostream>

using namespace std;

namespace Penguin_friend {

    class Terrestrial {

    protected:
        double walk_speed = 0;

    public:
        explicit Terrestrial(double speed);
        virtual void walk() const;
        virtual ~Terrestrial() = default; // This destructor will be called and won't be overridden
        // by the class children thanks to the virtual type
    };

} // Penguin_friend

#endif //TERRESTRIAL_H
