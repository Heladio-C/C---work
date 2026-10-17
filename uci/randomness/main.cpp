#include <random>
#include <iostream>


int main(){


double mean = 10.0;
double stddev = 3.0;


//constant results 
const unsigned int seed = 123;
std::uniform_int_distribution <int> dist {1, 6};
std::normal_distribution<double> normal_distro{mean, stddev};

// completely random
std::random_device rd;

std::default_random_engine gen(rd());

//fixed seed
//std::default_random_engine gen(seed);

int one_total = 0, two_total = 0, three_total = 0, four_total = 0, five_total = 0, six_total = 0;

for(int i = 0; i < 60; i++){

switch(dist(gen)){
    case 1:
        one_total++;
        break;
    case 2:
        two_total++;
        break;
    case 3:
        three_total++;
        break;
    case 4:
        four_total++;
        break;
    case 5:
        five_total++;
        break;
    case 6: 
        six_total++;
        break;

    default:
        break;

}
}

//std::cout << one_total << " " << two_total << " " << three_total << " " << four_total << " " << five_total << " " << five_total << " " << six_total << std::endl;

std::cout << "Normal distribution: " << normal_distro(gen) << std::endl;






}