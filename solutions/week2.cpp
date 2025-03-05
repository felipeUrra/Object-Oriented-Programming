#include <iostream>
#include <fstream>

void write(const char* fileName, int n1, int n2, int n3);
void write(std::ofstream& ofs, int n1, int n2, int n3);
void read(const char* fileName);
void read(std::ifstream& ifs);


int main()
{
    
}

void write(const char* fileName, int n1, int n2, int n3)
{
    std::ofstream file(fileName, std::ios::app);

    if (!file.is_open())
    {
        std::cout << "The file wasn't opened.";
        return;
    }

    return write(file, n1, n2, n3);
}

void write(std::ofstream& ofs, int n1, int n2, int n3)
{
    ofs << n1 + n2 + n3 << '\n';
    ofs << n1 * n2 * n3;

    ofs.close();
}

void read(const char* fileName)
{
    std::ifstream file(fileName, std::ios::in);

    if (!file.is_open())
    {
        std::cout << "The file wasn't opened.";
        return;
    }

    return read(file);
}

void read(std::ifstream& ifs)
{
    int x;

    ifs.read((char*)&x, sizeof(int));
    std::cout << x << std::endl;

    ifs.close();
}
