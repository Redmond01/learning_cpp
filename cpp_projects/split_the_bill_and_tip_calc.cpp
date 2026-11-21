/*
The Split-Bill & Tip Calculator

What you build: Ask for the total bill, tip percentage, and number of people, then output the tip amount, grand total,
and cost per person.

The C++ Lesson: Integer vs. Floating-Point Division. If you divide 10 / 4 using ints, 
C++ chops off the decimal and gives 2 instead of 2.5. You'll learn how to mix double 
and int cleanly (and optionally format currency to 2 decimal places).
*/


/**Above is a tool to build 2 simple applications, listed below
 * 
 *  split-bill application
 *  tip calculator
 * 
 * we follow the 3 standard rules, input >> process >> outupt
 * 
 * INPUT:
 * split-bitll app will have the following
 * 
 * 1. the bill
 * 2. how many ppl on the table
 * 3. how much each will pay
 * 
 * INPUT:
 * Tip calculator will have the following
 * 1. how many percent is the tip of total purchase
 * 2. how much is the tip
 * 
 * 
 * PROCESS
 * To make this work, we will be collecting some information from the io,and those are 
 * 1. total amount on the bill
 * 2. how many percentage is the tip for our bill
 * 
 * 
 * OUTPUT
 * We give them exact amount each person will pay
 * we provide the amount total amount for the tip
 * we provide how much each person on the table will add as tip
 * we provide total amount of tip in cash for transparency.
 * 
 * 
 * 
 * BELOW IS THE SOLUTION OF THE APPLICATION
 * what is the total cost of our meal? 
240.87
 how many ppl are on the table? 
5
 how many percent is the tip on our meal ?
3.2
total cost of our mean is 240.87 and the tip percentage is 3.2
split for everyone is 48.174
total tip for the meal is 7.2261
Individual will be paying 1.44522 as tip
Total individual fees including tip is 49.6192
 * 
*/ 


#include <iostream>

using namespace std;

float calculate_spilit(float total_amount, int total_number_of_seater)
{
    float split {total_amount / total_number_of_seater};

    return split;
}

float calculate_tip(float total_amount, int shop_tip_percentage)
{
    float tip {(total_amount * shop_tip_percentage) / 100};

    return tip;
}

float calculate_individual_tip(float total_tip_to_pay, float individual_tip_top_pay)
{
    float individual_tip {total_tip_to_pay/individual_tip_top_pay};

    return individual_tip;
}

float total_split_plus_tip(float split, float tip)
{
    return split + tip;
}


int main()
{
    float total_meal_cost{};
    float tip_percent{};
    int numbers_of_ppl_on_table{};

    cout << "what is the total cost of our meal? "<< endl;

    cin >> total_meal_cost;

    cout << " how many ppl are on the table? " << endl;

    cin >> numbers_of_ppl_on_table;

    cout << " how many percent is the tip on our meal ?" << endl;

    cin >> tip_percent;


    cout << "total cost of our mean is " << total_meal_cost << " and the tip percentage is " << tip_percent<< endl;
    cout << "split for everyone is "<< calculate_spilit(total_meal_cost, numbers_of_ppl_on_table) << endl;
    cout << "total tip for the meal is " << calculate_tip(total_meal_cost,tip_percent) << endl;
    cout << "Individual will be paying " << calculate_individual_tip(calculate_tip(total_meal_cost,tip_percent),numbers_of_ppl_on_table ) << " as tip" << endl;
    cout << "Total individual fees including tip is " << total_split_plus_tip( calculate_spilit(total_meal_cost, numbers_of_ppl_on_table), calculate_individual_tip(calculate_tip(total_meal_cost,tip_percent),numbers_of_ppl_on_table )) << endl;
    return 0;
}