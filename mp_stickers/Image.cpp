#include "Image.h"



void Image::lighten(){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.l = pixel.l + 0.1;
      if (pixel.l > 1){
        pixel.l = 1;
      }
    }
  }
}

void Image::lighten(double amount){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.l = pixel.l + amount;
      if (pixel.l > 1){
        pixel.l = 1;
      }
    }
  }


}
void Image::darken(){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.l = pixel.l - 0.1;
      if (pixel.l < 0){
        pixel.l = 0;
      }
    }
  }
}
void Image::darken(double amount){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.l = pixel.l - amount;
      if (pixel.l < 0){
        pixel.l = 0;
      }
    }
  }

}
void Image::saturate(){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.s = pixel.s + 0.1;
      if (pixel.s > 1){
        pixel.s = 1;
      }
    }
  }
}
void Image::saturate(double amount){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.s = pixel.s + amount;
      if (pixel.s > 1){
        pixel.s = 1;
      }
    }
  }


}

void Image::desaturate(){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.s = pixel.s - 0.1;
      if (pixel.s < 0){
        pixel.s = 0;
      }
    }
  }
}
void Image::desaturate(double amount){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.s = pixel.s - amount;
      if (pixel.s < 0){
        pixel.s = 0;
      }
    }
  }
}

void Image::grayscale(){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.s = 0;
    }
  }
}

void Image::rotateColor(double degrees){
  int width = this->width();
  int height = this->height();
  for ( int x = 0; x < width; x++) {
    for ( int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);
      pixel.h = pixel.h + degrees;
      if (pixel.h > 360){
        pixel.h = 1;
      }
    }
  }




}
void Image::illinify(){
  int width = this->width();
  int height = this->height();
  for (int x = 0; x < width; x++) {
    for (int y = 0; y < height; y++) {
      HSLAPixel & pixel = this->getPixel(x, y);

      if (pixel.h > 138.5 && pixel.h < 293.5){
        pixel.h = 216;
      }
      else{
        pixel.h = 11;
      }
    }
  }


}

void Image::scale(double factor){
  int width = this->width();
  int height = this->height();
  //this->resize(width*factor, height*factor);
  cs225::PNG Current(*this);
  HSLAPixel * newImageData = new HSLAPixel[width*factor*factor*height];

  for (int x = 0; x < width*factor; x++) {
    for (int y = 0; y < height*factor; y++) {
      if (x < width && y < height) {
        HSLAPixel & oldPixel = this->getPixel(x, y);
        HSLAPixel & newPixel = newImageData[(x + (y * width*factor))];
        newPixel = oldPixel;
      }
      newImageData[x, y] = Current[x/factor, y/factor];
    }
  }

  // Clear the existing image
  delete[] Current;

  // Update the image to reflect the new image size and data
  width = factor * width;
  height = factor * height;
  Current = newImageData;




}
void Image::scale(unsigned w, unsigned h){
  int width = this->width();
  int height = this->height();
  this->resize(w, h);


}
