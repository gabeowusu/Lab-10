#include <vector>
#include <fstream>
#include <iostream>

#include "block.h"

using namespace std;

class rectBlocks {
      public:
          vector<rectBlock> dimensions;

          // method for reading rectangular dimensions
          vector<rectBlock> readRec(ifstream& datFile) {
                if (datFile.is_open()){
                      rectBlock block;

                      while(! datFile.eof()){ //while there is more data to be read
                        datFile >> block.width >> block.height >> block.length;
                        dimensions.push_back(block);
                      }
                }
                datFile.close(); // closing the open dat file

                return dimensions;
            }

};


