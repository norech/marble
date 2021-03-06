/*
** EPITECH PROJECT, 2021
** marble by Alexis Cheron
** File description:
** Source code
*/
#include <marble/common.h>

#ifndef MRBL_JSON_H
#define MRBL_JSON_H

typedef struct mrbl_json {
    mrbl_type_t type;
    mrbl_u_type_t value;
} mrbl_json_t;

mrbl_json_t *mrbl_parse_json(char *input);
void mrbl_free_json(mrbl_json_t *json);

#endif //MRBL_JSON_H
