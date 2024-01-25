//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_SCHEDULE_H
#define FOOTBOOLFEDERATION_SCHEDULE_H

#include <string>
#include "Refer.h"
using namespace std;

class Schedule {
public:
    Schedule(int roundOfLegue, string date, string hour, string stadium, string nameTeamHome, string nameTeamAway, Refer refer);

    int getRoundOfLegue() const;

    void setRoundOfLegue(int roundOfLegue);

    const string &getDate() const;

    void setDate(const string &date);

    const string &getHour() const;

    void setHour(const string &hour);

    const string &getStadium() const;

    void setStadium(const string &stadium);

    const string &getNameTeamHome() const;

    void setNameTeamHome(const string &nameTeamHome);

    const string &getNameTeamAway() const;

    void setNameTeamAway(const string &nameTeamAway);

    const Refer &getRefer() const;

    void setRefer(const Refer &refer);

    void printInfo();

    string getMonth();

    vector<Schedule> getSchedules();



private:
    int roundOfLegue;
    string date;
    string hour;
    string stadium;
    string NameTeamHome;
    string NameTeamAway;
    Refer refer;
};


#endif //FOOTBOOLFEDERATION_SCHEDULE_H
