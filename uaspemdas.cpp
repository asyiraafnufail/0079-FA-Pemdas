/**
 * @file uaspemdas.cpp
 * @author Asyiraaf (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-06-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;

class MataKuliah
{
private:
    float presensi;
    float activity;
    float exercise;
    float tugasakhir;

public:
    MataKuliah()
    {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugasakhir = 0.0;
    }
    virtual string namaMataKuliah() = 0;
    virtual void inputNilai() = 0;
    virtual float hitungNilaiAkhir() = 0;
    virtual string cekKelulusan() = 0;

    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }

    float getPresensi()
    {
        return presensi;
    }

    void setActivity(float nilai)
    {
        this->activity = nilai;
    }

    float getActivity()
    {
        return activity;
    }

    void setExercise(float nilai)
    {
        this->exercise = nilai;
    }

    float getExcercise()
    {
        return exercise;
    }

    void setTugasAkhir(float nilai)
    {
        this->tugasakhir = nilai;
    }

    float getTugasAkhir()
    {
        return tugasakhir;
    }
};

class Pemrograman : public MataKuliah
{
public:
    string namaMataKuliah() override
    {
        return "Pemrograman";
    }

    void inputNilai() override
    {
        float presensi, activity, exercise, tugasakhir;
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        setPresensi(presensi);
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        setActivity(activity);
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        setExercise(exercise);
        cout << "Masukkan nilai tugas akhir: ";
        cin >> tugasakhir;
        setTugasAkhir(tugasakhir);
    }

    float hitungNilaiAkhir() override
    {

    }

    string cekKelulusan() override
    {
        float nilaiAkhir = hitungNilaiAkhir();
        if (nilaiAkhir >= 75.0)
        {
            cout << "Selamat anda lulus";
        }

        else
        {
            cout << "Maaf anda tidak lulus";
        }
    }
};

class Jaringan : public MataKuliah
{
public:
    string namaMataKuliah() override
    {
        return "Jaringan";
    }

    void inputNilai() override
    {
        float activity, exercise;
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        setActivity(activity);
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        setExercise(exercise);
    }

    float hitungNilaiAkhir() override
    {

    }

    string cekKelulusan() override
    {
        float nilaiAkhir = hitungNilaiAkhir();
        if (nilaiAkhir >= 75.0)
        {
            cout << "Selamat anda lulus";
        }

        else
        {
            cout << "Maaf anda tidak lulus";
        }
    }
};

int main()
{
    char pilih;
    MataKuliah *mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;
    // isi disini untuk menentukan mata kuliah yang dipilih
}