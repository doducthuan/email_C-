#pragma once
#include "Product.h"
#include "ListProduct.h"
#include "user.h"


ListProduct listInput = {
	{
    Product {1, "Doraemon - Fujiko Fujio", "Truyen Tranh", 332596, 37, 1},
	Product {2, "Shin Cau Be But Chi - Yoshito Usui", "Truyen Tranh", 105510, 18, 0},
	Product {3, "Tham tu lung danh Conan - Gosho Aoyama", "Truyen Tranh", 44272, 37,1},
	Product {4, "Dune - Frank Herbert", "Khoa Hoc Vien Tuong", 326301, 18,1},
	Product {5, "Than dong Dat Viet - Le Linh", "Truyen Tranh", 255848, 38,1},
	Product {6, "Labyrinths - Jorge Luis Borges", "Khoa Hoc Vien Tuong", 33366, 5,1},
	Product {7, "Ten cua đoa hong - Umberto Eco", "Trinh Tham", 186348, 23,0},
	Product {8, "The Ghost in the Shell - Masamune Shirow", "Khoa Hoc Vien Tuong", 17828, 19,1},
	Product {9, "Co gai co hinh xam rong - Stieg Larsson", "Trinh Tham", 64245, 15,1},
	Product {10, "One Piece - Eiichiro Oda", "Truyen Tranh", 26136, 19,1},
	Product {11, "Sherlock Holmes", "Trinh Tham", 18721, 7,1},
	Product {12, "Ky an anh trang - Quy Co Nu", "Trinh Tham", 361636, 28,1},
	Product {13, "Neuromancer  William Gibson", "Khoa Hoc Vien Tuong", 398308, 33,1},
	Product {14, "Ubik - Philip K. Dick", "Khoa Hoc Vien Tuong", 323466, 29,1},
	Product {15, "Su im lang cua bay cuu - Thomas Harris", "Trinh Tham", 318611, 8,1},
	Product {16, "Thanh guom diet quy - Gotoge Koyoharu", "Truyen Tranh", 195236, 38,0},
	Product {17, "Do Androids Dream of Electric Sheep?", "Khoa Hoc Vien Tuong", 11468, 24,1},
	Product {18, "Bay vien ngoc rong - Toriyama Akira", "Truyen Tranh", 167768, 32,1},
	Product {19, "1984 - George Orwell", "Khoa Hoc Vien Tuong", 118071, 17,0},
	Product {20, "De thi dam mau - Loi Me", "Trinh Tham", 242840, 6,1},
	Product {21, "Mat ma Davinci - Dan Brown", "Trinh Tham", 369435, 21,1},
	Product {22, "An mang tren song Nile - Agatha Christie", "Trinh Tham", 218827, 17,1},
}
, 22 };

ListProduct listInCart = {
	{
		Product{0, "", "", 0, 0, 0}
	}
,0 };

user listUsers[6] = {
	user {"quynhmai123", "0865308367", "nqm1997", "nqm@gmail.com"},
	user {"quynh273", "0377815180", "ngquynh0402", "quynhnguyen@gmail.com"},
	user {"ngvan0512", "01698074821", "ngvananh0512", "nguyenvananh@gmail.com"},
	user {"vananh1975", "0875290652", "05121975", "anh0512@gmail.com"},
	user {"ngthminh07", "0335105153", "minh0507", "nguyenthiminh@gmail.com"}
};