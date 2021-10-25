/*
 * THIS FILE IS AUTOMATICALLY GENERATED
 *
 * I2C-Generator: 0.3.0
 * Yaml Version: 1.1.0
 * Template Version: 0.7.0-78-g11fb280
 */
/*
 * Copyright (c) 2021, Sensirion AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Sensirion AG nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SENSIRIONI2CSFM_SF06_H
#define SENSIRIONI2CSFM_SF06_H

#include <Wire.h>

#include <SensirionCore.h>

class SensirionI2CSfmSf06 {

  public:
    SensirionI2CSfmSf06();
    /**
     * begin() - Initializes the SensirionI2CSfmSf06 class.
     *
     * @param serial Arduino stream object to be communicated with.
     *
     */
    void begin(TwoWire& i2cBus);

    /**
     * startO2ContinuousMeasurement() - The sensor starts measuring both O₂ flow
    and temperature and provides a status word. All three measurement results
    can be read out through one single I2C read when the continuous measurement
    is running. The specific command code used for the start continuous
    measurement command selects the calibrated gas or binary gas mixture (lookup
    table) for the flow signal. Supported by products:
      - SFM3003
      - SFM4300
      - SFM3119
      - SFM3012
      - SFM3019

     *
     * @note The first measurement result will be available after 12ms. Small
    accuracy deviations (few % of reading) can occur during the first 30ms
    (including the 12ms)

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startO2ContinuousMeasurement(void);

    /**
     * startAirContinuousMeasurement() - The sensor starts measuring both Air
    flow and temperature and provides a status word. All three measurement
    results can be read out through one single I2C read when the continuous
    measurement is running. The specific command code used for the start
    continuous measurement command selects the calibrated gas or binary gas
    mixture (lookup table) for the flow signal. Supported by products:
      - SFM3003
      - SFM4300
      - SFM3119
      - SFM3012
      - SFM3019

     *
     * @note The first measurement result will be available after 12ms. Small
    accuracy deviations (few % of reading) can occur during the first 30ms
    (including the 12ms)

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startAirContinuousMeasurement(void);

    /**
     * startN2oContinuousMeasurement() - The sensor starts measuring both N₂O
    (*HeOx for SMF3012*) flow and temperature and provides a status word. All
    three measurement results can be read out through one single I2C read when
    the continuous measurement is running. The specific command code used for
    the start continuous measurement command selects the calibrated gas or
    binary gas mixture (lookup table) for the flow signal. Supported by
    products:
      - SFM4300
      - SFM3013 (HeOx)

     *
     * @note The first measurement result will be available after 12ms. Small
    accuracy deviations (few % of reading) can occur during the first 30ms
    (including the 12ms)

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startN2oContinuousMeasurement(void);

    /**
     * startCo2ContinuousMeasurement() - The sensor starts measuring both CO₂
    flow and temperature and provides a status word. All three measurement
    results can be read out through one single I2C read when the continuous
    measurement is running. The specific command code used for the start
    continuous measurement command selects the calibrated gas or binary gas
    mixture (lookup table) for the flow signal. Supported by products:
      - SFM4300

     *
     * @note The first measurement result will be available after 12ms. Small
    accuracy deviations (few % of reading) can occur during the first 30ms
    (including the 12ms)

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startCo2ContinuousMeasurement(void);

    /**
     * startAirO2ContinuousMeasurement() - The sensor starts measuring the
    Air/O₂ flow and temperature and provides a status word. All three
    measurement results can be read out through one single I2C read when the
    continuous measurement is running. The specific command code used for the
    start continuous measurement command selects the calibrated gas or binary
    gas mixture (lookup table) for the flow signal.
    Supported by products:
      - SFM3003
      - SFM4300
      - SFM3119
      - SFM3012
      - SFM3019

     *
     * @param volumeFraction Volume fraction of dioxigen in ‰.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startAirO2ContinuousMeasurement(uint16_t volumeFraction);

    /**
     * startNo2O2ContinuousMeasurement() - The sensor starts measuring the  N₂O
    / O₂ flow and temperature and provides a status word. All three measurement
    results can be read out through one single I2C read when the continuous
    measurement is running. The specific command code used for the start
    continuous measurement command selects the calibrated gas or binary gas
    mixture (lookup table) for the flow signal. Supported by products:
      - SFM4300
      - SFM3013 (HeOx)

     *
     * @param volumeFraction Volume fraction of O₂ in ‰.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startNo2O2ContinuousMeasurement(uint16_t volumeFraction);

    /**
     * startC0202ContinuousMeasurement() - The sensor starts measuring the  CO₂
    / O₂ flow and temperature and provides a status word. All three measurement
    results can be read out through one single I2C read when the continuous
    measurement is running. The specific command code used for the start
    continuous measurement command selects the calibrated gas or binary gas
    mixture (lookup table) for the flow signal. Supported by products:
      - SFM4300

     *
     * @param volumeFraction Volume fraction of O₂ in ‰.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t startC0202ContinuousMeasurement(uint16_t volumeFraction);

    /**
     * readMeasurementData() - After the command
    *start_xx_continuous_measurement* has been sent, the chip continuously
    measures and updates the measurement results. New results (flow,
    temperature, and status word) can be read continuously with this command.

     *
     * @note The first measurement result will be available after 12ms. Small
    accuracy deviations (few % of reading) can occur during the first 30ms
    (including the 12ms)

     *
     * @param flow Calibrated flow signal.

     *
     * @param temperature Calibrated temperature.

     *
     * @param statusWord Gives information about the measurement command that is
    currently running, information on the currently selected averaging mode, and
    the defined gas concentration of the current measurement command. A detailed
    description of the *status_word* can be found in the data sheet.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t readMeasurementData(int16_t& flow, int16_t& temperature,
                                 uint16_t& statusWord);

    /**
     * updateConcentrationSet() - Together with the instruction
    *update_concentration_activate* this instruction allows to update the
    concentration of a binary gas mixture dynamically, i.e. without exiting the
    running measurement mode. This first instruction transmits the new
    concentration value to the flow sensor. This instruction refers to *Transmit
    concentration*. For more details see data-sheet section *Update
    Concentration*

     *
     * @param volumeFraction New O₂ volume fraction

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t updateConcentrationSet(uint16_t volumeFraction);

    /**
     * updateConcentrationActivate() - By executing this instruction the
    previously with *update_concentration_set* set value becomes active. The
    instruction resets the I2C address pointer to the regular result output
    buffer such that the measurement data as described by the transfer
    read_measurement_data are optained upon a subsequent read. This instruction
    refers to *Reset-i2c address pointer*. For more details see data-sheet
    section *Update Concentration*

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t updateConcentrationActivate(void);

    /**
     * stopContinuousMeasurement() - This command stops the continuous
    measurement and puts the sensor in idle mode. After it receives the stop
    command, the sensor needs up to 0.5ms to power down the heater, enter idle
    mode and be receptive for a new command.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t stopContinuousMeasurement(void);

    /**
     * configureAveraging() - This command configures the sensor’s averaging
    mode: 1) N=0 (default): average-until-read mode (c.f. Sec. 3) 2) 1≤N≤128:
    fixed-N averaging mode. N is the number of internal measurements that are
    averaged for one returned measurement value (i.e. the average over N flow
    samples, where N = CmdArgument, c.f. Sec. 3). The configured averaging mode
    will be used for flow measurements until a reset or re-execution of this
    command is performed. After a reset, averaging is set to average-until-read
    mode (i.e. N is set to 0). The highest averaging number allowed is 128. If a
    higher number is used in the command argument, it will be overruled by the
    maximal value of 128 samples to average. If no averaging is desired, set N
    to 1.

     *
     * @param averageWindow Average window configuration value.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t configureAveraging(uint16_t averageWindow);

    /**
     * readScaleOffsetFlow() - This command provides the scale factor and offset
    to convert flow readings into physical units. The scale factor and offset
    are specific to the calibrated gas / gas mixture and its corresponding
    lookup table used for the flow measurement. Therefore, the gas / gas mixture
    needs to be specified in the command argument by the command code of the
    corresponding start continuous measurement. For detailed information see
    data-sheet.

     *
     * @param flowScaleFactor Scale factor used by the sensor.

     *
     * @param flowOffset Offset used by the sensor.

     *
     * @param flowUnit Applicable flow unit.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t readScaleOffsetFlow(int16_t& flowScaleFactor, int16_t& flowOffset,
                                 uint16_t& flowUnit);

    /**
     * enterSleep() - In sleep mode the sensor uses a minimum amount of power.
    The mode can only be entered from idle mode, i.e. when the sensor is not
    performing measurements. This mode is particularly useful for battery
    operated devices. To minimize the current in this mode, the complexity of
    the sleep mode circuit has been reduced as much as possible, which is mainly
    reflected by the way the sensor exits the sleep mode. In sleep mode the
    sensor cannot be soft reset.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t enterSleep(void);

    /**
     * exitSleep() - The sensor exits the sleep mode and enters the idle mode
    when it receives the valid I2C address and a write bit (‘0’). Note that the
    I2C address is not acknowledged. It is necessary to poll the sensor to see
    whether the sensor has received the address and has woken up. This should
    take typically 16ms.

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t exitSleep(void);

    /**
     * readProductIdentifier() - This command allows to read product identifier
    and the serial number. The command can only be executed from the idle mode,
    i.e. when the sensor is not performing measurements

     *
     * @param productIdentifier 32-bit unique product and revision number

     *
     * @param serialNumber 64 bit unique serial number of the device

     *
     * @return 0 on success, an error code otherwise
     */
    uint16_t readProductIdentifier(uint32_t& productIdentifier,
                                   uint8_t serialNumber[],
                                   uint8_t serialNumberSize);

  private:
    TwoWire* _i2cBus = nullptr;
};

#endif /* SENSIRIONI2CSFM_SF06_H */
