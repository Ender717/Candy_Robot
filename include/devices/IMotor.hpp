#ifndef DEVICES_I_MOTOR_HPP
#define DEVICES_I_MOTOR_HPP

namespace devices
{
/**
 * @brief Interface for motors that are controlled using RPM
 *
 * @author Nathan Sandvig
 */
class IMotor
{
public:
    /**
     * @brief Destroy the IMotor object
     *
     */
    virtual ~IMotor() = default;

    /**
     * @brief Sets the RPM of the motor
     *
     * @param RPM The target RPM
     */
    virtual void setRPM(double RPM) = 0;

    /**
     * @brief Gets the RPM of the motor
     *
     * @return double The current RPM
     */
    virtual double getRPM() = 0;
};
} // namespace devices

#endif