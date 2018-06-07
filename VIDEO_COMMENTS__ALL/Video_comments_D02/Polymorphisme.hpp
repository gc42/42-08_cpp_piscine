//
// Created by Guillaume CARON on 3/29/18.
//

#ifndef CPP_PISCINE_POLYMORPHISME_HPP
#define CPP_PISCINE_POLYMORPHISME_HPP


class Sample1
{
public:
	Sample1(void);
	~Sample1(void);

	void const	bar(char    const c);
	void const	bar(int     const n);
	void const	bar(float   const z);
	void const	bar(Sample1 const & i);  // Reference de Sample1 const


};




#endif // ****************** // CPP_PISCINE_POLYMORPHISME_HPP //
