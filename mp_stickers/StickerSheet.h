/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once

#include <string>
using std::string;
using namespace std;
#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include "Image.h"

using cs225::HSLAPixel;
using cs225::PNG;

class StickerSheet : public Image
{
  public:
    


     	StickerSheet (const Image &picture, unsigned max);
      StickerSheet (const StickerSheet &other);

      ~StickerSheet ();

      const StickerSheet & 	operator= (const StickerSheet &other);
      void 	changeMaxStickers (unsigned max);
      int 	addSticker (Image &sticker, unsigned x, unsigned y);
      bool 	translate (unsigned index, unsigned x, unsigned y);
      void 	removeSticker (unsigned index);
      Image * 	getSticker (unsigned index);
      Image 	render () const;

   private:
     Image ** stickers_;
     Image *temp_;
     unsigned max_;
     unsidned index_;
     int *x;
     int *y;

  }
