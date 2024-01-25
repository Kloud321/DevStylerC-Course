//
// Created by damya on 23.1.2024 г..
//

#ifndef FOOTBOOLFEDERATION_TEAM_H
#define FOOTBOOLFEDERATION_TEAM_H
#include <iostream>
#include <string>
#include "Rankings.h"
#include "vector"

using namespace std;

class Team {

public:
    Team(string name, string coach);

    string getName();

    void setName(string name);

    string getCoach();

    void setCoach(string coach);

    int getWins();

    int getLoses();

    int getDraws();

    int getPoints();

    Rankings getRankings(Rankings);

    void printInfo();

private:
    string name;
    string coach;
    int wins;
    int loses;
    int draws;
    int points;
    vector<Rankings> rankings;
};


#endif //FOOTBOOLFEDERATION_TEAM_H
