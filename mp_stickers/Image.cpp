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
  cs225::PNG Current(*this);

  this->resize(width*factor, height*factor);

  for (int x = 0; x < width*factor; x++) {
    for (int y = 0; y < height*factor; y++) {
      int x1 = int(x/factor);
      int y1 = int(y/factor);

      HSLAPixel & newPixel = this->getPixel(x, y);
      HSLAPixel & oldPixel = Current.getPixel(x1,y1);
      newPixel = oldPixel;


      }
    }
  }


void Image::scale(unsigned w, unsigned h){
  int width = this->width();
  int height = this->height();
  this->resize(w, h);


}
