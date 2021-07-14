#include<iostream>
#include<cmath>
using namespace std;
class SoPhuc{
    private:
        double thuc;
        double ao;
    public:
    SoPhuc();
    SoPhuc(double t,double a);
    void Nhap();
    void Xuat();
    ~SoPhuc();
    void Add(SoPhuc sp1,SoPhuc sp2);
    void Sub(SoPhuc sp1,SoPhuc sp2);
    void Multi(SoPhuc sp1,SoPhuc sp2);
    void Div(SoPhuc sp1,SoPhuc sp2);
};
SoPhuc::SoPhuc(){
    thuc=ao=0;
}
SoPhuc::SoPhuc(double t,double a){
    thuc=t;
    ao=a;
}
SoPhuc::~SoPhuc(){
}
void SoPhuc::Nhap(){
    cout<<"Nhap phan thuc: ";
    cin>>thuc;
    cout<<"Nhap phan ao: ";
    cin>>ao;
}
void SoPhuc::Xuat(){
    if(this->ao < 0) cout << this->thuc << this->ao << "*i" << endl;
			else cout << this->thuc << "+" << this->ao << "*i" << endl;
}
void SoPhuc::Add(SoPhuc sp1,SoPhuc sp2){
    this->thuc=sp1.thuc+sp2.thuc;
    this->ao=sp1.ao+sp2.ao;
}
void SoPhuc::Sub(SoPhuc sp1,SoPhuc sp2){
    this->thuc=sp1.thuc-sp2.thuc;
    this->ao=sp1.ao-sp2.ao;
}
void SoPhuc::Multi(SoPhuc sp1,SoPhuc sp2){
    this->thuc=sp1.thuc*sp2.thuc-sp2.ao*sp1.ao;
    this->ao=sp1.thuc*sp2.ao+sp1.ao*sp2.thuc;
}
void SoPhuc::Div(SoPhuc sp1,SoPhuc sp2){
    this->thuc=(sp1.thuc*sp2.thuc+sp1.ao*sp2.ao)/(sp2.thuc*sp2.thuc+sp2.ao*sp2.ao);
    this->ao=(sp2.thuc*sp1.ao-sp1.thuc*sp2.ao)/(sp2.thuc*sp2.thuc+sp2.ao*sp2.ao);
}
int main(){
    SoPhuc sp1;
    SoPhuc sp2;
    sp1.Nhap();
    cout<<"So phuc 1: ";
    sp1.Xuat();
    sp2.Nhap();
    cout<<"So phuc 2: ";
    sp2.Xuat();
    SoPhuc add,sub,multi,div;
    //cong hai so phuc
    add.Add(sp1,sp2);
    cout<<"Add: ";
    add.Xuat();
    //tru hai so phuc
    sub.Sub(sp1,sp2);
    cout<<"Sub: ";
    sub.Xuat();
    //Nhan hai so phuc
    multi.Multi(sp1,sp2);
    cout<<"Multi: ";
    multi.Xuat();
    //Chia hai so phuc
    div.Div(sp1,sp2);
    cout<<"Div: ";
    div.Xuat();
    return 0;
}
