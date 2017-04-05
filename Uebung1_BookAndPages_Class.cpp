//
//  main.cpp
//  PG1_Uebung1_Aufgabe1
//
//  Created by Tuan Ngo on 05.04.17.
//  Copyright © 2017 Tuan Ngo. All rights reserved.
//

#include <iostream>
#include <string>

#define page1 1
#define page2 2
#define page3 3


using namespace std;

class page{

public:
    
    string pagetext;
    
    void write(string buffer){
        pagetext += buffer;
        pagetext += " ";
    }
    void print(){
        cout << pagetext << endl;
    }
};


class book{
    
private:

    page* pg1;
    page* pg2;
    page* pg3;
    
public:
    
    book(){
        pg1 = new page;
        pg2 = new page;
        pg3 = new page;
    };

    void write_in_pages(int pagenumber, string eingabe){
        if(pagenumber == page1){
            pg1->write(eingabe);
        }
        if(pagenumber == page2){
            pg2->write(eingabe);
        }
        if(pagenumber == page3){
            pg3->write(eingabe);
        }
    }
    
    void print_text(int state){
        
        if(state == page1){
            pg1->print();
        }
        if(state == page2){
            pg2->print();
        }
        if(state == page3){
            pg3->print();
        }
    }
    
    ~book(){
        delete(pg1);
        delete(pg2);
        delete(pg3);
    };
    
};

int main(int argc, const char * argv[]) {
    
    string buffer;
    string eingabe;
    int aktuell = page1;
    book* book1 = new book;


    
    cout << "schreiben Sie hier etwas rein oder geben Sie die Seite an!" << endl;
    
    while(true){
        buffer = "\0";
        getline(cin, eingabe);
        
        if(eingabe == "\\page1"){
            aktuell = page1;
            book1->write_in_pages(aktuell, buffer);
        }
        else if(eingabe == "\\page2"){
            aktuell = page2;
            book1->write_in_pages(aktuell, buffer);
        }
        else if(eingabe == "\\page3"){
            aktuell = page3;
            book1->write_in_pages(aktuell, buffer);
        }
        else if(eingabe == "\\print"){
            book1->print_text(aktuell);
        }
        else if(eingabe == "\\exit"){
            delete(book1);
            break;
        }

        else{
            buffer += eingabe;
            book1->write_in_pages(aktuell, buffer);
            }
        }
    return 0;
}


