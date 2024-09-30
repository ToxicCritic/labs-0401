#include "Camera.h"

Camera::Camera(std::string m, double res, double sSpeed)
    : model(m), resolution(res), shutterSpeed(sSpeed) {}

void Camera::CaptureImage() {
    std::cout << "Снимок сделан на камеру " << model << " с разрешением " << resolution << " Мп.\n";
}

void Camera::ChangeShutterSpeed(double newSpeed) {
    shutterSpeed = newSpeed;
    std::cout << "Скорость затвора изменена на " << shutterSpeed << " секунд.\n";
}

void Camera::DisplayInfo() const {
    std::cout << "Модель камеры: " << model
        << ", Разрешение: " << resolution
        << " Мп, Скорость затвора: " << shutterSpeed << " секунд.\n";
}
