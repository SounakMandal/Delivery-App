#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

struct Customer
{
   char name[50];
   char address[100];
   char mobile[50];
   int distance;
   char outlet[50];
   char category[20][50];
   char sub_category[20][50];
   int quantity[20];
   double price[20];
   int number;
   double gross;
   double CGST;
   double SGST;
   double cess;
   double discount;
   double delivery_charge;
   double net;
};

void Customer_Details(Customer &ob)
{
   cout<<"Please enter your credentials correctly"<<endl;
   cout<<"\nEnter your name"<<endl;
   gets(ob.name);
   cout<<"\nEnter your address"<<endl;
   gets(ob.address);
   cout<<"\nEnter your mobile number"<<endl;
   gets(ob.mobile);
   cout<<"\nEnter the distance of your place"<<endl;
   cin>>ob.distance;
   clrscr();
}

void Outlet(Customer &ob)
{
   int ch;
   cout<<"We are happy to extend our delivery services"<<endl;
   cout<<"We accept delivery orders from following outlets"<<endl;
   cout<<"1. Dominos \n2. Pizza Hut \n3. Hayat \n4. Taj Bengal"<<endl;
   cout<<"5. Wow Momo \n6. Hangout \n7. Kaidi Kitchen \n8. ITC"<<endl;
   cout<<"\nEnter the option of the outlet ";
   cin>>ch;
   switch(ch)
   {
      case 1:   strcpy(ob.outlet, "Dominos");       break;
      case 2:   strcpy(ob.outlet, "Pizza Hut");     break;
      case 3:   strcpy(ob.outlet, "Hayat");         break;
      case 4:   strcpy(ob.outlet, "Taj Bengal");    break;
      case 5:   strcpy(ob.outlet, "Wow Momo");      break;
      case 6:   strcpy(ob.outlet, "Hangout");       break;
      case 7:   strcpy(ob.outlet, "Kaidi Kitchen"); break;
      case 8:   strcpy(ob.outlet, "ITC");           break;
      default:
	 cout<<"This restraurant is not in our list"<<endl;
	 cout<<"We will try to deliver the order"<<endl;
	 cout<<"Enter the name of the retraurant"<<endl;
	 gets(ob.outlet);
   }
   clrscr();
}

