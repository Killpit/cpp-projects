#include <iostream>
using namespace std;

int main() {

    /*
    - BMI Calculator
    - weight (kg) / height^2 (m)
    - underweight < 18.5
    - normal weight 18.5 < 24.9
    - Overweight 25 
    */

   float weight, height, bmi;
   cout << "Weight(kg), height(m): ";
   cin >> weight >> height;
   bmi = weight / (height * height);

   if(bmi <18.5) {
    cout << "Underweight" << endl;
   }
   else if(bmi > 25) {
    cout << "Overweight" << endl;
   }
   else {
    cout << "Normal Weight" << endl;
   }

   cout << " Your BMI is " << bmi << endl;

}