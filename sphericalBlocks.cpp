#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include "block.h"
class sphericalBlocks : public cuboidBlocks {
      public:
            vector<int> sphereDimensions;
            void readSphere(vector<cubiod> dim){
                 for(cubiod cube: dim){
                        int spheredim;
                        spheredim = cube.length;
                        sphereDimensions.push_back(spheredim);
                  }

                  sort(sphereDimensions.begin(), sphereDimensions.end()); //Sort diameter
                  double pi = 3.141592653589793238;
                  cout <<"The diameters of the spheres in ascending order are: "<<endl;
                  for(int sph: sphereDimensions){
                        cout <<sph<<", ";
                  }
                  cout<<endl;

                  cout <<"The Spherical surface areas in ascending order are: "<<endl;
                  for(int sphDiam: sphereDimensions){
                        int radius = sphDiam/2;
                        int area = 4*pi*pow(radius,2); //Calculate for area
                        cout << area<<", ";
                  }

                  cout<<endl; //Break line
                  cout <<"The Spherical surface volumes in ascending order are: "<<endl;
                  for(int sphDiam: sphereDimensions){
                        int radius = sphDiam/2;
                        int volume =4/3*pi*pow(radius,3);
                        cout << volume<<", ";
                  }

      }
};

