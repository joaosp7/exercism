// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <math.h>   

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly
    // rate
    double billable_hours = 8.0;
    return billable_hours * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    double discount_porcentage = discount /  100;
    double final_price = before_discount - (before_discount * discount_porcentage);
    return final_price;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // TODO: Implement a function to calculate the monthly rate, and apply a
    // discount.
    double billable_days = 22.0;
    double daily_price = daily_rate(hourly_rate);
    double full_month_price = daily_price * billable_days;
    return ceil(apply_discount(full_month_price, discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double daily_full_price = daily_rate(hourly_rate);
    double daily_price = apply_discount(daily_full_price, discount);
    int days = floor(budget / daily_price);
    return days;
}
