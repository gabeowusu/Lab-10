/*Group Members
Gabriel Owusu
Kelvin Offei Anim
**/

#include <vector>
#include <iostream>
#include <fstream>

#include "block.h"


class cuboidBlocks : public sqrBaseRectBlocks {
      public:
            vector<cubiod> cubeDimensions;

            //constructor for cuboid
            vector<cubiod> readCube(vector<sqrBaseRect> dimens){
                 for(sqrBaseRect sqrRect:dimens){
                        if(sqrRect.width==sqrRect.length){
                              cubiod cube;
                              cube.length = sqrRect.length;
                              cubeDimensions.push_back(cube);
                        }
                  }

                  return cubeDimensions;
            }
};



