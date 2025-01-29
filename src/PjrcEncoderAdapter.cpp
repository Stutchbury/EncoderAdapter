/**
 *
 * GPLv2 Licence https://www.gnu.org/licenses/old-licenses/gpl-2.0.txt
 * 
 * Copyright (c) 2025 Philip Fletcher <philip.fletcher@stutchbury.com>
 * 
 */

#include <PjrcEncoderAdapter.h>


    PjrcEncoderAdapter::PjrcEncoderAdapter( uint8_t pin1, uint8_t pin2 )
        : encoder(pin1, pin2)
        {
            _pin1 = pin1;
            _pin2 = pin2;
        };

    bool  PjrcEncoderAdapter::begin(void) {
        // PJRC's Encoder appears to have begin() functionality on its way but something has gone wrong with the versioning 
        // https://github.com/PaulStoffregen/Encoder/issues/106#issuecomment-2621583974
        //encoder.begin(_pin1, _pin2);
        return true;
    }

    int32_t PjrcEncoderAdapter::getPosition(void) {
        return encoder.read();
    }

    void PjrcEncoderAdapter::setPosition(int32_t pos) {
        encoder.write(pos);
    }
