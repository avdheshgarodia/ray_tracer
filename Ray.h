#ifndef __RAY__
#define __RAY__

#include "Point3D.h"
#include "Vector3D.h"

class Ray {
	public:
	
		Point3D			o;  	// origin 
		Vector3D		d; 		// direction 
		

		//Defualt Constructor
		Ray(void);			
		
		//Constructor
		Ray(const Point3D& origin, const Vector3D& dir);	
		
		//Copy Constructor
		Ray(const Ray& ray); 		
		
		//Assignment Operator
		Ray& 						
		operator= (const Ray& rhs);
		 
		//Destructor							
		~Ray(void);
};

#endif