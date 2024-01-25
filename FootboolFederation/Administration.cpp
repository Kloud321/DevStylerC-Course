//
// Created by damya on 23.1.2024 г..
//

#include "Administration.h"

Administration::Administration(string username, string password, string name,  string adress, string city, vector<Team> teams) :
User(username, password), name(name), adress(adress), city(city), teams(teams) {}

string Administration::getName() {
    return name;
}

void Administration::setName(string name) {
    Administration::name = name;
}

string Administration::getAdress() {
    return adress;
}

void Administration::setAdress(string adress) {
    Administration::adress = adress;
}

string Administration::getCity() {
    return city;
}

void Administration::setCity(string city) {
    Administration::city = city;
}

vector<Team> Administration::getTeams() {
    return teams;
}

vector<Schedule> Administration::getSchedules() {
    return this->schedules;
}

void Administration::addTeam(Team team) {
    teams.push_back(team);

}

void Administration::addSchedule(Schedule schedule) {
    this->schedules.push_back(schedule);

}

void Administration::addReferee(Refer ref) {
    this->refereeList.push_back(ref);

}
vector<Refer> Administration::getRefereeList() {
    return this->refereeList;
}

void Administration::modifyTeamCoach(string teamName, string newCoach) {
    for (int i = 0; i < teams.size(); i++) {
        if (teamName == teams[i].getName()) {
            // Found the team to change coach
            teams[i].setCoach(newCoach);
            return;  //
        }
    }
    cout << "There isn't such a team" << endl;
}

void Administration::removeTeam(Team team) {
    for (int i = 0; i < teams.size(); i++) {
        if (team.getName() == teams[i].getName()) {
            // Found the team to remove
            teams.erase(teams.begin() + i);
            return;  // Team removed, exit the function
        }
    }

    // If the loop completes, the team was not found
    cout << "Team " << team.getName() << " not found. Cannot remove." << endl;
}

void Administration::createSchedule(int roundOfLegue, string date, string hour, string stadium, string nameTeamHome, string nameTeamAway, Refer refer) {
    Schedule schedule(roundOfLegue, date, hour, stadium, nameTeamHome, nameTeamAway, refer);
    addSchedule(schedule);
    addScheduleToMap(schedule);
}


void Administration::addScheduleToMap(Schedule schedule) {
    schedulesByMonth[schedule.getMonth()].push_back(schedule);
}

void Administration::displaySchedulesByMonth()  {
    for (auto monthSchedules : schedulesByMonth) {
        cout << "Month: " << monthSchedules.first << endl;
        for (Schedule sch : monthSchedules.second) {
            sch.printInfo();
        }
    }
}

//void Administration::modifySchedule(Refer refer, string newDate, string NewRefer) {
//    for (int i = 0; i < schedules.size(); ++i) {
//        if(schedules[i].getRefer().
//    }
//    // Logic to modify the schedule
//}

void Administration::createRankings(Rankings rankings) {
    // Logic to create rankings
}

void Administration::modifyRankings(Rankings rankings) {
    // Logic to modify rankings
}
