#include <vector>
#include <iostream>
#include <fstream>

#include "block.h"

class sqrBaseRectBlocks : public rectBlocks {
      public:
            vector<sqrBaseRect> sqrDimensions;

            //constructor for rectangle
            vector<sqrBaseRect> readSqr(vector<Rect> dimens){
                 for(Rect rect: rectDim){
                        if(rect.width==rect.height){
                              sqrBaseRect squareRec;
                              squareRec.length = rect.length;
                              squareRec.width = rect.width;
                              sqrDimensions.push_back(squareRec);
                        }
                  }
                return sqrDimensions;
            }
};
