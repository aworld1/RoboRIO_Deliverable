/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/commands/Subsystem.h>
#include <ctre/Phoenix.h>

class DriveTrain : public frc::Subsystem {
 private:
  double leftPower;
  double rightPower;
  TalonSRX* left;
  TalonSRX* right;

 public:
  DriveTrain();
  void InitDefaultCommand() override;
  void tankDrive(double l, double r);
};
