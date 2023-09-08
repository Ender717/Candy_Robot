#ifndef VEX_MOTOR_ADAPTER_HPP
#define VEX_MOTOR_ADAPTER_HPP

#include <memory>

#include "pros/motors.hpp"

#include "devices/IMotor.hpp"

namespace vex
{
/**
 * @brief An adapter for a vex motor to the devices motor interface
 *
 * @author Nathan Sandvig
 */
class MotorAdapter : public devices::IMotor
{
private:
    /**
     * @brief The vex motor being adapted
     *
     */
    std::unique_ptr<pros::Motor> m_motor{nullptr};

public:
    /**
     * @brief Construct a new Motor Adapter object
     *
     * @param motor The motor to adapt
     */
    explicit MotorAdapter(std::unique_ptr<pros::Motor>& motor);

    /**
     * @brief Sets the RPM of the motor
     *
     * @param RPM The target RPM
     */
    void setRPM(double RPM) final;

    /**
     * @brief Gets the RPM of the motor
     *
     * @return double The current RPM
     */
    double getRPM() final;
};
} // namespace vex

#endif