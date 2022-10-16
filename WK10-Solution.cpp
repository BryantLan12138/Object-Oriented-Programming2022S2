#include <iostream>
#include <stack>

using namespace std;

class USBConnection{
    private:
        int ID;
        static stack<int> ids;
        USBConnection(int id){
            ID = id;
        }
    public:
        int get_id(){return ID;} 
        static USBConnection* CreateUsbConnection(){
            if(ids.size()>0){
                int id = USBConnection::ids.top();
                USBConnection::ids.pop();
                USBConnection* c = new USBConnection(id);
                return c;
            }else{
                return nullptr;
            }
        }
        ~USBConnection(){            
            USBConnection::ids.push(ID);
        }

};

// ids is the static member 
// only 3 usb ports available
stack<int> USBConnection::ids({3,2,1});

int main(){
    int max_usb_ports = 10;
    USBConnection* c[max_usb_ports]; 
    for(int i=0;i<max_usb_ports;i++){
        // CreateUsbConnection is a static function
        // it creates a new object of USBConnection ...
        // if a port is available
        c[i] = USBConnection::CreateUsbConnection();
        if (c[i] != nullptr){
            cout << "USB connection with ID =" << c[i]->get_id() << " was created\n"; 
        }else{
            cout << "no more USB ports available\n";
        }
    }
    // let's unplug one use connection
    delete c[1];
    // this should return ID 2 to the stack.

    USBConnection* a = USBConnection::CreateUsbConnection();
    if (a != nullptr){
            cout << "USB connection with ID =" << a->get_id() << " was created\n"; 
    }else{
            cout << "no more USB ports available\n";
    }
       
    
    return 0;
}