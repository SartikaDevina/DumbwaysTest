CREATE DATABASE Dumbways
DROP DATABASE Dumbways

CREATE TABLE Categories(
	CategoryId CHAR(5) PRIMARY KEY  CHECK(CategoryId LIKE 'CT[0-9][0-9][0-9]'),
	CategoryName VARCHAR(255)
)

CREATE TABLE Books(
	BookId CHAR(5) PRIMARY KEY CHECK(BookId LIKE 'BK[0-9][0-9][0-9]'),
	BokkName VARCHAR(255),
	Stok INTEGER,
	BookImage VARCHAR (255),
	BookDeskripsi VARCHAR(255),
	CategoryId CHAR(5) FOREIGN KEY REFERENCES Categories(CategoryId)
)

INSERT INTO Categories VALUES ('CT001', 'Horror'),
('CT002', 'Cooking'),
('CT003', 'Social')

INSERT INTO Books VALUES ('BK001', 'Book1' ,10 ,'BookImage1' , 'BookDeskripsi1','CT001'),
('BK002', 'Book2' ,20 ,'BookImage2' , 'BookDeskripsi2', 'CT002'),
('BK003', 'Book3' ,30 ,'BookImage3' , 'BookDeskripsi3' , 'CT003')

SELECT * FROM Books

SELECT c.CategoryName,
		b.BokkName,
		b.Stok
FROM Categories c , Books b
WHERE c.CategoryId = b.CategoryId

SELECT b.BookId,
		b.BookDeskripsi
FROM Books b