/*
 * Function declarations for our save functions to a number of different 
 * picture file formats
 */

#ifndef SAVE001_h
#define SAVE001_H

/*
 * converts image to a PGM file (Portable Gray Map), a grayscale
 * 2-dimensional image
 */
void frame_pgm(unsigned char *buffer,
            int wrap,
            int xsize,
            int ysize,
            char *filename);

/*
 * saves our frames to a PPM file (Portable Pixmap Format), uses
 * text to store information about our image
 */
void save_ppm(AV_frame * p_frame,
            int width,
            int height,
            int i_frame);

#endif

