/*Melik KARACA 190757079 Bil.M�h.(�.�) C grubu 
Nesneye Y�nelik Programlama BIM-104-50-50-C Bahar 2020
PROJES� 3 Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER*/

#include "Kitap.h" //Kitap K�t�phanem
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Turkish"); 
	Kitap kitap;
	std::string ad, yazar, tur, yayinevi, isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;

	std::cout << "Kitab�n ad�n� giriniz:" << std::endl;
	std::getline(cin,ad); //kullan�c� bo�luk girdi�in de hata vermeme kodu
	std::cout << "Kitab�n yazar�n� giriniz:" << std::endl;
	std::getline(cin,yazar);
	std::cout << "Kitab�n t�r�n� giriniz:" << std::endl;
	std::getline(cin,tur);
	std::cout << "Kitab�n yayinevini giriniz:" << std::endl;
	std::getline(cin,yayinevi);
	std::cout << "Kitab�n IsbnNo giriniz:" << std::endl;
	std::getline(cin,isbnNo);
	std::cout << "Kitab�n sayfa say�s�n� giriniz:" << std::endl;
	std::cin >> sayfaSayisi;
	std::cout << "Kitab�n fiyat�n� giriniz:" << std::endl;
	std::cin >> fiyat;
	std::cout << "Kitab�n bask� y�l�n� giriniz:" << std::endl;
	std::cin >> baskiYili;
	std::cout << "Kitab�n bask� say�s�n� giriniz:" << std::endl;
	std::cin >> baskiSayisi;
	
	kitap.setAd(ad);
	kitap.setYazar(yazar);
	kitap.setTur(tur);
	kitap.setYayinevi(yayinevi);
	kitap.setisbnNo(isbnNo);
	kitap.setSayfaSayisi(sayfaSayisi);
	kitap.setFiyat(fiyat);
	kitap.setBaskiYili(baskiYili);
	kitap.setBaskiSayisi(baskiSayisi);

	std::cout << "kitab�n Ad� = " << kitap.getAd() << " kitab�n yazar� = " << kitap.getYazar() << " kitab�n t�r� = " << kitap.getTur() << " kitab�n yayinevi = " << kitap.getYayinevi() << " kitab�n isbnNo = " << kitap.getisbnNo() << " kitab�n sayfa Say�s� = " << kitap.getSayfaSayisi() << " kitab�n fiyat� = " << kitap.getFiyat() << " kitab�n bask� y�l� = " << kitap.getBaskiYili() << " kitab�n bask� say�s� = " << kitap.getBaskiSayisi() << std::endl;
}

