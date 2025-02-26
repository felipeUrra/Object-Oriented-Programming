#include <iostream>
#include <fstream>

void write(int n1, int n2, int n3, const char* filename);
void read(const char* filename);
void print(char c);

int main()
{
    int n1 = 4, n2 = 5, n3 = 6;
    const char* filename = "text.txt";

    write(4, 5, 6, filename);
    read(filename);
    
}

void write(int n1, int n2, int n3, const char* filename)
{
    std::ofstream file(filename);
    file << (n1 + n2 + n3) << ' ';
    file << (n1 * n2 * n3);
    file.close();
}

void read(std::ifstream& ifs) {
    int a = 0;
    int b = 0;

    

    print(ifs.get());
}

void read(const char* filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cout << "File is not being opened";
        return;
    }

    return read(file);
}

void print(char c)
{
    std::cout << c;
}
