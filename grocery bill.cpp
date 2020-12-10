//Simple grocery bill generating code (implementing decision statements and looping statements as well)
#include <iostream>
using namespace std;
int main()
{ int itemcode,quant; float amount=0; char ch;
 cout<<"To get your bill, please follow instructions.\n";
 cout<<"Please enter itemcode (1-11) for item to be purchased.\n";
 LOOP: do{
 cout<<"1. Fresh Produce (40/- per kg)\n";
 cout<<"2. Drinks (60/- per item)\n";
 cout<<"3. Dairy & Bread (30/- per item)\n";
 cout<<"4. Meat & Seafood (100/- per item)\n";
 cout<<"5. Eggs (6/- per item)\n";
 cout<<"6. Oil, Sauces, Spices & Condiments (50/- per item)\n";
 cout<<"7. Foodgrains (50/- per kg)\n";
 cout<<"8. Cereal & Breakfast Foods (50/- per item)\n";
 cout<<"9.Soups & Canned Goods (40/- per item)\n";
 cout<<"10. Frozen Foods (60/- per item)\n";
 cout<<"11. Snacks (30/- per item)\n";
 cout<<"Enter the choice please.\n";
 cin>>itemcode;
 switch(itemcode)
    {case(1):{cout<<"enter quantity\n";
            cin>>quant;
             amount+=(quant*40); }break;
    case(2):{cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*60); }break;
    case(3): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*30); }break;
    case(4): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*100); }break;
    case(5): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*6); }break;
    case(6): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*50); }break;
    case(7): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*50); }break;
    case(8): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*50); }break;
    case(9): {cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*40); }break;
    case(10):{cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*60); }break;
    case(11):{cout<<"enter quantity\n";
            cin>>quant;
            amount+=(quant*30); }break;
    default:"Sorry! You have entered an invalid choice.\n";         
        
  }
  cout<<"Make sure that all items have been billed, before receiving the final bill.\n";
  cout<<"Do you want to receive final bill? (Y/N) If not please repeat the billing process again.\n";
  cin>>ch;
  if(ch=='N')
    goto LOOP;
  else
    break;  
  }while(ch=='N');
 cout<<"Your final bill total is: "<<amount<<"\n";
 cout<<"Thank you and please visit us again!\n";
 return 0;
}
