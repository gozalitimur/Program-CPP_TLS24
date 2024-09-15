#include <iostream>   
#include <cmath>      

using namespace std;

// Fungsi untuk menghitung keliling dan luas lingkaran
void itunglingkaran(float radius) {
    float circumference = 2 * M_PI * radius;
    float area = M_PI * radius * radius;

    cout << "Circle:" << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
}

// Fungsi untuk menghitung keliling dan luas segiempat
void itungsegiempat(float width, float height) {
    float perimeter = 2 * (width + height);
    float area = width * height;

    cout << "Rectangle:" << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
}

// Fungsi untuk menghitung keliling dan luas segitiga
void itungsegitiga(float a, float b, float c) {
    float s = ( a + b + c) / 2; // setengah dari keliling
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Triangle:" << endl;
    cout << "Perimeter: " << ( a + b + c) << endl;
    cout << "Area: " << area << endl;
}

// Fungsi untuk menghitung volume kubus
void volomekubus(float side) {
    float volume = side * side * side;

    cout << "Cube:" << endl;
    cout << "Volume: " << volume << endl;
}

// Fungsi untuk menghitung volume kerucut
void volumekerucut(float radius, float height) {
    float volume = (1.0 / 3) * M_PI * radius * radius * height;

    cout << "Cone:" << endl;
    cout << "Volume: " << volume << endl;
}

// Fungsi untuk menghitung volume bola
void volumebola(float radius) {
    float volume = (4.0 / 3) * M_PI * radius * radius * radius;

    cout << "Sphere:" << endl;
    cout << "Volume: " << volume << endl;
}

// Fungsi untuk menghitung volume balok
void volumebalok(float length, float width, float height) {
    float volume = length * width * height;

    cout << "Cuboid:" << endl;
    cout << "Volume: " << volume << endl;
}

// Fungsi untuk menghitung volume tabung
void volumetabung(float radius, float height) {
    float volume = M_PI * radius * radius * height;

    cout << "Tube (Cylinder):" << endl;
    cout << "Volume: " << volume << endl;
}

int main() {
    int choice;
    float radius, width, height, length, a, b, c;
    bool running = true; // Variable to control the loop

    cout << "Kalkulator penghitung keliling, luas, dan volume dari bangun di bawah" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Cube" << endl;
    cout << "5. Cone" << endl;
    cout << "6. Sphere" << endl;
    cout << "7. Cuboid" << endl;
    cout << "8. Tube (Cylinder)" << endl;
    cout << "9. exit" << endl; 
    cout << "Masukan nomor bangun yang akan dipilih (1-8): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            itunglingkaran(radius);
            break;

        case 2:
            cout << "Enter width of Rectangle:" << endl;
             cin >> width;
            cout << "Enter height of Rectangle:" << endl;
            cin >> height;
            itungsegiempat(width, height);
            break;

        case 3:
            cout << "Enter lengths of the three sides" << endl;
            cout << "side a of Triangle:" << endl;
            cin >> a; 
            cout << "side b of Triangle:" << endl;
            cin >> b;
            cout << "side c of Triangle:" << endl;
            cin >> c;
            itungsegitiga(a, b, c);
            break;

        case 4:
            cout << "Enter side length of Cube:" << endl;
            cin >> length;
            volomekubus(length);
            break;

        case 5:
            cout << "Enter radius of Cone:" << endl;
            cin >> radius;
            cout << "Enter height of Cone:" << endl;
            cin >> height;
            volumekerucut(radius, height);
            break;

        case 6:
            cout << "Enter radius of Sphere: ";
            cin >> radius;
            volumebola(radius);
            break;

        case 7:
            cout << "Enter length of Cuboid:" << endl;
            cin >> length;
            cout << "Enter width of Cuboid:" << endl;
            cin >> width;
            cout << "Enter height of Cuboid:" << endl;
            cin >> height;
            volumebalok(length, width, height);
            break;

        case 8:
            cout << "Enter radius of Tube:" << endl;
            cin >> radius;
            cout << "Enter height of Tube: " << endl;
            cin >> height;
            volumetabung(radius, height);
            break;

        case 9:
            cout << "Exiting the program." << endl;
            running = false; // Exit the loop
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
