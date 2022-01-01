#include <stdio.h>
#include <math.h>

int main( int argc, char ** argv )
{
	double sampling_rate = 48000;
	/* int bit_depth = sizeof short; */
	double frequency = 2000;
	int duration = 10;


	for
	(
		int i = 0;
		i < ( sampling_rate * duration );
		i++
	)
	{
		printf( "%f\n", sin( 2 * M_PI * frequency * i * 1/sampling_rate ) );
	}
}
