#include "Opdracht7.h"

void Opdracht7::start() {
    tempPath = path + std::string("/jabberwocky.txt");
    tempPathLatin = path + std::string("/jabberwocky_lat.txt");

    in_stream.open(tempPath);
    if (!in_stream) {
        std::cout << "Probleem bij openen file. Probeer 'const std::string path' in Opdracht7.h naar je locale pad te zetten" << std::endl;
        exit(1);
    }   
    
    in_stream_latin.open(tempPathLatin);
    if (!in_stream_latin) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }

    out_stream_backwards.open(path + std::string("/jabberwocky_backwards"));
    if (!out_stream_backwards)
    {
        std::cout << "Error in creating file!!!";
    }
    
    out_stream_jumble.open(path + std::string("/jabberwocky_jumbled"));
    if (!out_stream_jumble)
    {
        std::cout << "Error in creating file 2!!!";
    }
    
    menu();
    
}

void Opdracht7::menu() {

    std::cout << "1 om jabberwocky achterstevoren in een file te zetten\n2 om jabberwocky om en om een regel in het Engels en een regel het Latijn in een file te zetten\n0 om terug te gaan\n";
    std::cin >> x;

    switch (x) {
    case 1:
        backwards();
        break;
    case 2:
        jumbled();
        break;
    case 0:
        in_stream.close();
        in_stream_latin.close();
        out_stream_backwards.close();
        out_stream_jumble.close();
        MainMenu();
        break;
    default:
        std::cout << "\nPlease enter a valid number\n\n";
        menu();
        break;
    }
    
}

void Opdracht7::backwards() {
    system("CLS");

    std::streampos begin, end;
    begin = in_stream.tellg();
    in_stream.seekg(0, std::ios::end);
    end = in_stream.tellg();
    fileCharAmount = (end - begin);
    fileCharAmount--;

    in_stream.seekg(0, begin);

    in_stream.get(ch);

    for (std::streamoff i = -2; i >= -fileCharAmount; i--) {
        in_stream.seekg(i, std::ios::end);

        in_stream.get(ch);

        out_stream_backwards.put(ch);
    }
    

    std::cout << "generated file can be found at: \n" << path << std::string("/jabberwocky_backwards") << "\nPress enter to continue...\n";
    std::cin.ignore(INT_MAX, '\n');
    std::cin.get();
    menu();
}

void Opdracht7::jumbled() {

        in_stream >> std::noskipws;
        in_stream_latin >> std::noskipws;
    while (!in_stream.eof()) {
        getline(in_stream, line);
        out_stream_jumble << line << "\n";
        
        getline(in_stream_latin, line);
        out_stream_jumble << line << "\n\n";
    }


    std::cout << "generated file can be found at: \n" << path << std::string("/jabberwocky_jumbled") << "\nPress enter to continue...\n";
    std::cin.ignore(INT_MAX, '\n');
    std::cin.get();
    menu();
}
