#include <iostream>
#include<fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
    float count = 0;
    float sum = 0;
    float sum_of_square = 0;
    float Mean;
    float stand_d;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += stof(textline);
        sum_of_square += pow(stof(textline),2);
        count++;

    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    Mean = sum/count;
    stand_d = (1/count)*(sum_of_square)-pow(Mean,2);
    cout << "Standard deviation = " << sqrt(stand_d);
}