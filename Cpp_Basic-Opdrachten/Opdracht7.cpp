#include "Opdracht7.h"

void Opdracht7::start() {
    tempPath = path + std::string("/jabberwocky.txt");
    in_stream.open(tempPath);
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }
    in_stream.get(ch);
    //    in_stream >> ch;
    //    in_stream >> std::noskipws;
    while (!in_stream.eof()) {
        in_stream.get(ch);
        //        in_stream >> ch;

        std::cout.put(ch);
        //        std::cout << ch;
    }
    in_stream.close();
}
