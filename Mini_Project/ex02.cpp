// Mini Project on Departmental store for Billing 

#include <iostream>
#include <string>

class Store
{
    
    private:
        std::string Store_Name = "D Mart";
        std::string Store_address = "Vellore";
        std::string Store_phone = "1234567890";
        std::string Store_email = "customer.support@dmart.com";
        
    public:
        static int item_stock[10];
        int itemNo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        float itemprice[10] = {10, 23, 34, 12, 34, 1, 24, 12, 298, 192};
        
        void print_bill(int items_list[], int qty[], int items)
        {   

            int total = 0;

            std::cout << std::endl;
            std::cout << Store_Name << std::endl;
            std::cout << Store_address << std::endl;
            std::cout << Store_phone << std::endl;
            std::cout << Store_email << std::endl;
            std::cout << std::endl;
            std::cout << "                    INVOICE" << std::endl;
            std::cout << "_______________________________________________" << std::endl;
            
            std::cout << "Sno.  Description     Price   Quantity    Total" << std::endl;
            for (int i = 0; i < items; i++) {
                std::cout << i + 1 <<  "        " << items_list[i] << "             " << itemprice[items_list[i] - 1] << "       " << qty[i] << "           " << qty[i] * itemprice[items_list[i] - 1] << std::endl;
                total += qty[i] * itemprice[items_list[i] - 1];
            }
            std::cout << "                              Total Amount: " << total << std::endl;
            std::cout << std::endl;
        }

        void order_request()
        {
            int items;

            std::cout << "Enter number of items: ";
            std::cin >> items;

            int items_list[10];
            int qty[10];

            for (int i = 0; i < items; i++) {
                std::cout << "Enter item number: ";
                std::cin >> items_list[i];
                std::cout << "Enter quantity of item: ";
                std::cin >> qty[i];
            }

            int a = 1;
            for (int i = 0; i < items; i++) {
                if (qty[items_list[i] - 1] > item_stock[items_list[i] - 1]) {
                    std::cout << "Item " << qty[items_list[i] - 1] << item_stock[items_list[i] - 1] << items_list[i] << " stock unavailable" << std::endl;
                    a = 0;
                }
            }
            
            if (a == 0) {
                std::cout << "Order Cancelled" <<std::endl;
                return;
            } else {
                for (int i = 0; i < items; i++) {
                    item_stock[items_list[i] - 1] -= qty[items_list[i] - 1];
                }
                
                print_bill(items_list, qty, items);
            }
            
        }        
};

int Store::item_stock[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

int main()
{
    Store s1;
    s1.order_request();
}
