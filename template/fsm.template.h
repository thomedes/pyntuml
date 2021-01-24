#ifndef {{upcase_name}}_H__
#define {{upcase_name}}_H__

/*---------------------------------------------------------------------------*\
                              W A R N I N G

                      AUTOMATICALLY GENERATED FILE
 
              DO NOT EDIT - IT WILL BE OVERWRITTEN ON NEXT BUILD                              
\*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*\
    S T A T E S
\*---------------------------------------------------------------------------*/
typedef enum {{ fsm_name }}_state_e {
{{#states}}
    {{ fsm_name }}_{{name}},
{{/states}}
} {{ fsm_name }}_state_t;

/**
 * Array of state names. Use the {{ fsm_name }}_state_t as index
 */
const char *{{ fsm_name }}_state_name[];

/*---------------------------------------------------------------------------*\
    E V E N T S
\*---------------------------------------------------------------------------*/
typedef enum {{ fsm_name }}_event_e {
{{#events}}
    {{ fsm_name }}_{{name}},
{{/events}}
} {{ fsm_name }}_event_t;

/**
 * Array of event names. Use the {{ fsm_name }}_event_t as index
 */
const char *{{ fsm_name }}_event_name[];

#endif // {{upcase_name}}_H__