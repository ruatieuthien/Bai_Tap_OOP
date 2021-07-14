#include <iostream>
#include <math.h>
using namespace std;
class SoPhuc{
	public: 
		double thuc;
		double ao;
	public:
		SoPhuc(){
			this->thuc = this->ao = 0;
		}
		~SoPhuc(){
			this->thuc = this->ao = 0;
		}
		SoPhuc(double t, double a){
			 thuc = t;
			 ao = a;
		}
		void set(){
			cout << " Nhap Phan thuc: ";
			cin >> this->thuc;
			cout << " Nhap Phan ao : ";
			cin >> this->ao;
		}
		void get (){
			if(this->ao < 0) cout << this->thuc << this->ao << "*i" << endl;
			else cout << this->thuc << "+" << this->ao << "*i" << endl;
		}
		SoPhuc operator + (SoPhuc b)
	{
		SoPhuc cong;
		cong.thuc = (this->thuc + b.thuc);
		cong.ao = this->ao + b.ao;
		return cong;
	}
	SoPhuc operator - (SoPhuc b)
	{
		SoPhuc tru;
		tru.thuc = (this->thuc - b.thuc);
		tru.ao = this->ao - b.ao;
		return tru;
	}
	SoPhuc operator * (SoPhuc b)
	{
		SoPhuc nhan;
		nhan.thuc = (this->thuc * b.thuc) - (this->ao * b.ao);
		nhan.ao = (this->thuc * b.ao) + (this->ao * b.thuc);
		return nhan;
	}
	SoPhuc operator  / (SoPhuc b)
	{
		SoPhuc chia;
		chia.thuc = ((this->thuc * b.thuc) + (this->ao * b.ao)) / (pow(b.thuc, 2) + pow(b.ao, 2));
		chia.ao = ((this->ao * b.thuc) - (this->thuc * b.ao)) / (pow(b.thuc, 2) + pow(b.ao, 2));
		return chia;
	}
};
	
int main(){
	SoPhuc a, b, cong, tru, nhan, chia;
	a.set();
	b.set();
	cout << " So Phuc Cong : ";
	cong = a + b;
	cong.get();
	cout << " So Phuc Tru : ";
	tru = a - b;
	tru.get();
	cout << " So Phuc Nhan : ";
	nhan = a * b;
	nhan.get();
	cout << " So Phuc Chia : ";
	chia = a / b;
	chia.get();
	return 0;
}

