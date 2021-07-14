#include <iostream>
#include <string>
using namespace std;
class Candidate{
	protected:
		string ma, tenTS, ngaySinh, hdThi;
		int tuoi;
		float anh, toan, van;
	public:	
		Candidate(){
			this->ma = "";
			this->tenTS = "";
			this->ngaySinh = "";
			this->hdThi = "";
			this->anh = this->toan = this->van = 0;
		}	
		~Candidate(){
			this->ma = "";
			this->tenTS = "";
			this->ngaySinh = "";
			this->hdThi = "";			
			this->anh = this->toan = this->van = 0;
		}	
		void input(){
			cout << " Nhap ma TS: ";
 			fflush(stdin);
 			getline(cin,this->ma);
 			cout << " Nhap ten TS: ";
 			fflush(stdin);
 			getline(cin,this->tenTS);
 			cout << " Nhap Ngay Sinh: ";
 			fflush(stdin);
 			getline(cin,this->ngaySinh);
 			cout << "Nhap Hoi Dong thi: ";
 			fflush(stdin);
 			getline(cin,this->hdThi);
 			cout << " Nhap diem toan , van, anh : ";
 			cin >> this->toan >> this->van >> this->anh;
		 }
		void output(){
			cout << this->ma << "-" << this->tenTS << "-" << this->ngaySinh << "-" << this->hdThi <<"\t\t"<< "|" << this->toan << "|" << this->van << "|" << this->anh << endl;
		}
		float tongdiem(){
			return this->toan + this->van + this->anh;
		}
		
		void outputup15 (){
			if( this->tongdiem() > 15)
				return this->output();
	}
};
int main(){
	int n;
	Candidate a[100];
	cout << " Nhap so luong TS: ";
	cin >> n;
	for(int i = 1; i<=n ;i++)
		a[i].input();
	cout << "Tong diem co thi sinh tren 15 : \n";
	cout << " ma TS" << "-" << "Ten TS" << "-" << " Ngay Sinh " << "-" << "Hoi Dong Thi" << "|" << "Diem toan" << "|" << "Diem van" << "|" << "Diem anh" << endl;
	for(int i = 1; i<=n; i++)
		a[i].outputup15();
	return 0;
}