void Menu(Customer &ob)
{
   char condition = '\0';
   int i = 0;
   ob.number = 0;
   do
   {
      int ch, choice;
      cout<<"\t\t\tMENU\t\t\t"<<endl;
      cout<<"1. Chicken"<<endl;
      cout<<"2. Burgers"<<endl;
      cout<<"3. Rice Bowls"<<endl;
      cout<<"4. Snacks"<<endl;
      cout<<"5. Pizzas"<<endl;
      cout<<"6. Full Meals"<<endl;
      cout<<"7. Beverages"<<endl;
      cout<<"\nEnter your choice ";
      cin>>ch;
      clrscr();
      switch(ch)
      {
	 case 1:
	 cout<<"1. Triple Treat"<<endl;
	 cout<<"2. Hot and Crispy Chicken"<<endl;
	 cout<<"3. Smoked and Grilled"<<endl;
	 cout<<"4. Chicken Bucket"<<endl;
	 cout<<"5. Chicken Fried Roll"<<endl;
	 cout<<"6. Mexican Special"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Triple Treat");
	    ob.price[i] = 120;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Hot and Crispy Chicken");
	    ob.price[i] = 200;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Smoked and Grilled");
	    ob.price[i] = 250;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Chicken Bucket");
	    ob.price[i] = 350;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Chicken Fried Roll");
	    ob.price[i] = 100;
	    break;

	    case 6:
	    strcpy(ob.sub_category[i],"Mexican Special");
	    ob.price[i] = 180;
	    break;
	 }
	 strcpy(ob.category[i], "Chicken");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 2:
	 cout<<"1. Double Down Burgers"<<endl;
	 cout<<"2. 5 in 1 Special Treat"<<endl;
	 cout<<"3. Veg Masti"<<endl;
	 cout<<"4. Chicken Burger"<<endl;
	 cout<<"5. Chicken Zinger"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Double Down Burgers");
	    ob.price[i] = 60;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"5 in 1 Special Treat");
	    ob.price[i] = 150;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Veg Masti");
	    ob.price[i] = 40;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Chicken Burger");
	    ob.price[i] = 100;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Chicken Zinger");
	    ob.price[i] = 120;
	    break;
	 }
	 strcpy(ob.category[i], "Burger");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 3:
	 cout<<"1. Smoky Rice Bowlz"<<endl;
	 cout<<"2. Chicken Rice Bowl"<<endl;
	 cout<<"3. 5 in 1 Rice Box"<<endl;
	 cout<<"4. Veg Rice Bowl"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Smoky Rice Bowlz");
	    ob.price[i] = 400;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Chicken Rice Bowl");
	    ob.price[i] = 500;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"5 in 1 Rice Box");
	    ob.price[i] = 500;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Veg Rice Bowl");
	    ob.price[i] = 200;
	    break;
	 }
	 strcpy(ob.category[i], "Rice Bowls");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 4:
	 cout<<"1. Boneless Stripes"<<endl;
	 cout<<"2. Hot Chicken Wings"<<endl;
	 cout<<"3. Hot And Crispy Chicken"<<endl;
	 cout<<"4. Large Popcorn"<<endl;
	 cout<<"5. Veg Stripes"<<endl;
	 cout<<"6. Chicken Heaven"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Boneless Stripes");
	    ob.price[i] = 120;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Hot Chicken Wings");
	    ob.price[i] = 175;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Hot And Crispy Chicken");
	    ob.price[i] = 120;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Large Popcorn");
	    ob.price[i] = 60;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Veg Stripes");
	    ob.price[i] = 75;
	    break;

	    case 6:
	    strcpy(ob.sub_category[i],"Chicken Heaven");
	    ob.price[i] = 190;
	 }
	 strcpy(ob.category[i], "Snacks");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 5:
	 cout<<"1. Chicken Hawaiian Pizza"<<endl;
	 cout<<"2. Chicken Fiestal"<<endl;
	 cout<<"3. Barbeque Chicken Pizza"<<endl;
	 cout<<"4. Zesty Chicken"<<endl;
	 cout<<"5. Seventh Heaven"<<endl;
	 cout<<"6. Chicken Golden Delight"<<endl;
	 cout<<"7. Veggie Pizza"<<endl;
	 cout<<"8. Delux Veggie"<<endl;
	 cout<<"9. Farmhouse"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Chicken Hawaiian Pizza");
	    ob.price[i] = 350;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Chicken Fiestal");
	    ob.price[i] = 400;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Barbeque Chicken Pizza");
	    ob.price[i] = 450;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Zesty Chicken");
	    ob.price[i] = 450;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Seventh Heaven");
	    ob.price[i] = 500;
	    break;

	    case 6:
	    strcpy(ob.sub_category[i],"Chicken Golden Delight");
	    ob.price[i] = 600;
	    break;

	    case 7:
	    strcpy(ob.sub_category[i],"Veggie Pizza");
	    ob.price[i] = 300;
	    break;

	    case 8:
	    strcpy(ob.sub_category[i],"Delux Veggie");
	    ob.price[i] = 350;
	    break;

	    case 9:
	    strcpy(ob.sub_category[i],"Farmhouse");
	    ob.price[i] = 350;
	    break;
	 }
	 strcpy(ob.category[i], "Pizza");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 6:
	 cout<<"1. Fried Rice and Chilli Chicken"<<endl;
	 cout<<"2. Fried Rice with Prawn"<<endl;
	 cout<<"3. Fried Rice with Veg Delux"<<endl;
	 cout<<"4. Chicken Biriyani"<<endl;
	 cout<<"5. Mutton Biriyani"<<endl;
	 cout<<"6. Special Biriyani"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Fried Rice and Chilli Chicken");
	    ob.price[i] = 500;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Fried Rice with Prawn");
	    ob.price[i] = 450;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Fried Rice with Veg Delux");
	    ob.price[i] = 400;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Chicken Biriyani");
	    ob.price[i] = 200;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Mutton Biriyani");
	    ob.price[i] = 400;
	    break;

	    case 6:
	    strcpy(ob.sub_category[i],"Special Biriyani");
	    ob.price[i] = 450;
	    break;
	 }
	 strcpy(ob.category[i], "Full Meals");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;

	 case 7:
	 cout<<"1. Choco Delight"<<endl;
	 cout<<"2. Choco Lash"<<endl;
	 cout<<"3. Strawberry Storm"<<endl;
	 cout<<"4. Alphonso Burst"<<endl;
	 cout<<"5. Cafe Cuba"<<endl;
	 cout<<"6. Red Bull"<<endl;
	 cout<<"7. Pepsi"<<endl;
	 cout<<"Choose any one of the following ";
	 cin>>choice;
	 switch(choice)
	 {
	    case 1:
	    strcpy(ob.sub_category[i],"Choco Delight");
	    ob.price[i] = 100;
	    break;

	    case 2:
	    strcpy(ob.sub_category[i],"Choco Lash");
	    ob.price[i] = 95;
	    break;

	    case 3:
	    strcpy(ob.sub_category[i],"Strawberry Storm");
	    ob.price[i] = 80;
	    break;

	    case 4:
	    strcpy(ob.sub_category[i],"Alphonso Burst");
	    ob.price[i] = 90;
	    break;

	    case 5:
	    strcpy(ob.sub_category[i],"Cafe Cuba");
	    ob.price[i] = 80;
	    break;

	    case 6:
	    strcpy(ob.sub_category[i],"Red Bull");
	    ob.price[i] = 50;
	    break;

	    case 7:
	    strcpy(ob.sub_category[i],"Pepsi");
	    ob.price[i] = 40;
	    break;
	 }
	 strcpy(ob.category[i], "Beverages");
	 cout<<"Enter the quantity ";
	 cin>>ob.quantity[i];
	 break;
      }
      i++;
      ob.number++;
      cout<<"\nYour order "<<i<<" has been accepted"<<endl;
      cout<<"Do you want to order more?"<<endl;
      cout<<"Enter Y is Yes and N if No"<<endl;
      cin>>condition;
      clrscr();
   }
   while(condition == 'y' || condition == 'Y');
}

