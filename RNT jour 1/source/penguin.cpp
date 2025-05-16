//
// Created by josur on 14/05/2025.
//

#include "penguin.h"

namespace Penguin_friend {

    void Penguin::share_name() const {
        cout << "Bonjour ! Je m'appelle " << name << endl;
    }
    string Penguin::get_name() const {
        return this->name;
    }

    void Penguin::set_slide_speed(const int slide_speed) {
        this->slide_speed = slide_speed;
    }

    double Penguin::swim(const double distance) const {
        cout << "Je nage sur " << distance << " metres et je prends " << fixed << setprecision(2) << distance / static_cast<double>(swim_speed) <<
                " secondes." << endl;
        return distance / static_cast<double>(swim_speed);
    }
    double Penguin::walk(const double distance) const {
        cout << "Je marche sur " << distance << " metres et je prends " << fixed << setprecision(2) << distance / static_cast<double>(walk_speed) <<
                " secondes." << endl;
        return distance / static_cast<double>(walk_speed);
    }
    double Penguin::slide(const double distance) const {
        cout << "Je glisse sur " << distance << " metres et je prends " << fixed << setprecision(2) << distance /
                static_cast<double>(slide_speed) << " secondes." << endl;
        return distance / static_cast<double>(slide_speed);
    }

    void Penguin::olympic_run() {
        cout << "\n" << name << " réalise un parcours olympique :" << endl;
        const double slide_time_1 = slide(15);
        const double swim_time = swim(50);
        const double walk_time = walk(20);
        const double slide_time_2 = slide(30);
        this->olympic_time = {slide_time_1, swim_time, walk_time, slide_time_2};
    }
    void Penguin::olympic_results() {
        vector<Olympic_scoreboard> olympic_scores;

        for (const shared_ptr<Penguin> &penguin : penguins) {
            Olympic_scoreboard penguin_score;
            penguin_score.name = penguin->get_name();

            double final_time = 0;
            for (const double time : penguin->olympic_time) {
                final_time += time;
            }
            penguin_score.olympic_time = final_time;
            olympic_scores.push_back(penguin_score);

            cout << "\n" << penguin->get_name() << "\n\n" << \
                "Premiere glisse : " << penguin->olympic_time.at(0) << "\n" << \
                "Premiere nage : " << penguin->olympic_time.at(1) << "\n" << \
                "Premiere marche : " << penguin->olympic_time.at(2) << "\n" << \
                "Deuxieme glisse : " << penguin->olympic_time.at(3) << "\n" << \
                "\n" << "Temps final : " << fixed << setprecision(2) << final_time << "\n" << endl;

        }
        sort(olympic_scores.begin(), olympic_scores.end(), results_comparator);
        cout << "Podium !!! \n" << endl;

        for (const Olympic_scoreboard &winning_penguin : olympic_scores) {
            cout << "\nPingouin : " << winning_penguin.name << "\n" <<
                fixed << setprecision(2) << winning_penguin.olympic_time << " secondes ! \n" << endl;
        }
    }



} // Penguin_friend