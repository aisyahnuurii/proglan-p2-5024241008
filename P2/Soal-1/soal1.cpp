#include <iostream>
#include <string>

class AnggotaTim {
protected:
    std::string nama;
    std::string peran;
    int gajiPokok;
public:
    AnggotaTim(std::string nama, std::string peran, int gajiPokok)
        : nama(nama), peran(peran), gajiPokok(gajiPokok) {}
    

    virtual int hitungGajiTotal() = 0;
    virtual void printInfo() = 0;
};

class Pembalap : public AnggotaTim {
private:
    int jumlahPodium;
public:
    Pembalap(std::string nama, int gajiPokok, int jumlahPodium)
        : AnggotaTim(nama, "pembalap", gajiPokok), jumlahPodium(jumlahPodium) {}

    int hitungGajiTotal() override {
        return gajiPokok + (jumlahPodium * 20000);
    }

    void printInfo() override {
        std::cout << "Gaji total " << nama << " (pembalap) adalah $" << hitungGajiTotal() << std::endl;
    }
};

class Crew : public AnggotaTim {
private:
    int jumlahRace;
public:
    Crew(std::string nama, int gajiPokok, int jumlahRrace)
        : AnggotaTim(nama, "crew", gajiPokok), jumlahRace(jumlahRace) {}

    int hitungGajiTotal() override {
        return gajiPokok + (jumlahRace * 1000);
    }

    void printInfo() override {
        std::cout << "Gaji total " << nama << " (crew) adalah $" << hitungGajiTotal() << std::endl;
    }
};


int main() {
    int jumlahAnggota;
    std::cout << "jumlah anggota tim : ";
    std::cin >> jumlahAnggota;
    std::string nama, peran;
    int gajiPokok, dataTambahan;
    Pembalap pembalaps[100];
    Crew crews[100];
    int idxPembalap = 0, idxCrew = 0;
    for (int i = 1; i <= jumlahAnggota; i++) {
        std::cout << " === INPUT DATA ANGGOTA TIM KE-" << i << " ===" << std::endl;
        std::cout << "nama : ";
        std::cin >> nama;
        std::cout << "peran : ";
        std::cin >> peran;
        std::cout << "gaji pokok : ";
        std::cin >> gajiPokok;
        if (peran == "pembalap") {
            std::cout << "jumlah podium : ";
            std::cin >> dataTambahan;
            pembalaps[idxPembalap] = Pembalap(nama, gajiPokok, dataTambahan);
            idxPembalap++;
        } else {
            std::cout << "jumlah race : ";
            std::cin >> dataTambahan;
            crews[idxCrew] = Crew(nama, gajiPokok, dataTambahan);
            idxCrew++;
        }
    }
    for (int i = 0; i < idxPembalap; i++) {
        pembalaps[i].printInfo();
    }
    for (int i = 0; i < idxCrew; i++) {
        crews[i].printInfo();
    }
    return 0;
}
