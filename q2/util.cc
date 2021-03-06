#include "util.h"

Json::Value * createNullDateJSON() {
	Json::Value * value = new Json::Value( Json::ValueType::objectValue );
	(*value)[ "date" ] = "NULL";
	return value;
} // createDateJSON

Json::Value * createDateJSON( const Date & d ) {
	Date::ymd_type ymd = d.year_month_day();
	Json::Value * value = new Json::Value( Json::ValueType::objectValue );
	(*value)[ "date" ] = Json::Value( Json::ValueType::objectValue );
	(*value)[ "date" ][ "year" ] = static_cast<unsigned short int>( ymd.year );
	(*value)[ "date" ][ "month" ] = static_cast<unsigned short int>( ymd.month );
	(*value)[ "date" ][ "day" ] = static_cast<unsigned short int>( ymd.day );

	return value;
} // createDateJSON

bool validateJSONDate( const Json::Value & date ) {
	if ( not date.isObject() ) return false;
	if ( not date.isMember( "date" ) ) return false;

	// If the "date" is a string, it must be the NULL date.
	if ( date[ "date" ].isString() ) {
		if ( date[ "date" ].asString() == "NULL" ) return true;
		return false;
	} // if

	if ( not date[ "date" ].isObject() ) return false;

	if ( not date[ "date" ].isMember( "year" ) || 
		not date[ "date" ].isMember( "month" ) || 
		not date[ "date" ].isMember( "day" ) ) return false;

	if ( not date[ "date" ][ "year" ].isUInt() || 
		not date[ "date" ][ "month" ].isUInt() || 
		not date[ "date" ][ "day" ].isUInt() ) return false;

	return true;
} // validateJSONDate

Date * createDateFromJSON( const Json::Value & root ) {
	if ( not validateJSONDate( root ) ) return nullptr;

	if ( root[ "date" ].isString() ) return nullptr;

	return new Date( root[ "date" ][ "year" ].asUInt(), root[ "date" ][ "month" ].asUInt(), 
		root[ "date" ][ "day" ].asUInt() );
} // createDateFromJSON