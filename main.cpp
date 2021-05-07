#include <vector>
#include <iostream>
#include <fstream>
#include "rectBlocks.cpp"
#include "sqrBaseRectBlocks.cpp"
#include "cubiodBlocks.cpp"
#include "cylindricalBlocks.cpp"
#include "sphericalBlocks.cpp"
using namespace std;

int main() {
      ifstream dataBlock("dataBlocks.dat");
      rectBlocks rec;
      vector<rectBlock> rectDim = rec.readRec(dataBlock);

      sqrBaseRectBlocks sqr;
      vector<sqrBaseRect> sqrDim = sqr.readSqr(rectDim);

      cuboidBlocks cube;
      vector<cubiod> cubeDim = cube.readCube(sqrDim);

      cylindricalBlocks cylinder;
      vector<cylinder> cylDim = cylinder.readCylinder(sqrDim);

      sphericalBlocks sphereBlock;
      sphereBlock.readSphere(cubeDim);

      return 0;
}
