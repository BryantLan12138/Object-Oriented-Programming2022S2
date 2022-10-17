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
        // put vector data into stream     
        void write(const Records& records){
                _file.open(_filename,ios::out); 
                if(_file.is_open()){               
                    for(int i=0;i<records.size();i++){
                        _file << records[i] << endl;
                    }                    
                    _file.close();
                }               
        }
        // put txt data into vector
        void read(Records& records){
            _file.open(_filename,ios::in);
            if(_file.is_open()){                           
                string line;
                while (std::getline(_file,line)){
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
    
    // reads records  
    receordM.read(myRecords);  
    for(int i=0;i<myRecords.size();i++){
        cout << myRecords[i] << endl;
    }

    // write new records to file
    // get the last record and add 1
    int a =  myRecords.back() + 1;    
    myRecords.push_back(a);        
    receordM.write(myRecords);
    
    return 0;
}