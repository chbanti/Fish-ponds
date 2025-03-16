#include <stdio.h>
#include "welcome_screen.h"
#include "wifi_connect.h"
#include "db_connect.h"
#include "fish_selection.h"
#include "data_collection.h"
#include "analysis.h"
#include "alert.h"
#include "restart.h"
int main() {
    hardware_init();
    welcome_screen_state();
    return 0;
}

void welcome_screen_state() {
    display_welcome_screen();
}

void button_press_state() {
    handle_button_press();
}

void collect_data_state() {
    read_sensor_data();
}

void analyze_data_state() {
    process_sensor_data();
}

void normal_operation_state() {
    display_normal_operation();
}


void app_main(void)
{
    void welcome_screen_state();
    void button_press_state();
    void collect_data_state();
    void analyze_data_state();
    void normal_operation_state();
}