
#ifndef SAMPLE4_CLASS_H
# define SAMPLE4_CLASS_H

class Sample4
{
	public:

		int			publicFoo;

		Sample4( void );
		~Sample4( void );

		void	publicBar( void ) const;


	private:

		int		_privateFoo;

		void	_privateBar(void) const;
};



#endif   //  ################################### SAMPLE3_CLASS_H //