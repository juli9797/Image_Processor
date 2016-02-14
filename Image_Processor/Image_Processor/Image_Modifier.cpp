#include "Image_Modifier.h"
#include <memory>
#include <vector>

Image_Modifier::Image_Modifier()
{
}


void Image_Modifier::invert(Image_8 * image)
{
	auto pixels = image->get_pixels();
	for (int i = 0; i < pixels->size(); i++) {
		pixels->at(i).set_RGB((255 - pixels->at(i).get_r()), (255 - pixels->at(i).get_g()), (255 - pixels->at(i).get_b()));
	}
	int i = 0;
}
void Image_Modifier::grey_value(Image_8 * image)
{
	auto pixels = image->get_pixels();
	for (int i = 0; i < pixels->size(); i++) {
<<<<<<< HEAD

		unsigned char grauwert = (unsigned char)((pixels->at(i)->get_r()+ pixels->at(i)->get_g()+ pixels->at(i)->get_b())/3);

		pixels->at(i)->set_RGB(grauwert, grauwert, grauwert);
=======
		unsigned char grauwert = (unsigned char)((pixels->at(i).get_r() + pixels->at(i).get_g() + pixels->at(i).get_b()) / 3);
		pixels->at(i).set_RGB(grauwert, grauwert, grauwert);
>>>>>>> hannes/master
	}
}


Image_Modifier::~Image_Modifier()
{
}
