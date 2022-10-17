#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// vector of int. 
// used to store the records
typedef vector<int> Records;

//https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager{
    private:
        fstream _file;
        string _filename;        
    public:
        RecordsManager(string filename):_filename(filename){}        
        void write(const Records& records){
                _file.open(_filename,ios::out); 
                if(_file.is_open()){               
                    for(int i=0;i<records.size();i++){
                        _file << records[i] << endl;
                    }                    
                    _file.close();
                }               
        }
        void read(Records& records){
            _file.open(_filename,ios::in);
            if(_file.is_open()){                           
                string line;
                while (std::getline(_file,line)){
                    // vector{}
                    // vector.push_back(1)
                    // vector{1}
                    // vector.push_back(1)
                    // vector{1 , 2}
                    records.push_back(stoi(line));
                } 
                _file.close();           
            }
        }        
};

int main(){        
    RecordsManager receordM("test_corrupt.txt");
    //RecordsManager receordM("test_corrupt.txt");
    Records myRecords;
    try{    
        // reads records  
        receordM.read(myRecords);  
        for(int i=0;i<myRecords.size();i++){
            cout << myRecords[i] << endl;
        }
    }catch(std::invalid_argument e){
        cout << e.what() << endl;
        // myRecords {12545, 85454}
        // stoi 12545 85454 
        // receordM.read(myRecords);  
        // for(int i=0;i<myRecords.size();i++){
        //     cout << myRecords[i] << endl;
        // }
    }

    // write new records to file
    // get the last record and add 1

    // a = 85455
    int a =  myRecords.back() + 1;   
    
    myRecords.push_back(a);  
    // myRecords {12545, 85454, a }       
    receordM.write(myRecords);
    
    return 0;
}