#ifndef __header_h__
#define __header_h__

typedef struct calc_arthmetic
{
    /**
     * @brief structure for arthmetic operations
     * 
     */
    float num_1;
    float num_2;
} calc_arthmetic;

typedef struct result
{
    /**
     * @brief structure for result
     * 
     */
    float final_answer;
    
}result;

typedef struct calc_st
{
    /**
     * @brief strcture for calculating specific operations
     * 
     */
    float num_1;
}calc_st;
typedef struct bmi_cal
{
    float num_1;
    float num_2;
}bmi_cal;
typedef struct simple_cal
{
    /* data */
    float num_1;
    float num_2;
    float num_3;

}simple_cal;
typedef struct compound_cal
{
    /* data */
    float num_1;
    float num_2;
    float num_3;

}compound_cal;

typedef enum error
{
    /**
     * @brief Enum for unit testing the functions
     * 
     */
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}error;

enum naming_arthemetic
{
    /**
     * @brief Naming values to the variables
     * 
     */

    ADD=1,
    MUL=2,
    SUB=3,
    DIV=4,
    EXIT=5
};

enum naming_scientific
{
    /**
     * @brief Naming values to the variables
     * 
     */
    LOG=1,
    POWER=2,
    SQRT=3
};
enum naming_trigo
{
    /**
     * @brief Naming values to the variables
     * 
     */
    SIN=1,
    COS=2,
    TAN=3
};
enum naming_currency
{
    USD=1,
    KWD=2,
    AUD=3,

};

typedef struct result_t
{
    double final_answer;
}result_t;

void main_menu(void);
void arthmetic_menu(void);
void scientific_menu(void);
void trignometric_menu(void);
void simple_menu(void);
void bmi_menu(void);
void compound_menu(void);
void currency_menu(void);
void unit_menu(void);
void area_menu(void);

error add(calc_arthmetic n,result* answer);
error sub(calc_arthmetic n,result* answer);
error mul(calc_arthmetic n,result* answer);
error divv(calc_arthmetic n,result* answer);
error logg(calc_st n,result* answer);
error power(calc_arthmetic n,result* answer);
error sqrtt(calc_st n,result* answer);
error sinn(calc_st n,result_t* answer);
error coss(calc_st n,result_t* answer);
error tann(calc_st n,result_t* answer);
error simple(simple_cal s1,result* answer );
error bmi(bmi_cal b,result* answer );
error compound(compound_cal c,result* answer );
error usd(calc_st n,result_t answer);
error aud(calc_st n,result_t answer);
error kwd(calc_st n,result_t answer);
error triangle(calc_arthmetic t1,result* answer);
error square(calc_st s,result* answer);
error rectangle(calc_arthmetic r,result* answer);
error circle(calc_st c,result* answer)
error parallelogram(calc_arthmetic p,result* answer);
#endif