#include<cstdlib>
#include<iostream>
using namespace std;
int main( void )
{
	int arr[ 5 ] = { 10, 20, 30 };

	int *ptr = new (&arr[3]) int( 40 ); //Placement new operator
	//int *ptr = (int*)::operator new(1 * sizeof( int ), &arr[ 3 ] );

	return 0;
}
class Complex
{
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
	}
};
int main8( void )
{
	//Complex *ptr = new Complex();	//Complex::Complex( ) will call
	//Complex *ptr = ( Complex*)malloc( sizeof( Complex ) ); //Complex::Complex( ) do not call
	return 0;
}
int main7( void )
{
	int count = -3 ;
	//int *ptr = ( int* )malloc( count * sizeof( int ) );
	int *ptr = new int[ count ];
	if( ptr == NULL )
		cout<<"NULL"<<endl;
	else
		cout<<ptr<<endl;
	return 0;
}
int main6( void )
{
	int **ptr = new int*[ 2 ];
	for( int index = 0; index < 2; ++ index )
		ptr[ index ] = new int[ 3 ];

	for( int row = 0 ; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ row ][ col ];
		}
	}
	for( int row = 0 ; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<ptr[ row ][ col ]<<"	";
		}
		cout<<endl;
	}

	for( int index = 0; index < 2; ++ index )
		delete[] ptr[ index ];
	delete[] ptr;
	ptr = NULL;
	return 0;
}
int main5( void )
{
	int** ptr = ( int** )malloc( 2 * sizeof( int* ) );
	for( int index = 0; index < 2; ++ index )
		ptr[ index ] = ( int* )malloc( 3 * sizeof( int ) );

	for( int row = 0 ; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ row ][ col ];
		}
	}
	for( int row = 0 ; row < 2; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<ptr[ row ][ col ]<<"	";
		}
		cout<<endl;
	}

	for( int index = 0; index < 2; ++ index )
		free( ptr[ index ] );
	free( ptr );
	ptr = NULL;
	return 0;
}
int main4( void )
{
	int *ptr = new int[ 3 ];
	//int *ptr = ( void*)::operator new[](3 * sizeof( int ) );

	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;
	ptr[ 2 ] = 30;

	for( int index = 0; index <3; ++ index )
		cout<<ptr[ index ] <<endl;

	delete[] ptr;
	//::operator delete( ptr );

	ptr = NULL;
	return 0;
}
int main3( void )
{
	int *ptr = ( int* )malloc( 3 * sizeof( int ) );
	if( ptr != NULL )
	{
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;

		for( int index = 0; index <3; ++ index )
		{
			//cout<< *(ptr + index) <<endl;
			cout<<ptr[ index ] <<endl;
		}
		free( ptr );
		ptr = NULL;
	}
	else
		cout<<"Bad Memory Allocation"<<endl;
	return 0;
}
int main2( void )
{
	//Memory Allocation
	int *ptr = new int;
	//int *ptr = (int*)::operator new(sizeof( int ))

	*ptr = 125;
	cout<<"Value	:	"<<*ptr<<endl;

	//Memory Deallocation
	delete ptr;
	//::operator delete(ptr);

	ptr = NULL;

	return 0;
}
int main1( void )
{
	//Memory Allocation
	int *ptr = ( int* )malloc( sizeof( int ) );
	if( ptr != NULL )
	{
		*ptr = 125;
		cout<<"Value	:	"<<*ptr<<endl;
		//Memory Deallocation
		free( ptr );
		ptr = NULL;
	}
	else
		cout<<"Bad Memory Allocation"<<endl;
	return 0;
}
