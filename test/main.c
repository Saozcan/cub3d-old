//
// Created by saozcan on 02.02.2023.
//


#include "stdio.h"
#include "./minilibx/mlx.h"

int main() {

    void *mlx = mlx_init();
    void *mlx_win = mlx_new_window(mlx, 1920, 1080, "377266");


    mlx_loop(mlx);
}