#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <iostream>
#include <string>
using namespace cs225;



void rotate(std::string inputFile, std::string outputFile) {
  PNG* original = new PNG();
  original->readFromFile(inputFile);
  unsigned width = original->width();
  unsigned height = original->height();
  // Create out.png
  PNG* output = new PNG(width, height);

  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      HSLAPixel & orig_pixel = original->getPixel(x, y);

      output->getPixel(width-x, height-y) = orig_pixel;
    }
  }

  output->writeToFile(outputFile);

  // Clean up memory
  delete output;
  delete original;




  // TODO: Part 2
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  PNG *png = new PNG(width, height);
  double hue = 280;
  double lum = 0.5;
  double sat = 1;

  std::cout << "hue = " << hue <<  std::endl;

  unsigned int  diff_w = width/3;
  unsigned int diff_h = height/3;

  double increment = 26.67/diff_h;

  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      HSLAPixel & pixel = png->getPixel(x, y);
      std::cout << "hue = " << pixel.h <<  std::endl;

      pixel.h = hue + increment;
      pixel.l = lum;
      pixel.s = sat;



      }
  }


  // TODO: Part 3

  return *png;
}
