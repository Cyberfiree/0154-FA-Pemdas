#include <iostream>
#include <string>
using namespace std;

// Definisi kelas abstrak MataKuliah
class MasukUniversitas {
private:
    int uangPendaftaran; //modifier
    float uangSemesterPertama;
    float uangBangunan;
    float totalBiaya;

public:
    // Konstruktor untuk inisialisasi variabel anggota
    MasukUniversitas(int uangPendaftaran, float uangSemesterPertama, float uangBangunan, float totalBiaya)
        : uangPendaftaran(uangPendaftaran), uangSemesterPertama(uangSemesterPertama), uangBangunan(uangBangunan), totalBiaya(totalBiaya) {}

    virtual void namaJalurMasuk() { return; }
    virtual void hitungTotalBiaya() { return; }
    virtual void TampilkanTotalBiaya() { return; }
    virtual void input() { return; }


    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }

    float totalbiaya() {
        return totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }
};

// Definisi kelas Jaringan yang merupakan turunan dari MataKuliah
class SNBT : public MasukUniversitas {
public:

};

// Definisi kelas Pemrograman yang merupakan turunan dari MataKuliah
class SNBP : public MasukUniveritas {
public:
    
};

// Fungsi utama
int main() {
    while (true) {
        // Ini adalah loop yang akan terus berjalan sampai pengguna memilih untuk keluar.
        try {  // Ini adalah blok percobaan
            cout << "\nPilih Jalur Masuk" << endl;
            cout << "1. SNBT" << endl;
            cout << "2. SNBP" << endl;
            cout << "3. Exit" << endl;
            cout << "\nPilih (1 - 3) :";
            char ch; // Variabel untuk menyimpan pilihan pengguna.
            cin >> ch; // Mengambil input dari pengguna.


            switch (ch) {
                // Memproses pilihan pengguna menggunakan switch case.
            case '1':
                // Jika pengguna memilih opsi 1, panggil fungsi untuk menambah rekaman.
                SNBT();
                break;
            case'2':
                // Jika pengguna memilih opsi 2, panggil fungsi untuk menghapus rekaman.
                SNBP();
                break;
            case '3':
                // Jika pengguna memilih opsi 6, keluar dari program.
                return 0;
            default:
                // Jika pengguna memilih opsi yang tidak valid, tampilkan pesan kesalahan.
                cout << "\nInvalid option" << endl;
                break;
            }
        }
        catch (exception& e) {
            // Tangkap dan tangani pengecualian jika terjadi.
            cout << "Check for the values entered." << endl;
        }
    }
}

//Regina Rana Nabila - 0154 - TID