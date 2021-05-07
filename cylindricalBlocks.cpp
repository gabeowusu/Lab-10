/*Group Members
Gabriel Owusu
Kelvin Offei Anim
**/

#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include "block.h"

class cylindricalBlocks : public sqrBaseRectBlocks {
      public:
            vector<cylinder> cylinderDimensions;

            //constructor for cylinder.

            void readCylinder(vector<sqrBaseRect> dim){
                 for(sqrBaseRect sqrRect: dim){
                        cylinder cylindrical;
                        cylindrical.diameter = sqrRect.width;
                        cylindrical.height = sqrRect.length;
                        cylinderDimensions.push_back(cylindrical);
                  }

                  double pi = 3.141592653589793238;
                  vector<double> areaVec,volumeVec;
                  for(cylinder cyl: cylinderDimensions){
                        int radius = cyl.diameter/2;
                        int height = cyl.height;

                        double area = (2*pi*radius*height) + (2*pi*pow(radius,2));
                        double volume = pi*pow(radius,2)*height;
                        areaVec.push_back(area);
                        volumeVec.push_back(volume);
                  }

                  sort(areaVec.begin(),areaVec.end());
                  sort(volumeVec.begin(),volumeVec.end());
                  cout <<"The cylinder surface areas in ascending order are: "<<endl;
                  for(double area: areaVec){
                        cout << area<<", ";
                  }
                  cout<<endl;

                  cout <<"The cylinder volumes in ascending order are: "<<endl;
                  for(double vol: volumeVec){
                        cout << vol <<", ";
                  }
                  cout<<endl;
      }
};
