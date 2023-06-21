//To find volume and Surface area using structures


    #include <stdio.h>
struct Box {
    double length;
    double width;
    double height;
};
double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}
double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}
int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 4.0;
    printf("Using (*) and (.) operators:\n");
    printf("Length: %.2f\n", (*boxPtr).length);
    printf("Width: %.2f\n", (*boxPtr).width);
    printf("Height: %.2f\n", (*boxPtr).height);
    printf("\nUsing (->) operator:\n");
    printf("Length: %.2f\n", boxPtr->length);
    printf("Width: %.2f\n", boxPtr->width);
    printf("Height: %.2f\n", boxPtr->height);
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    printf("\nVolume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}