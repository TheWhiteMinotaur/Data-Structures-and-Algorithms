//
// Created by Kevin Smith on 1/21/2019.
//
#include"house.h"
#include <iostream>
#include <string>


using namespace std;

//Variables Used in the program
string colors;
int x,y = 0;


house :: house(){}

//Instantiates the variables for house.
house :: house (const string &ColorValue, int PriceValue,
       int Num_roomsValue) : color(ColorValue), price(PriceValue), num_rooms(Num_roomsValue){}

//Setter for Color.
void house :: SetColor(const string &ColorValue) {
    string colors = ColorValue;
    house::color = colors;
}

//Getter for Color.
string house ::GetColor() const {
    if(color.empty()){
        colors = "unknown";
        return colors;
    }
    return color;
}

//Setter for Price.
void house :: SetPrice(int PriceValue){
     x = PriceValue;
   house::price = x;
}

//Getter for Price.
int house ::GetPrice() const {
    if(x == 0) {
        return -1;
    }
    return price;
}

//Setter for Number of Rooms
void house ::SetNum_rooms(int Num_roomsValue) {
    y = Num_roomsValue;
    house::num_rooms = y;

}

//Getter for Number of Rooms
int house ::GetNum_rooms() const {
    if(y==0){
        return -1;
    }
    return num_rooms;
}

//Prints the info of the House.
void house ::PrintInfo() const {
     cout << GetColor() << " "<< GetPrice() << " " << GetNum_rooms() << endl;

}
