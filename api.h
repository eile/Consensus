#ifndef API_H
#define API_H

/*---------------------------------------------------------------------------
	API 		- public
---------------------------------------------------------------------------*/

Entity	*cn_entity( char *name );
char	*cn_name( Entity *e );
Entity	*cn_new( char *name );
void	cn_free( Entity *e );
void	*cn_va_get_value( char *va_name, Entity *e );
registryEntry *cn_va_set_value( char *va_name, Entity *e, void *value );
Entity	*cn_instance( Entity *source, Entity *medium, Entity *target );
Entity	*cn_instantiate( Entity *source, Entity *medium, Entity *target );
int	cn_is_active( Entity *e );
int	cn_activate( Entity *e );
int	cn_deactivate( Entity *e );
void	cn_release( Entity *e );
int	cn_instantiate_narrative( Entity *e, Narrative *n );
int	cn_activate_narrative( Entity *e, char *name );


#endif	// API_H