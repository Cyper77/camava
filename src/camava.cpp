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

#include "camava.h"
#include "private/private_impl.h"
namespace camava {

    CamAva::CamAva() {
        _impl=new _private::Private_Impl;
    }
    CamAva::~CamAva() {
        delete _impl;
    }


    bool CamAva::open ( bool StartCapture ) {
        return _impl->open ( StartCapture );
    }
    bool CamAva::startCapture() {
        return _impl->startCapture();
    }

    void CamAva::setUserCallback(void (*userCallback)(void*) , void* data) {
        _impl->setUserCallback(userCallback, data);
    }

    bool CamAva::isOpened() const {return _impl->isOpened();}

    bool CamAva::grab() {
        return _impl->grab();
    }

    void CamAva::retrieve ( unsigned char *data,CAMAVA_FORMAT type ) {
        _impl->retrieve ( data,type );
    }
    unsigned char *CamAva::getImageBufferData() const{return _impl->getImageBufferData();}
    size_t CamAva::getImageBufferSize() const{return _impl->getImageBufferSize();}

    size_t CamAva::getImageTypeSize ( CAMAVA_FORMAT type ) const{return _impl->getImageTypeSize ( type );}

    void CamAva::release() {
        _impl->release();
    }

    void CamAva::setFormat(CAMAVA_FORMAT fmt){
         _impl->setFormat( fmt);
    }
    void CamAva::setWidth ( unsigned int width ) {
        _impl->setWidth ( width );
    }
    void CamAva::setHeight ( unsigned int height ) {
        _impl->setHeight ( height );
    }
    void CamAva::setCaptureSize ( unsigned int width, unsigned int height ) {
        _impl->setCaptureSize ( width,height );
    }
    void CamAva::setBrightness ( unsigned int brightness ) {
        _impl->setBrightness ( brightness );
    }
    void CamAva::setRotation ( int rotation ) {
        _impl->setRotation ( rotation );
    }
    void CamAva::setISO ( int iso ) {
        _impl->setISO ( iso );
    }
    void CamAva::setSharpness ( int sharpness ) {
        _impl->setSharpness ( sharpness );
    }
    void CamAva::setContrast ( int contrast ) {
        _impl->setContrast ( contrast );
    }
    void CamAva::setSaturation ( int saturation ) {
        _impl->setSaturation ( saturation );
    }
    void CamAva::setExposure ( CAMAVA_EXPOSURE exposure ) {
        _impl->setExposure ( exposure );
    }
    void CamAva::setShutterSpeed ( unsigned int ss ) {
          _impl->setShutterSpeed ( ss );
    }

    void CamAva::setVideoStabilization ( bool v ) {
        _impl->setVideoStabilization ( v );
    }
    void CamAva::setExposureCompensation ( int val ) {
        _impl->setExposureCompensation ( val );
    }
    void CamAva::setAWB ( CAMAVA_AWB awb ) {
        _impl->setAWB ( awb );
    }
    void CamAva::setFlash ( CAMAVA_FLASH flash ) {
        _impl->setFlash( flash );
    }
    void CamAva::setAWB_RB ( float r,float b ){
        _impl->setAWB_RB(r,b);
    }

    void CamAva::setImageEffect ( CAMAVA_IMAGE_EFFECT imageEffect ) {
        _impl->setImageEffect ( imageEffect );
    }
    void CamAva::setMetering ( CAMAVA_METERING metering ) {
        _impl->setMetering ( metering );
    }
    void CamAva::setHorizontalFlip ( bool hFlip ) {
        _impl->setHorizontalFlip ( hFlip );
    }
    void CamAva::setVerticalFlip ( bool vFlip ) {
        _impl->setVerticalFlip ( vFlip );
    }
    void CamAva::setFrameRate ( unsigned int frames_per_second ) {
        _impl->setFrameRate ( frames_per_second );
    }

    
    CAMAVA_FORMAT CamAva::getFormat()const{return _impl->getFormat( ); }
    unsigned int CamAva::getWidth() const{return _impl->getWidth() ;}
    unsigned int CamAva::getHeight() const{return _impl->getHeight()  ;}
    unsigned int CamAva::getBrightness() const{return _impl->getBrightness()  ;}
    unsigned int CamAva::getRotation() const{return _impl->getRotation()  ;}
    int CamAva::getISO() const{return _impl->getISO() ;}
    unsigned int CamAva::getShutterSpeed() const{return _impl->getShutterSpeed();}
    unsigned int CamAva::getFrameRate() const{return _impl->getFrameRate();}

    int CamAva::getSharpness() const{return _impl->getSharpness() ;}
    int CamAva::getContrast() const{return _impl->getContrast() ;}
    int CamAva::getSaturation() const{return _impl->getSaturation() ;}
    CAMAVA_EXPOSURE CamAva::getExposure() const {return _impl->getExposure() ;}
    CAMAVA_AWB CamAva::getAWB() const{return _impl->getAWB() ;}
    CAMAVA_FLASH CamAva::getFlash() const{return _impl->getFlash() ;}
    float CamAva::getAWBG_red()const{return _impl->getAWBG_red();}
    float CamAva::getAWBG_blue()const{return _impl->getAWBG_blue();}

    CAMAVA_IMAGE_EFFECT CamAva::getImageEffect() const{return _impl->getImageEffect() ;};
    CAMAVA_METERING CamAva::getMetering() const{return _impl->getMetering() ;}
    bool CamAva::isHorizontallyFlipped() const {return _impl->isHorizontallyFlipped()  ;}
    bool CamAva::isVerticallyFlipped() const {return _impl->isVerticallyFlipped() ;}

    //Returns an id of the camera. We assume the camera id is the one of the raspberry
    //the id is obtained using raspberry serial number obtained in /proc/cpuinfo
    std::string CamAva::getId() const{return _impl->getId();}


};

