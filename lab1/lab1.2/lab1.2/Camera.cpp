#include "Camera.h"

Camera::Camera(std::string m, double res, double sSpeed)
    : model(m), resolution(res), shutterSpeed(sSpeed) {}

void Camera::CaptureImage() {
    std::cout << "������ ������ �� ������ " << model << " � ����������� " << resolution << " ��.\n";
}

void Camera::ChangeShutterSpeed(double newSpeed) {
    shutterSpeed = newSpeed;
    std::cout << "�������� ������� �������� �� " << shutterSpeed << " ������.\n";
}

void Camera::DisplayInfo() const {
    std::cout << "������ ������: " << model
        << ", ����������: " << resolution
        << " ��, �������� �������: " << shutterSpeed << " ������.\n";
}
