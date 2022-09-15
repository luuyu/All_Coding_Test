#include <iostream>
#include <string>
#include <vector>
#include "MyString.hpp"
#include "MyString.cpp"
using namespace std;



bool match_vectors(const string& s1, const vector<char>& v2){
    if(s1.size() != v2.size()) { return false; }
    for(size_t i=0,N=s1.size(); i<N; ++i){
        if(s1[i] != v2[i]){ return false; }
    }
    return true;
}

int main() {
    const string   emptyString;
    const MyString emptyMyString;

    const string   testString   = "0123456789012345678901234567890123456789";
    const MyString testMyString = "0123456789012345678901234567890123456789";


    vector<double> total_score;
    bool flag = match_vectors(testString.substr(40   ), testMyString.substr(40   ).get_s());
    total_score.push_back(flag);
    //cout << "1" << endl;
    total_score.push_back(match_vectors(testString.substr(40   ), testMyString.substr(40   ).get_s()));
    total_score.push_back(match_vectors(testString.substr(40,10), testMyString.substr(40,10).get_s()));
    total_score.push_back(match_vectors(testString.substr(20   ), testMyString.substr(20   ).get_s()));
    total_score.push_back(match_vectors(testString.substr(20,30), testMyString.substr(20,30).get_s()));
    total_score.push_back(match_vectors(testString.substr(20,10), testMyString.substr(20,10).get_s()));
    
    total_score.push_back(( testString.find('a'   ) ==  testMyString.find('a'   )) );
    total_score.push_back(( testString.find('a',20) ==  testMyString.find('a',20)) );
    total_score.push_back(( testString.find('a',40) ==  testMyString.find('a',40)) );
    total_score.push_back(( testString.find('a',60) ==  testMyString.find('a',60)) );
    total_score.push_back((testString.rfind('a'   ) == testMyString.rfind('a'   )) );
    total_score.push_back((testString.rfind('a',20) == testMyString.rfind('a',20)) );
    total_score.push_back((testString.rfind('a',40) == testMyString.rfind('a',40)) );
    total_score.push_back((testString.rfind('a',60) == testMyString.rfind('a',60)) );

    total_score.push_back(( testString.find('0'   ) ==  testMyString.find('0'   )) );
    total_score.push_back(( testString.find('0',20) ==  testMyString.find('0',20)) );
    total_score.push_back(( testString.find('0',40) ==  testMyString.find('0',40)) );
    total_score.push_back(( testString.find('0',60) ==  testMyString.find('0',60)) );
    total_score.push_back((testString.rfind('0'   ) == testMyString.rfind('0'   )) );
    total_score.push_back((testString.rfind('0',20) == testMyString.rfind('0',20)) );
    total_score.push_back((testString.rfind('0',40) == testMyString.rfind('0',40)) );
    total_score.push_back((testString.rfind('0',60) == testMyString.rfind('0',60)) );

    total_score.push_back(( testString.find('8'   ) ==  testMyString.find('8'   )) );
    total_score.push_back(( testString.find('8',20) ==  testMyString.find('8',20)) );
    total_score.push_back(( testString.find('8',40) ==  testMyString.find('8',40)) );
    total_score.push_back(( testString.find('8',60) ==  testMyString.find('8',60)) );
    total_score.push_back((testString.rfind('8'   ) == testMyString.rfind('8'   )) );
    total_score.push_back((testString.rfind('8',20) == testMyString.rfind('8',20)) );
    total_score.push_back((testString.rfind('8',40) == testMyString.rfind('8',40)) );
    total_score.push_back((testString.rfind('8',60) == testMyString.rfind('8',60)) );

    total_score.push_back(( testString.find('9'   ) ==  testMyString.find('9'   )) );
    total_score.push_back(( testString.find('9',20) ==  testMyString.find('9',20)) );
    total_score.push_back(( testString.find('9',40) ==  testMyString.find('9',40)) );
    total_score.push_back(( testString.find('9',60) ==  testMyString.find('9',60)) );
    total_score.push_back((testString.rfind('9'   ) == testMyString.rfind('9'   )) );
    total_score.push_back((testString.rfind('9',20) == testMyString.rfind('9',20)) );
    total_score.push_back((testString.rfind('9',40) == testMyString.rfind('9',40)) );
    total_score.push_back((testString.rfind('9',60) == testMyString.rfind('9',60)) );

    total_score.push_back(( testString.find(""   ) ==  testMyString.find(""   )) );
    total_score.push_back(( testString.find("",20) ==  testMyString.find("",20)) );
    total_score.push_back(( testString.find("",40) ==  testMyString.find("",40)) );
    total_score.push_back(( testString.find("",60) ==  testMyString.find("",60)) );
    total_score.push_back((testString.rfind(""   ) == testMyString.rfind(""   )) );
    total_score.push_back((testString.rfind("",20) == testMyString.rfind("",20)) );
    total_score.push_back((testString.rfind("",40) == testMyString.rfind("",40)) );
    total_score.push_back((testString.rfind("",60) == testMyString.rfind("",60)) );

    total_score.push_back(( testString.find("018"   ) ==  testMyString.find("018"   )) );
    total_score.push_back(( testString.find("018",20) ==  testMyString.find("018",20)) );
    total_score.push_back(( testString.find("018",40) ==  testMyString.find("018",40)) );
    total_score.push_back(( testString.find("018",60) ==  testMyString.find("018",60)) );
    total_score.push_back((testString.rfind("018"   ) == testMyString.rfind("018"   )) );
    total_score.push_back((testString.rfind("018",20) == testMyString.rfind("018",20)) );
    total_score.push_back((testString.rfind("018",40) == testMyString.rfind("018",40)) );
    total_score.push_back((testString.rfind("018",60) == testMyString.rfind("018",60)) );

    total_score.push_back(( testString.find("648"   ) ==  testMyString.find("648"   )) );
    total_score.push_back(( testString.find("648",20) ==  testMyString.find("648",20)) );
    total_score.push_back(( testString.find("648",40) ==  testMyString.find("648",40)) );
    total_score.push_back(( testString.find("648",60) ==  testMyString.find("648",60)) );
    total_score.push_back((testString.rfind("648"   ) == testMyString.rfind("648"   )) );
    total_score.push_back((testString.rfind("648",20) == testMyString.rfind("648",20)) );
    total_score.push_back((testString.rfind("648",40) == testMyString.rfind("648",40)) );
    total_score.push_back((testString.rfind("648",60) == testMyString.rfind("648",60)) );

    total_score.push_back(( testString.find("012"   ) ==  testMyString.find("012"   )) );
    total_score.push_back(( testString.find("012",20) ==  testMyString.find("012",20)) );
    total_score.push_back(( testString.find("012",40) ==  testMyString.find("012",40)) );
    total_score.push_back(( testString.find("012",60) ==  testMyString.find("012",60)) );
    total_score.push_back((testString.rfind("012"   ) == testMyString.rfind("012"   )) );
    total_score.push_back((testString.rfind("012", 9) == testMyString.rfind("012", 9)) );
    total_score.push_back((testString.rfind("012",40) == testMyString.rfind("012",40)) );
    total_score.push_back((testString.rfind("012",60) == testMyString.rfind("012",60)) );

    total_score.push_back(( testString.find("890"   ) ==  testMyString.find("890"   )) );
    total_score.push_back(( testString.find("890",20) ==  testMyString.find("890",20)) );
    total_score.push_back(( testString.find("890",40) ==  testMyString.find("890",40)) );
    total_score.push_back(( testString.find("890",60) ==  testMyString.find("890",60)) );
    total_score.push_back((testString.rfind("890"   ) == testMyString.rfind("890"   )) );
    total_score.push_back((testString.rfind("890",20) == testMyString.rfind("890",20)) );
    total_score.push_back((testString.rfind("890",40) == testMyString.rfind("890",40)) );
    total_score.push_back((testString.rfind("890",60) == testMyString.rfind("890",60)) );

    total_score.push_back(( testString.find("789"   ) ==  testMyString.find("789"   )) );
    total_score.push_back(( testString.find("789",30) ==  testMyString.find("789",30)) );
    total_score.push_back(( testString.find("789",40) ==  testMyString.find("789",40)) );
    total_score.push_back(( testString.find("789",60) ==  testMyString.find("789",60)) );
    total_score.push_back((testString.rfind("789"   ) == testMyString.rfind("789"   )) );
    total_score.push_back((testString.rfind("789",20) == testMyString.rfind("789",20)) );
    total_score.push_back((testString.rfind("789",40) == testMyString.rfind("789",40)) );
    total_score.push_back((testString.rfind("789",60) == testMyString.rfind("789",60)) );

    total_score.push_back(( emptyString.find('0'   ) ==  emptyMyString.find('0'   )) );
    total_score.push_back(( emptyString.find('0', 0) ==  emptyMyString.find('0', 0)) );
    total_score.push_back(( emptyString.find('0',20) ==  emptyMyString.find('0',20)) );
    total_score.push_back((emptyString.rfind('0'   ) == emptyMyString.rfind('0'   )) );
    total_score.push_back((emptyString.rfind('0', 0) == emptyMyString.rfind('0', 0)) );
    total_score.push_back((emptyString.rfind('0',20) == emptyMyString.rfind('0',20)) );

    total_score.push_back(( emptyString.find("0"   ) ==  emptyMyString.find("0"   )) );
    total_score.push_back(( emptyString.find("0", 0) ==  emptyMyString.find("0", 0)) );
    total_score.push_back(( emptyString.find("0",20) ==  emptyMyString.find("0",20)) );
    total_score.push_back((emptyString.rfind("0"   ) == emptyMyString.rfind("0"   )) );
    total_score.push_back((emptyString.rfind("0", 0) == emptyMyString.rfind("0", 0)) );
    total_score.push_back((emptyString.rfind("0",20) == emptyMyString.rfind("0",20)) );

    total_score.push_back(( emptyString.find(""   ) ==  emptyMyString.find(""   )) );
    total_score.push_back(( emptyString.find("", 0) ==  emptyMyString.find("", 0)) );
    total_score.push_back(( emptyString.find("",20) ==  emptyMyString.find("",20)) );
    total_score.push_back((emptyString.rfind(""   ) == emptyMyString.rfind(""   )) );
    total_score.push_back((emptyString.rfind("", 0) == emptyMyString.rfind("", 0)) );
    total_score.push_back((emptyString.rfind("",20) == emptyMyString.rfind("",20)) );
    // 18 + 80 + 2 + 5 = 105

    const string   testString2   = "0000";
    const MyString testMyString2 = "0000";

    total_score.push_back(( testString2.find("0") ==  testMyString2.find("0")) );
    total_score.push_back(( testString2.rfind("0") ==  testMyString2.rfind("0")) );
    total_score.push_back(( testString2.find("0",4) ==  testMyString2.find("0",4)) );
    total_score.push_back(( testString2.find("0001") ==  testMyString2.find("0001")) );
    total_score.push_back(( testString2.find("0001",1) ==  testMyString2.find("0001",1)) );
    total_score.push_back(( testString2.find("0001",10) ==  testMyString2.find("0001",10)) );
    total_score.push_back((testString2.find("00001") == testMyString2.find("00001")) );

    double sum = 0;
    for(size_t i=0, N=total_score.size(); i<N; ++i){
        sum += total_score[i];
    }
    cout << "\nTotal score: " << sum << " / " << total_score.size() << endl;

    return 0;
}