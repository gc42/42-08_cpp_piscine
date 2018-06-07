#ifndef SAMPLE6_CLASS_H
# define SAMPLE6_CLASS_H

class Sample6
{
	public:
		
		Sample6( int v );
		~Sample6( void );

		int		getFoo(void) const;
		int	    compare( Sample6 * other ) const;



	private:

		int		_foo;

};



#endif   //  ################################### SAMPLE6_CLASS_H //