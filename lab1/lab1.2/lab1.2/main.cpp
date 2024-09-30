#include "Camera.h"
#include "Lens.h"
#include "Image.h"
#include "ImageSettings.h"
#include "Filter.h"

int main() {
    setlocale(LC_ALL, "rus");

    // Создаем 7 объектов класса Camera
    Camera camera1("Canon EOS 5D", 30.4, 1 / 8000);
    Camera camera2("Nikon D850", 45.7, 1 / 8000);
    Camera camera3("Sony A7R IV", 61.0, 1 / 8000);
    Camera camera4("Fujifilm X-T4", 26.1, 1 / 4000);
    Camera camera5("Olympus OM-D E-M1", 20.4, 1 / 32000);
    Camera camera6("Panasonic GH5", 20.3, 1 / 16000);
    Camera camera7("Leica Q2", 47.3, 1 / 2000);

    // Создаем 7 объектов класса Lens
    Lens lens1(50, 1.8, "Prime");
    Lens lens2(24, 2.8, "Zoom");
    Lens lens3(85, 1.4, "Prime");
    Lens lens4(16, 4.0, "Wide-angle");
    Lens lens5(70, 2.8, "Zoom");
    Lens lens6(100, 2.0, "Macro");
    Lens lens7(35, 1.8, "Prime");

    // Создаем 7 объектов класса Image
    Image image1(1920, 1080, "JPEG");
    Image image2(3840, 2160, "PNG");
    Image image3(800, 600, "BMP");
    Image image4(1280, 720, "JPEG");
    Image image5(2560, 1440, "PNG");
    Image image6(640, 480, "GIF");
    Image image7(1024, 768, "TIFF");

    // Создаем 7 объектов класса ImageSettings
    ImageSettings settings1(50, 100, 75);
    ImageSettings settings2(60, 90, 80);
    ImageSettings settings3(40, 110, 70);
    ImageSettings settings4(55, 95, 85);
    ImageSettings settings5(45, 105, 65);
    ImageSettings settings6(65, 85, 90);
    ImageSettings settings7(35, 115, 60);

    // Создаем 7 объектов класса Filter
    Filter filter1("Sepia", 0.7, "Normal");
    Filter filter2("Black & White", 0.9, "Multiply");
    Filter filter3("Vintage", 0.5, "Screen");
    Filter filter4("Warm", 0.8, "Overlay");
    Filter filter5("Cool", 0.6, "Soft Light");
    Filter filter6("Grain", 0.4, "Hard Light");
    Filter filter7("Sharpen", 0.7, "Normal");

    // Работа с объектами (пример операций)
    camera1.DisplayInfo();
    camera2.CaptureImage();
    camera3.ChangeShutterSpeed(1 / 1000);

    lens1.DisplayInfo();
    lens2.ZoomIn(35);
    lens3.ChangeAperture(2.0);

    image1.DisplayInfo();
    image2.Resize(1920, 1080);
    image3.ConvertFormat("JPEG");

    settings1.AdjustBrightness(60);
    settings2.AdjustContrast(120);
    settings3.AdjustSaturation(85);

    filter1.ApplyFilter();
    filter2.ChangeIntensity(0.6);
    filter3.DisplayInfo();

    return 0;
}
