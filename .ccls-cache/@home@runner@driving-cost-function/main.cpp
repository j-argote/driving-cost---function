#include <iostream>
#include <iomanip>
using namespace std;

const double TEN_MILES = 10.0;
const double FIFTY_MILES = 50.0;
const double FOUR_HUNDRED_MILES = 400.0;

//define function DrivingCost(); parameters milesPerGallon, dollarsPerGallon, milesDriven;
//return dollar cost to drive those miles; all types are double
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven){
  double dollarCost;
  dollarCost = (dollarsPerGallon * milesDriven) / milesPerGallon;
  return dollarCost;
}

int main(){
  double carMPG, gasPrice;
  //read in 2 integers; userMiles and gasPrice
  cin >> carMPG >> gasPrice;
  //call DrivingCost()
  //output the gas cost for 10 miles, 50 miles and 400 miles; with 2 decimal points
  cout << fixed;
  cout << setprecision(2);
  cout << DrivingCost(carMPG, gasPrice, TEN_MILES) << " "
    << DrivingCost(carMPG, gasPrice, FIFTY_MILES) << " "
    << DrivingCost(carMPG, gasPrice, FOUR_HUNDRED_MILES) << endl;

  return 0;
}