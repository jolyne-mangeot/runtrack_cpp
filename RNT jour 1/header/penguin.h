//
// Created by josur on 14/05/2025.
//

#ifndef PENGUIN_H
#define PENGUIN_H

#include "utils.h"

namespace Penguin_friend {

    class Penguin final : public Aquatic, public Terrestrial {
    protected:
        string name;
        int slide_speed;
        vector<double> olympic_time;

    public:
        static vector<shared_ptr<Penguin>> penguins;

        Penguin(const int swim_speed, const int walk_speed, string name):
            Aquatic(swim_speed),
            Terrestrial(walk_speed), name(move(name)){};

        Penguin(const Penguin &other_penguin):
        Aquatic(other_penguin),
        Terrestrial(other_penguin), name(move(name)) {};

        ~Penguin() = default;

        void share_name() const;
        string get_name() const;

        void set_slide_speed(int slide_speed);

        double swim(double distance) const;
        double walk(double distance) const;
        double slide(double distance) const;

        void olympic_run();
        static void olympic_results();
    };

} // Penguin_friend

#endif //PENGUIN_H
