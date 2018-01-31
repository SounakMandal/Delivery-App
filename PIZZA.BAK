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
   cout<<"\nPlease enter your credentials correctly"<<endl;
   cout<<"\nEnter your name"<<endl;
   gets(ob.name);
   cout<<"\nEnter your address"<<endl;
   gets(ob.address);
   cout<<"\nEnter your mobile number"<<endl;
   gets(ob.mobile);
   clrscr();
}


void Outlet(Customer &ob)
{
   int ch;
   cout<<"We are happy to extend our delivery services"<<endl;
   cout<<"We accept delivery orders from following outlets"<<endl;
   cout<<"1. Dominos"<<endl;
   cout<<"2. Pizza Hut"<<endl;
   cout<<"3. Hayat"<<endl;
   cout<<"4. Taj Bengal"<<endl;
   cout<<"5. Wow Momo"<<endl;
   cout<<"6. Hangout"<<endl;
   cout<<"7. Kaidi Kitchen"<<endl;
   cout<<"8. ITC"<<endl;
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
   cout<<"Enter the distance of your place from outlet ";
   cin>>ob.distance;
   clrscr();
}


void Chicken(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Triple Treat"<<endl;
   cout<<"2. Hot and Crispy Chicken"<<endl;
   cout<<"3. Smoked and Grilled"<<endl;
   cout<<"4. Chicken Bucket"<<endl;
   cout<<"5. Chicken Fried Roll"<<endl;
   cout<<"6. Mexican Special"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void Burger(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Double Down Burgers"<<endl;
   cout<<"2. 5 in 1 Special Treat"<<endl;
   cout<<"3. Veg Masti"<<endl;
   cout<<"4. Chicken Burger"<<endl;
   cout<<"5. Chicken Zinger"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void RiceBowls(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Smoky Rice Bowlz"<<endl;
   cout<<"2. Chicken Rice Bowl"<<endl;
   cout<<"3. 5 in 1 Rice Box"<<endl;
   cout<<"4. Veg Rice Bowl"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void Snacks(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Boneless Stripes"<<endl;
   cout<<"2. Hot Chicken Wings"<<endl;
   cout<<"3. Hot And Crispy Chicken"<<endl;
   cout<<"4. Large Popcorn"<<endl;
   cout<<"5. Veg Stripes"<<endl;
   cout<<"6. Chicken Heaven"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void Pizzas(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Chicken Hawaiian Pizza"<<endl;
   cout<<"2. Chicken Fiestal"<<endl;
   cout<<"3. Barbeque Chicken Pizza"<<endl;
   cout<<"4. Zesty Chicken"<<endl;
   cout<<"5. Seventh Heaven"<<endl;
   cout<<"6. Chicken Golden Delight"<<endl;
   cout<<"7. Veggie Pizza"<<endl;
   cout<<"8. Delux Veggie"<<endl;
   cout<<"9. Farmhouse"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void FullMeals(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Fried Rice and Chilli Chicken"<<endl;
   cout<<"2. Fried Rice with Prawn"<<endl;
   cout<<"3. Fried Rice with Veg Delux"<<endl;
   cout<<"4. Chicken Biriyani"<<endl;
   cout<<"5. Mutton Biriyani"<<endl;
   cout<<"6. Special Biriyani"<<endl;
   cout<<"\nChoose any one of the following ";
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
}

void Beverages(Customer &ob, int i)
{
   int choice;
   cout<<endl;
   cout<<"1. Choco Delight"<<endl;
   cout<<"2. Choco Lash"<<endl;
   cout<<"3. Strawberry Storm"<<endl;
   cout<<"4. Alphonso Burst"<<endl;
   cout<<"5. Cafe Cuba"<<endl;
   cout<<"6. Red Bull"<<endl;
   cout<<"7. Pepsi"<<endl;
   cout<<"\nChoose any one of the following ";
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
}


void PizzaSpecial(Customer &ob, int i)
{
   int ch;
   cout<<"\tMENU"<<endl;
   cout<<"1. Burgers"<<endl;
   cout<<"2. Snacks"<<endl;
   cout<<"3. Pizzas"<<endl;
   cout<<"4. Beverages"<<endl;
   cout<<"\nEnter your choice ";
   cin>>ch;
   clrscr();
   switch(ch)
   {
      case 1:   Burger(ob,i);   break;
      case 2:   Snacks(ob,i);   break;
      case 3:   Pizzas(ob,i);   break;
      case 4:   Beverages(ob,i);break;
   }
}

void Some(Customer &ob, int i)
{
   int ch;
   cout<<"\tMENU"<<endl;
   cout<<"1. Chicken"<<endl;
   cout<<"2. Burgers"<<endl;
   cout<<"3. Snacks"<<endl;
   cout<<"4. Beverages"<<endl;
   cout<<"\nEnter your choice ";
   cin>>ch;
   clrscr();
   switch(ch)
   {
      case 1:   Chicken(ob,i);  break;
      case 2:   Burger(ob,i);   break;
      case 3:   Snacks(ob,i);   break;
      case 4:   Beverages(ob,i);break;
   }
}

void All(Customer &ob, int i)
{
   int ch;
   cout<<"\tMENU"<<endl;
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
      case 1:   Chicken(ob,i);  break;
      case 2:   Burger(ob,i);   break;
      case 3:   RiceBowls(ob,i);break;
      case 4:   Snacks(ob,i);   break;
      case 5:   Pizzas(ob,i);   break;
      case 6:   FullMeals(ob,i);break;
      case 7:   Beverages(ob,i);break;
   }
}


void Menu(Customer &ob)
{
   char condition = '\0';
   int i = 0;
   ob.number = 0;
   do
   {
      int ch;
      if(strcmpi(ob.outlet, "Dominos") == 0)
	 PizzaSpecial(ob,i);
      else if(strcmpi(ob.outlet, "Pizza Hut") == 0)
	 PizzaSpecial(ob,i);
      else if(strcmpi(ob.outlet, "Hayat") == 0)
	 All(ob,i);
      if(strcmpi(ob.outlet, "Taj Bengal") == 0)
	 All(ob,i);
      if(strcmpi(ob.outlet, "Wow Momo") == 0)
	 Some(ob,i);
      if(strcmpi(ob.outlet, "Hangout") == 0)
	 All(ob,i);
      if(strcmpi(ob.outlet, "Kaidi Kitchen") == 0)
	 All(ob,i);
      if(strcmpi(ob.outlet, "ITC") == 0)
	 All(ob,i);
      i++;
      ob.number++;
      cout<<"\nYour order "<<i<<" has been accepted."<<endl;
      cout<<"Do you want to order more?"<<endl;
      cout<<"Enter Y is Yes and N if No :";
      cin>>condition;
      clrscr();
   }
   while(condition == 'y' || condition == 'Y');
}


double Delivery_Charge(double gross, int distance)
{
   double delivery;
   if(gross >= 2000)
   {
      if(distance <= 20)
	 delivery = 0;
      else
	 delivery = (distance - 20) * 1;
   }
   else if(gross >= 400 && gross < 2000)
   {
      if(distance <= 5)
	 delivery = 0;
      else
	 delivery = (distance - 5) * 2;
   }
   else
      delivery = 3 * distance;
   return delivery;
}


double Discount(double gross)
{
   double discount;
   if(gross <= 500)
      discount = 0.05 * gross;
   else if(gross <= 1500)
      discount = 0.1 * gross;
   else
      discount = 0.15 * gross;
   return discount;
}


void Calculate(Customer &ob)
{
   for(int i = 0; i < ob.number; i++)
      ob.gross += ob.price[i] * ob.quantity[i];
   ob.delivery_charge = Delivery_Charge(ob.gross, ob.distance);
   ob.SGST = 0.1 * ob.gross;
   ob.CGST = 0.1 * ob.gross;
   ob.cess = 0.02 * ob.gross;
   ob.discount = Discount(ob.gross);
   ob.net = ob.gross + ob.SGST + ob.CGST + ob.cess - ob.discount;
   ob.net = ob.net + ob.delivery_charge;
}


void Bill(Customer &ob)
{
   clrscr();
   cout<<"Name : ";
   puts(ob.name);
   cout<<"Address : ";
   puts(ob.address);
   cout<<"Mobile Number : ";
   puts(ob.mobile);
   cout<<"\n"<<endl;

   for(int i = 0; i < ob.number; i++)
   {
      cout<<i+1<<"."<<endl;
      cout<<"Category : ";
      puts(ob.category[i]);
      cout<<"Sub Category : ";
      puts(ob.sub_category[i]);
      cout<<"Price : ";
      cout<<ob.price[i]<<endl;
      cout<<"Quantity : ";
      cout<<ob.quantity[i];
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

   cout<<"\nC. Discount Rates"<<endl;
   cout<<"1. For 500 and less discount rate is 5%"<<endl;
   cout<<"2. For above 500 and less than 1500 discount rate is 10%"<<endl;
   cout<<"3. For over 1500 discount rate is 15%"<<endl;
   cout<<"Discount is calculated on gross amount"<<endl;

   cout<<"\nD. Terms And Conditions"<<endl;
   cout<<"1. We don't deliver food from other company"<<endl;
   cout<<"2. The company doesn't take responsibility for delivery within fixed time"<<endl;
   cout<<"3. There will be no return of order unless there is mixup of order"<<endl;
   cout<<"For any queries contact 9074325784"<<endl;
   clrscr();
}


void Feedback()
{
   int a, b, c;
   char feedback[50];
   cout<<"Your Feedback is valueable to us"<<endl;
   cout<<"\nRate the food(0-10) : ";
   cin>>a;
   cout<<"Rate our delivery(0-10) : ";
   cin>>b;
   cout<<"Rate our app interface(0-10) : ";
   cin>>c;
   if(a < 7 || b < 7 || c < 7)
   {
      cout<<"\nSorry for the inconvenience"<<endl;
      cout<<"We would try to improve our service"<<endl;
   }
   else
      cout<<"\nThank You"<<endl;
   cout<<endl;
   cout<<"Please enter your comment"<<endl;
   gets(feedback);
   clrscr();
}


void main()
{
   clrscr();
   Customer c;
   Customer_Details(c);
   Outlet(c);
   Menu(c);
   Calculate(c);
   char p;
   do
   {
      cout<<endl;
      cout<<"Enter T to view Terms and Conditions"<<endl;
      cout<<"Enter F to give Feedback"<<endl;
      cout<<"Enter B to proceed to Bill"<<endl;
      cout<<"Enter your choice ";
      cin>>p;
      if(p == 'T' || p == 't')
	 Terms();
      else if(p == 'F' || p == 'f')
	 Feedback();
   }
   while(p != 'B' && p != 'b');
   Bill(c);
   getch();
}