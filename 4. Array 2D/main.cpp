#include <iostream>

int baris1, kolom1, baris2, kolom2;

/* deklarasi */

void menu();
void penjumlahan();
void pengurangan();
void perkalian();

/* main program */

int main() {

    int pilihan;

    menu();

    std::cout << "\nMasukkan Pilihan : ";
    std::cin >> pilihan;

    switch (pilihan) {

        case 0:

            exit(1);

        case 1:

            penjumlahan();
            break;

        case 2:

            pengurangan();
            break;

        case 3:

            perkalian();
            break;

        default:

            std::cout << "\nKode salah!" << std::endl;
            break;
    }

    return 0;
}

/* definisi */

/* menu */

void menu() {

    std::cout << "\n-------------------------------------\n" << std::endl;
    std::cout << "\tMenu : \n" << std::endl;

    std::cout << "\t1. Penjumlahan" << std::endl;
    std::cout << "\t2. Pengurangan" << std::endl;
    std::cout << "\t3. Perkalian" << std::endl;
    std::cout << "\t0. Exit" << std::endl;
    std::cout << "\n-------------------------------------" << std::endl;
}

/* penjumlahan */

void penjumlahan() {

    std::cout << "\nPenjumlahan\n" << std::endl;

    std::cout << "Baris ke 1 : ";
    std::cin >> baris1;

    std::cout << "Kolom ke 2 : ";
    std::cin >> kolom1;

    int data1[baris1][kolom1];
    int data2[baris1][kolom1];
    int data3[baris1][kolom1];

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data1[i][j];
        }
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data2[i][j];
        }
    }

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            data3[i][j] = data1[i][j] + data2[i][j];
        }
    }

    std::cout << "\n--- Output ---" << std::endl;

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data1[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data2[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nHasil : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data3[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

/* pengurangan */

void pengurangan() {

    std::cout << "\nPengurangan\n" << std::endl;

    std::cout << "Baris ke 1 : ";
    std::cin >> baris1;

    std::cout << "Kolom ke 2 : ";
    std::cin >> kolom1;

    int data1[baris1][kolom1];
    int data2[baris1][kolom1];
    int data3[baris1][kolom1];

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data1[i][j];
        }
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data2[i][j];
        }
    }

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            data3[i][j] = data1[i][j] - data2[i][j];
        }
    }

    std::cout << "\n--- Output ---" << std::endl;

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data1[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data2[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nHasil : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data3[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

/* perkalian */

void perkalian() {

    std::cout << "\nPerkalian\n" << std::endl;

    std::cout << "Matrix 1 : \n" << std::endl;

    std::cout << "Baris ke 1 : ";
    std::cin >> baris1;

    std::cout << "Kolom ke 2 : ";
    std::cin >> kolom1;

    std::cout << "\nMatrix 2 : \n" << std::endl;

    std::cout << "Baris ke 1 : ";
    std::cin >> baris2;

    std::cout << "Kolom ke 2 : ";
    std::cin >> kolom2;

    if(baris1 != kolom2) {

        std::cout << "\nBaris matrix 1 dan kolom matrix 2 tidak sama!" << std::endl;
    }

    while (baris1 != kolom2) {

        std::cout << "\nMatrix 1 : \n" << std::endl;

        std::cout << "Baris ke 1 : ";
        std::cin >> baris1;

        std::cout << "Kolom ke 2 : ";
        std::cin >> kolom1;

        std::cout << "\nMatrix 1 : \n" << std::endl;

        std::cout << "Baris ke 1 : ";
        std::cin >> baris2;

        std::cout << "Kolom ke 2 : ";
        std::cin >> kolom2;
    }

    int data1[baris1][kolom1];
    int data2[baris2][kolom2];
    int data3[baris1][kolom2];

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data1[i][j];
        }
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris2; i++) {

        for(int j = 0; j < kolom2; j++) {

            std::cout << "Data[" << i << "][" << j << "] : ";
            std::cin >> data2[i][j];
        }
    }

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom2; j++) {

            data3[i][j] = 0;

            for(int k = 0; k < kolom1; k++) {

                data3[i][j] += data1[i][k] * data2[k][j];
            }
        }
    }

    std::cout << "\n--- Output ---" << std::endl;

    std::cout << "\nMatrix 1 : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom1; j++) {

            std::cout << data1[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nMatrix 2 : \n" << std::endl;

    for(int i = 0; i < baris2; i++) {

        for(int j = 0; j < kolom2; j++) {

            std::cout << data2[i][j] << " ";
        }

        std::cout << std::endl;
    }

    std::cout << "\nHasil : \n" << std::endl;

    for(int i = 0; i < baris1; i++) {

        for(int j = 0; j < kolom2; j++) {

            std::cout << data3[i][j] << " ";
        }

        std::cout << std::endl;
    }
}


















































