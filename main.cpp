#include "ImageTransform.h"
#include "uiuc/PNG.h"

int main() {
    uiuc::PNG png, png2, result;

    // Read the base image
    png.readFromFile("alma.png");

    // Grayscale (returns a new image)
    result = grayscale(png);
    result.writeToFile("out-grayscale.png");

    // Spotlight (returns a new image)
    result = createSpotlight(png, 450, 150);
    result.writeToFile("out-spotlight.png");

    // Illinify (returns a new image)
    result = illinify(png);
    result.writeToFile("out-illinify.png");

    // Read overlay/stencil image
    png2.readFromFile("overlay.png");

    // Watermark: modify png in-place
    result = watermark(png, png2);
    result.writeToFile("out-watermark.png");

    return 0;
}
