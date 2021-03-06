/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcDistanceExpression.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcDistanceExpression 
IfcDistanceExpression::IfcDistanceExpression( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcDistanceExpression::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcDistanceExpression> copy_self( new IfcDistanceExpression() );
	if( m_DistanceAlong ) { copy_self->m_DistanceAlong = dynamic_pointer_cast<IfcLengthMeasure>( m_DistanceAlong->getDeepCopy(options) ); }
	if( m_OffsetLateral ) { copy_self->m_OffsetLateral = dynamic_pointer_cast<IfcLengthMeasure>( m_OffsetLateral->getDeepCopy(options) ); }
	if( m_OffsetVertical ) { copy_self->m_OffsetVertical = dynamic_pointer_cast<IfcLengthMeasure>( m_OffsetVertical->getDeepCopy(options) ); }
	if( m_OffsetLongitudinal ) { copy_self->m_OffsetLongitudinal = dynamic_pointer_cast<IfcLengthMeasure>( m_OffsetLongitudinal->getDeepCopy(options) ); }
	if( m_AlongHorizontal ) { copy_self->m_AlongHorizontal = dynamic_pointer_cast<IfcBoolean>( m_AlongHorizontal->getDeepCopy(options) ); }
	return copy_self;
}
void IfcDistanceExpression::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDISTANCEEXPRESSION" << "(";
	if( m_DistanceAlong ) { m_DistanceAlong->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OffsetLateral ) { m_OffsetLateral->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OffsetVertical ) { m_OffsetVertical->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OffsetLongitudinal ) { m_OffsetLongitudinal->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_AlongHorizontal ) { m_AlongHorizontal->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcDistanceExpression::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDistanceExpression::toString() const { return L"IfcDistanceExpression"; }
void IfcDistanceExpression::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDistanceExpression, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_DistanceAlong = IfcLengthMeasure::createObjectFromSTEP( args[0], map );
	m_OffsetLateral = IfcLengthMeasure::createObjectFromSTEP( args[1], map );
	m_OffsetVertical = IfcLengthMeasure::createObjectFromSTEP( args[2], map );
	m_OffsetLongitudinal = IfcLengthMeasure::createObjectFromSTEP( args[3], map );
	m_AlongHorizontal = IfcBoolean::createObjectFromSTEP( args[4], map );
}
void IfcDistanceExpression::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "DistanceAlong", m_DistanceAlong ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetLateral", m_OffsetLateral ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetVertical", m_OffsetVertical ) );
	vec_attributes.emplace_back( std::make_pair( "OffsetLongitudinal", m_OffsetLongitudinal ) );
	vec_attributes.emplace_back( std::make_pair( "AlongHorizontal", m_AlongHorizontal ) );
}
void IfcDistanceExpression::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcDistanceExpression::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcDistanceExpression::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
