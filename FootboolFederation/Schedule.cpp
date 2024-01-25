//
// Created by damya on 23.1.2024 г..
//

#include "Schedule.h"

Schedule::Schedule(int roundOfLegue, string date, string hour, string stadium, string nameTeamHome, string nameTeamAway, Refer refer) : roundOfLegue(
        roundOfLegue), date(date), hour(hour), stadium(stadium), NameTeamHome(nameTeamHome), NameTeamAway(nameTeamAway), refer(refer) {}

int Schedule::getRoundOfLegue() const {
    return roundOfLegue;
}

void Schedule::setRoundOfLegue(int roundOfLegue) {
    Schedule::roundOfLegue = roundOfLegue;
}

const string &Schedule::getDate() const {
    return date;
}

void Schedule::setDate(const string &date) {
    Schedule::date = date;
}

const string &Schedule::getHour() const {
    return hour;
}

void Schedule::setHour(const string &hour) {
    Schedule::hour = hour;
}

const string &Schedule::getStadium() const {
    return stadium;
}

void Schedule::setStadium(const string &stadium) {
    Schedule::stadium = stadium;
}

const string &Schedule::getNameTeamHome() const {
    return NameTeamHome;
}

void Schedule::setNameTeamHome(const string &nameTeamHome) {
    NameTeamHome = nameTeamHome;
}

const string &Schedule::getNameTeamAway() const {
    return NameTeamAway;
}

void Schedule::setNameTeamAway(const string &nameTeamAway) {
    NameTeamAway = nameTeamAway;
}

const Refer &Schedule::getRefer() const {
    return refer;
}

void Schedule::setRefer(const Refer &refer) {
    Schedule::refer = refer;
}

string Schedule::getMonth()  {
    return date.substr(5, 2);
}



void Schedule::printInfo() {
    cout << "-----------------" << endl;
    cout << "League round: " << this->getRoundOfLegue() << endl;
    cout << "Match Date: " << this->getDate() << endl;
    cout << "Match Hour: " << this->getHour() << endl;
    cout << "Stadium: " << this->getStadium() << endl;
    cout << "Home team: " << this->getNameTeamHome() << endl;
    cout << "Away team: " << this->getNameTeamAway() << endl;
    cout << "Referee: " << this->refer.getFirstName() << " " << this->refer.getLastName() << endl;
    cout << "----------------------------" << endl;
}

