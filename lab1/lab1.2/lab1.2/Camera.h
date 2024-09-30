#ifndef CAMERA_H
#define CAMERA_H

#include <string>
#include <iostream>

class Camera {
private:
    std::string model;
    double resolution;
    double shutterSpeed;

public:
    Camera(std::string m, double res, double sSpeed);

    void CaptureImage();
    void ChangeShutterSpeed(double newSpeed);
    void DisplayInfo() const;
};

#endif // CAMERA_H
