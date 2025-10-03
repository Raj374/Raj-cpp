#include <iostream>
using namespace std;

// Parent Class
class RBI
{
private:
    double rate;

protected:
    RBI()
    {
        this->rate = 7.5;
    }

    void findBankRate(double total_amount, string bank_name)
    {
        double final_amount = (total_amount * rate) / 100;
        cout << endl
             << endl
             << bank_name << " : " << final_amount << endl
             << endl;
    }
};

// Child Class
class SBI : public RBI
{
private:
    double total_amount;

public:
    void setTotalAmountSBI()
    {
        cout << "Enter SBI total amount : ";
        cin >> this->total_amount;

        findBankRate(this->total_amount, "SBI");
    }
};

// Child Class
class ICICI : public RBI
{
private:
    double total_amount;

public:
    void setTotalAmountICICI()
    {
        cout << "Enter ICICI total amount : ";
        cin >> this->total_amount;

        findBankRate(this->total_amount, "ICICI");
    }
};

// Child Class
class HDFC : public RBI
{
private:
    double total_amount;

public:
    void setTotalAmountHDFC()
    {
        cout << "Enter HDFC total amount : ";
        cin >> this->total_amount;

        findBankRate(this->total_amount, "HDFC");
    }
};

