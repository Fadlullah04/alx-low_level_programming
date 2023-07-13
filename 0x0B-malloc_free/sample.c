#include"main.h"

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0)
        return NULL; // Invalid dimensions

    int **grid = (int **)malloc(sizeof(int *) * height);
    if (grid == NULL)
        return NULL; // Memory allocation failed

    for (int hei = 0; hei < height; hei++) {
        grid[hei] = (int *)malloc(sizeof(int) * width);
        if (grid[hei] == NULL) {
            // Memory allocation for a row failed
            // Deallocate previously allocated memory
            for (int wid = 0; wid < hei; wid++)
                free(grid[wid]);
            free(grid);
            return NULL;
        }

        for (int wid = 0; wid <= hei; wid++)
            grid[hei][wid] = 0; // Initialize with zeros
    }

    return grid; // Successful allocation
}
