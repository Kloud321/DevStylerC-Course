//
// Created by damya on 7.1.2024 г..
//
#include "carService.h"


Car::Car(string brand, string model, int year, double price)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
}

void Car::setCarBrand(string brand){

    this->brand = brand;

}

void Car::setCarModel(string model){

    this->model = model;

}

void Car::setCarYear(string year){

    this->year = year;
}

void Car::setCarPrice(string price){

    this->price = price;
}

// Getter for the brand
string Car::getCarBrand() {
    return brand;
}

// Getter for the model
int Car::getModel() {
    return model;
}

// Getter for the year
double Car::getCarYear() {
    return year;
}

// Getter for the price
double Car::getCarPrice() {
    return price;
}
