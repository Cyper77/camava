/**********************************************************
 Software developed by AVA ( Ava Group of the University of Cordoba, ava  at uco dot es)
 Main author Rafael Munoz Salinas (rmsalinas at uco dot es)
 This software is released under BSD license as expressed below
-------------------------------------------------------------------
Copyright (c) 2013, AVA ( Ava Group University of Cordoba, ava  at uco dot es)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:

   This product includes software developed by the Ava group of the University of Cordoba.

4. Neither the name of the University nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY AVA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL AVA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
****************************************************************/

#ifndef _CAMAVA_TYPES_H
#define _CAMAVA_TYPES_H

namespace camava {

    /**Image formats
     */
    enum CAMAVA_FORMAT{
        CAMAVA_FORMAT_YUV420,
        CAMAVA_FORMAT_GRAY,
        CAMAVA_FORMAT_BGR,
        CAMAVA_FORMAT_RGB,
        CAMAVA_FORMAT_IGNORE //do not use
    };

    /**Exposure types
     */
    enum CAMAVA_EXPOSURE {
        CAMAVA_EXPOSURE_OFF,
        CAMAVA_EXPOSURE_AUTO,
        CAMAVA_EXPOSURE_NIGHT,
        CAMAVA_EXPOSURE_NIGHTPREVIEW,
        CAMAVA_EXPOSURE_BACKLIGHT,
        CAMAVA_EXPOSURE_SPOTLIGHT,
        CAMAVA_EXPOSURE_SPORTS,
        CAMAVA_EXPOSURE_SNOW,
        CAMAVA_EXPOSURE_BEACH,
        CAMAVA_EXPOSURE_VERYLONG,
        CAMAVA_EXPOSURE_FIXEDFPS,
        CAMAVA_EXPOSURE_ANTISHAKE,
        CAMAVA_EXPOSURE_FIREWORKS
    }  ;

    /**Auto white balance types
     */
    enum CAMAVA_AWB {
        CAMAVA_AWB_OFF,
        CAMAVA_AWB_AUTO,
        CAMAVA_AWB_SUNLIGHT,
        CAMAVA_AWB_CLOUDY,
        CAMAVA_AWB_SHADE,
        CAMAVA_AWB_TUNGSTEN,
        CAMAVA_AWB_FLUORESCENT,
        CAMAVA_AWB_INCANDESCENT,
        CAMAVA_AWB_FLASH,
        CAMAVA_AWB_HORIZON
    }  ;

    /**Image effects
     */
    enum CAMAVA_IMAGE_EFFECT {
        CAMAVA_IMAGE_EFFECT_NONE,
        CAMAVA_IMAGE_EFFECT_NEGATIVE,
        CAMAVA_IMAGE_EFFECT_SOLARIZE,
        CAMAVA_IMAGE_EFFECT_SKETCH,
        CAMAVA_IMAGE_EFFECT_DENOISE,
        CAMAVA_IMAGE_EFFECT_EMBOSS,
        CAMAVA_IMAGE_EFFECT_OILPAINT,
        CAMAVA_IMAGE_EFFECT_HATCH,
        CAMAVA_IMAGE_EFFECT_GPEN,
        CAMAVA_IMAGE_EFFECT_PASTEL,
        CAMAVA_IMAGE_EFFECT_WATERCOLOR,
        CAMAVA_IMAGE_EFFECT_FILM,
        CAMAVA_IMAGE_EFFECT_BLUR,
        CAMAVA_IMAGE_EFFECT_SATURATION,
        CAMAVA_IMAGE_EFFECT_COLORSWAP,
        CAMAVA_IMAGE_EFFECT_WASHEDOUT,
        CAMAVA_IMAGE_EFFECT_POSTERISE,
        CAMAVA_IMAGE_EFFECT_COLORPOINT,
        CAMAVA_IMAGE_EFFECT_COLORBALANCE,
        CAMAVA_IMAGE_EFFECT_CARTOON
    }  ;

    /**Metering types
     */
    enum CAMAVA_METERING {
        CAMAVA_METERING_AVERAGE,
        CAMAVA_METERING_SPOT,
        CAMAVA_METERING_BACKLIT,
        CAMAVA_METERING_MATRIX
    }  ;
    /*Econdig modes (for still mode)
     */

    typedef enum CAMAVA_ENCODING {
        CAMAVA_ENCODING_JPEG,
        CAMAVA_ENCODING_BMP,
        CAMAVA_ENCODING_GIF,
        CAMAVA_ENCODING_PNG,
        CAMAVA_ENCODING_RGB
    } CAMAVA_ENCODING;

};
#endif

