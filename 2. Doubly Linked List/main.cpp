#include <iostream>
#include "Doubly.h"

int main() {
    
    int pilihan, nilai, posisi;
    
    Doubly doubly;
    
    while(true) {
        
        Doubly::Menu();
        
        std::cout << "\nMasukkan Pilihan : ";
        std::cin >> pilihan;
        
        switch(pilihan) {
            
            case 0:
            
                exit(1);
                
            case 1:
            
                if(doubly.IsEmpty()) {
                    
                    std::cout << "\nData kosong!" << std::endl;
                    
                } else {
                    
                    std::cout << "\nData berisi!" << std::endl;
                }
                
                break;
                
            case 2:
            
                std::cout << "\nSize : " << Doubly::TotalSize() << std::endl;
                break;
                
            case 3:
                
                std::cout << "\nMasukkan nilai : ";
                std::cin >> nilai;
                
                doubly.AddFirst(nilai);
                break;
                
            case 4:
                
                std::cout << "\nMasukkan nilai : ";
                std::cin >> nilai;
                
                doubly.AddLast(nilai);
                break;
                
            case 5:
                
                std::cout << "\nMasukkan nilai : ";
                std::cin >> nilai;
                
                std::cout << "Masukkan Posisi : ";
                std::cin >> posisi;
                
                doubly.AddPosition(nilai, posisi);
                break;
                
            case 6:
            
                if(doubly.IsEmpty()) {
                    
                    std::cout << "\nData kosong!" << std::endl;
                    
                } else {
                    
                    doubly.DeleteFirst();
                }
                
                break;
                
            case 7:
            
                if(doubly.IsEmpty()) {
                
                    std::cout << "\nData kosong!" << std::endl;
                
                } else {
                
                    doubly.DeleteLast();
                }
            
                break;
                
            case 8:
                
                if(doubly.IsEmpty()) {
                    
                    std::cout << "\nData kosong!" << std::endl;
                    
                } else {
                    
                    std::cout << "\nMasukkan Posisi : ";
                    std::cin >> posisi;
                    
                    doubly.DeletePosition(posisi);
                }
                
                break;
                
            case 9:
            
                if(doubly.IsEmpty()) {
                    
                    std::cout << "\nData kosong!" << std::endl;
                    
                } else {
                    
                    doubly.Reverse();
                }
                
                break;
                
            case 10:
            
                if(doubly.IsEmpty()) {
                    
                    std::cout << "\nData kosong!" << std::endl;
                    
                } else {
                    
                    doubly.Display();
                }
                
                break;
                
            default:
            
                std::cout << "\nKode salah!" << std::endl;
                break;
        }
    }
    
    return 0;
}