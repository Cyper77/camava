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
#include "camava_still.h"
#include "private_still/private_still_impl.h"
namespace camava {
    CamAva_Still::CamAva_Still() {
        _impl= new _private::Private_Impl_Still() ;
    }
    CamAva_Still::~CamAva_Still() {
        release();
        delete _impl;
    }


    bool CamAva_Still::open ( ) {
        return _impl->initialize() ==0;
    }
    bool CamAva_Still::grab_retrieve ( unsigned char * preallocated_data, unsigned int length ) {
        return _impl->takePicture ( preallocated_data, length );

    }
    void CamAva_Still::release() {}

    size_t CamAva_Still::getImageBufferSize() const{
        return      _impl-> getImageBufferSize();

    }
    void CamAva_Still::commitParameters() {
        _impl-> commitParameters();
    }
    void CamAva_Still::setWidth ( unsigned int width ) {
        _impl-> setWidth ( width );
    }
    void CamAva_Still::setHeight ( unsigned int height ) {
        _impl->setHeight ( height );
    }
    void CamAva_Still::setCaptureSize ( unsigned int width, unsigned int height ) {
        _impl->setCaptureSize ( width,height );
    }
    void CamAva_Still::setBrightness ( unsigned int brightness ) {
        _impl->setBrightness ( brightness );
    }
    void CamAva_Still::setQuality ( unsigned int quality ) {
        _impl->setQuality ( quality );
    }
    void CamAva_Still::setRotation ( int rotation ) {
        _impl-> setRotation ( rotation );
    }
    void CamAva_Still::setISO ( int iso ) {
        _impl-> setISO ( iso );
    }
    void CamAva_Still::setSharpness ( int sharpness ) {
        _impl->setSharpness ( sharpness );
    }
    void CamAva_Still::setContrast ( int contrast ) {
        _impl->setContrast ( contrast );
    }
    void CamAva_Still::setSaturation ( int saturation ) {
        _impl->setSaturation ( saturation );
    }
    void CamAva_Still::setEncoding ( CAMAVA_ENCODING encoding ) {
        _impl->setEncoding ( encoding );
    }
    void CamAva_Still::setExposure ( CAMAVA_EXPOSURE exposure ) {
        _impl->setExposure ( exposure );
    }
    void CamAva_Still::setAWB ( CAMAVA_AWB awb ) {
        _impl->setAWB ( awb );
    }
    void CamAva_Still::setImageEffect ( CAMAVA_IMAGE_EFFECT imageEffect ) {
        _impl-> setImageEffect ( imageEffect );
    }
    void CamAva_Still::setMetering ( CAMAVA_METERING metering ) {
        _impl->setMetering ( metering );
    }
    void CamAva_Still::setHorizontalFlip ( bool hFlip ) {
        _impl->setHorizontalFlip ( hFlip );
    }
    void CamAva_Still::setVerticalFlip ( bool vFlip ) {
        _impl->setVerticalFlip ( vFlip );
    }

    unsigned int CamAva_Still::getWidth() {
        return _impl->getWidth();
    }
    unsigned int CamAva_Still::getHeight() {
        return _impl->getHeight();
    }
    unsigned int CamAva_Still::getBrightness() {
        return _impl->getBrightness();
    }
    unsigned int CamAva_Still::getRotation() {
        return _impl->getRotation();
    }
    unsigned int CamAva_Still::getQuality() {
        return _impl->getQuality();
    }
    int CamAva_Still::getISO() {
        return _impl->getISO();
    }
    int CamAva_Still::getSharpness() {
        return _impl->getSharpness();
    }
    int CamAva_Still::getContrast() {
        return _impl->getContrast();
    }
    int CamAva_Still::getSaturation() {
        return _impl->getSaturation();
    }
    CAMAVA_ENCODING CamAva_Still::getEncoding() {
        return _impl->getEncoding();
    }
    CAMAVA_EXPOSURE CamAva_Still::getExposure() {
        return _impl->getExposure ();
    }
    CAMAVA_AWB CamAva_Still::getAWB() {
        return _impl->getAWB();
    }
    CAMAVA_IMAGE_EFFECT CamAva_Still::getImageEffect() {
        return _impl->getImageEffect();
    }
    CAMAVA_METERING CamAva_Still::getMetering() {
        return _impl->getMetering();
    }
    bool CamAva_Still::isHorizontallyFlipped() {
        return _impl->isHorizontallyFlipped();
    }
    bool CamAva_Still::isVerticallyFlipped() {
        return _impl->isVerticallyFlipped();
    }
}


