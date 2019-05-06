

#include "pch.h"
#include "FileDirectory.h"

int main()
{
	FileDirectory	fileDirectory;
	char data[1024] = { };

	//	Write a driver function, i.e.main(), to test this program by
			//1.	create and write a file, file1, of 40 bytes,
	char file1[8] = "file1";
	fileDirectory.create(file1,40);


	fileDirectory.write(file1, 40, data, 2019, 4, 16, 15, 29, 30);


	//2.	create and write a file, file2, of 200 bytes,
	char file2[8] = "file2";
	fileDirectory.create(file2, 200);


	fileDirectory.write(file2, 200, data, 2019, 4, 30, 12, 29, 01);
	//3.	create and write a file, file3, of 300 bytes,
	char file3[8] = "file3";
	fileDirectory.create(file3, 300);


	fileDirectory.write(file3, 300, data, 2019, 5,1, 02, 21, 01);
	//4.	create and write a file, file4, of 500 bytes.
	char file4[8] = "file4";
	fileDirectory.create(file4, 200);


	fileDirectory.write(file4, 200, data, 2019, 5, 2, 06, 13, 06);
	//5.	delete file2,
	fileDirectory.deleteFile(file2);
	//6.	create and write a file, file4, of 500 bytes.
	fileDirectory.create(file4, 500);
	fileDirectory.write(file4, 500, data, 2019, 5, 2, 10,12, 26);
	return 0;
}