void Calculate(Customer &ob)
{
   for(int i = 0; i < ob.number; i++)
      ob.gross += ob.price[i] * ob.quantity[i];

   if(ob.gross >= 2000)
   {
      if(ob.distance <= 20)
	 ob.delivery_charge = 0;
      else
	 ob.delivery_charge = (ob.distance - 20) * 1;
   }
   else if(ob.gross >= 400 && ob.gross < 2000)
   {
      if(ob.distance <= 5)
	 ob.delivery_charge = 0;
      else
	 ob.delivery_charge = (ob.distance - 5) * 2;
   }
   else
      ob.delivery_charge = 3 * ob.distance;

   ob.SGST = 0.1 * ob.gross;
   ob.CGST = 0.1 * ob.gross;
   ob.cess = 0.02 * ob.gross;
   ob.discount = 100;
   ob.net = ob.gross + ob.SGST + ob.CGST + ob.cess - ob.discount;
   ob.net = ob.net + ob.delivery_charge;
}

void Bill(Customer &ob)
{
   cout<<"Name : ";
   puts(ob.name);
   cout<<"Address : ";
   puts(ob.address);
   cout<<"Mobile Number : ";
   puts(ob.mobile);
   cout<<"\n"<<endl;

   for(int i = 0; i < ob.number; i++)
   {
      puts(ob.category[i]);
      puts(ob.sub_category[i]);
      cout<<ob.price[i]<<endl;
      cout<<"\n"<<endl;
   }

   cout<<"Gross Amount : "<<ob.gross<<endl;
   cout<<"CGST : "<<ob.CGST<<endl;
   cout<<"SGST : "<<ob.SGST<<endl;
   cout<<"Cess : "<<ob.cess<<endl;
   cout<<"Discount : "<<ob.discount<<endl;
   cout<<"Delivery Charge : "<<ob.delivery_charge<<endl;
   cout<<"Net Amount : "<<ob.net<<endl;
}

void Terms()
{
   cout<<"Info About Service"<<endl;
   cout<<"\nA. Delivery Charges"<<endl;
   cout<<"1. Orders above Rs 2000 are free of delivery charge upto 20 KM"<<endl;
   cout<<"2. For orders above Rs 2000 beyond 20 KM delivery charge is Rs 1 per KM above 20 KM"<<endl;
   cout<<"3. Orders between Rs 400 and Rs 2000 are free of delivery charge upto 5 KM"<<endl;
   cout<<"4. For orders between Rs 400 and Rs 2000 delivery charge is Rs 2 per KM above 2 KM"<<endl;
   cout<<"5. For orders below Rs 400 delivery charge is Rs 3 per KM for any distance"<<endl;
   cout<<"6. Delivery charge is calculated on gross amount"<<endl;

   cout<<"\nB. Tax Rates"<<endl;
   cout<<"The tax rates are as per the directives of gov of India"<<endl;
   cout<<"1. Tax rates are calculated on gross amount"<<endl;
   cout<<"2. SGST applicable at 10% of bill amount"<<endl;
   cout<<"3. CGST applicable at 10% of bill amount"<<endl;
   cout<<"4. Swacch Bharat Cess at 2% of bill amount"<<endl;

   cout<<"\nC. Terms And Conditions"<<endl;
   cout<<"1. We don't deliver food from other company"<<endl;
   cout<<"2. The company doesn't take responsibility for delivery within fixed time"<<endl;
   cout<<"3. There will be no return of order unless there is mixup of order"<<endl;
   cout<<"For any queries contact 9074325784"<<endl;
}

void Feedback()
{
}

void main()
{
   clrscr();
   Customer c;
   Customer_Details(c);
   Outlet(c);
   Menu(c);
   Calculate(c);
   Terms();
   Bill(c);
   getch();
}
