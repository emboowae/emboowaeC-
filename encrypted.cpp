#include <iostream>

int main(){
    std::string word; // initiateas the variable 
    std::cout << "Enter a word: "; 
    std::getline(std::cin >> std::ws,word); // prompts for input 
    std::cin.clear(); // reboots the buffer incase of errors 
    fflush(stdin); // flushes it out

    // this is my guide key to get indexes 
    char letters[] = {'|', 'n', '8', '#', 'k', '"', '=', 'c', 'W', '[', 'O', ';', '&', 'v', '9', 'z', 'h', '/', 'I', '!', 'j', 'm', 'B', 'K', '?', '0', '$', 'A', '^', '{', 'b', 'U', 'L', 'x', 'e', ',', 'G', 'Q', 'X', '2', '+', ' ', 'g', ']', '~', 'w', 'a', '.', 'i', '3', 'l', '4', 'Y', 'D', 'J', 'u', 'P', '1', 'V', '@', 'Z', 'y', ':', '\\', 't', '`', '6', 'M', ')', '\'', '*', '-', '}', '>', 'q', '(', 'o', 'T', 'C', '<', '7', '_', 'p', 'r', 's', 'd', 'E', 'F', 'R', '5', '%', 'f', 'N','H', 'S'};

    // thien the index got from the letters array is used to encrypt the text entered
    char key[] = { 'Q', 'V', 'B', 'l', 'y', 'o', '9', 'f', 'K', 'w', 'Y', '<', 'G', 'T', '&', '+', '{', '-','s', 'I', '%', '5', 'M', '@', '[', 't', '}', 'J', '1', 'r', '*', '!', 'H', 'W', '8', 'S','6', '~', ')', 'N', '\'', '?', 'p', 'O', ':', '_', 'U', ';', 'm', 'Z', 'i', ']', 'h', 'X', 'z', ' ', 'u', 'c', 'E', 'g', '7', '4', 'n', 'A', 'x', '3', '#', 'b', 'j', '=', '$', 'P', 'R', '/', 'k', ',', '(', '^', 'e', '\'', '"', '`', '2', '.', 'D', '0', 'L', '|', 'F', 'v', 'd', 'a', 'q', 'C', '>'};

    // index keeper 
    int alphabet;

    // iterate for every key in my word 
    for(int i = 0;i < (int) word.length();i++){ 
        // get the character at that index 
        char let = word.at(i); // iterate thru the key replacing with the index 
        for(int j = 0;j < sizeof(letters)/sizeof(char);j++){ 
            if(let == letters[j]){ 
                alphabet = j; // if that letter is the same as in index, get it's index
            } 
            else{ 
                continue; 
            } 
        } 
        // show the encryption 
        std::cout << key[alphabet]; // output the letter in the key at index got from the letter array
    } 
    // end with new line character 
    std::cout << std::endl; 
    // end code 
    return 0; 
}
